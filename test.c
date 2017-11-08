#include "libft.h"
#include <sys/select.h>
#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include <ctype.h>
#include <locale.h>

int kbhit(void)
{
	struct timeval tv;
	fd_set read_fd;

	tv.tv_sec=0;
	tv.tv_usec=0;
	FD_ZERO(&read_fd);
	FD_SET(0,&read_fd);

	if(select(1, &read_fd, NULL, NULL, &tv) == -1)
		return 0;

	if(FD_ISSET(0,&read_fd))
		return 1;

	return 0;
}

void	pr1(char *test, size_t v1, size_t v2)
{
	if (v1 == v2)
		printf("_\t");
	else
		printf("KO\t");
	printf("Valeur testee '%s'\tft_: %zu vs libc: %zu\n", test, v1, v2);
}

void	pr2(int test, int v1, int v2)
{
	if (v1 == v2)
		printf("_\t");
	else
		printf("KO\t");
	printf("Valeur testee '%d'\tft_: %d vs libc: %d\n", test, v1, v2);
}

void	pr3(char *v1, char *v2)
{
	if (ft_strcmp(v1, v2) == 0)
		printf("_\t");
	else
		printf("KO\t");
	printf("Valeur testee ''\tft_: %s vs libc: %s\n", v1, v2);
}

void	tst_strlen(void)
{
	char	tst[5][50] = {"test1", "test2", "171", "\192"};
	int		i;

	i = 0;
	while(i <= 4)
	{
		pr1(tst[i], ft_strlen(tst[i]), strlen(tst[i]));
		i++;
	}
}

void	tst_strlcat(void)
{
}

void	tst_isalpha(void)
{
	int		tst[6] = {-1,0,1,65,3000,199};
	int		i;

	i = 0;
	while(i <= 5)
	{
		if (i == 5)
			setlocale(LC_CTYPE, "tr_TR.UTF-8");
		pr2(tst[i], ft_isalpha(tst[i]), isalpha(tst[i]));
		i++;
	}
}

void	tst_memset(void)
{
	char	tst[2][50] = {"123456789", ""};
	int		i;

	i = 0;
	while (i <= 1)
	{
		pr3(ft_memset(tst[i], 5, 8), memset(tst[i], 5, 8));
		i++;
	}
	pr3(ft_memset(tst[0], 65, 8), memset(tst[0], 65, 8));
	pr3(ft_memset(tst[1], 65, 8), memset(tst[1], 65, 8));
	pr3(ft_memset(tst[0], 230, 50), memset(tst[0], 230, 50));
}

int		main(void)
{
	int				i;
	char			name[4][20] = {"strlen", "strlcat","isalpha", "memset"};
	struct stat		filestat;
	char			filepath[50];
	typedef void 	(*f)(void);
	f functions[] = {&tst_strlen, &tst_strlcat, &tst_isalpha, &tst_memset};

	i = 0;
	while (i <= 3)
	{
		filepath[0] = '\0';
		strcat(filepath, "./ft_");
		strcat(filepath, name[i]);
		strcat(filepath, ".c");
		if (stat(filepath, &filestat) < 0)
			printf("%s non trouve.\n", filepath);
		else
		{
			printf("%s\n", name[i]);
			filepath[0] = '\0';
			strcat(filepath, "tst_");
			strcat(filepath, name[i]);
			functions[i]();
		}
		while(!kbhit());
		i++;
	}
	return(0);
}

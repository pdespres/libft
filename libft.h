/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdespres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 12:15:10 by pdespres          #+#    #+#             */
/*   Updated: 2017/11/09 12:40:26 by pdespres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

#include <stdio.h>

# define MAX(a, b) ((a) < (b) ? (b) : (a))

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void*s, size_t n);
void		*ft_memcpy(void *dst, void *src, size_t n);
void		*ft_memccpy(void *dst, void *src, int c, size_t n);
void		*ft_memmove(void *dst, void *src, size_t len);
void		*ft_memchr(void *s, int c, size_t n);
int			ft_memcmp(void *s1, void *s2, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *str);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, char const *src, size_t len);
char		*ft_strcat(char *s1, char *s2);
char		*ft_strncat(char *s1, char *s2, size_t n);
size_t		ft_strlcat(char *dst, char *src, size_t size);
char		*ft_strchr(char *s, int c);
char		*ft_strrchr(char *s, int c);
char		*ft_strstr(char *str, char *tofind);
char		*ft_strnstr(char *str, char *tofind, size_t len);
int			ft_strcmp(char const *s1, char const *s2);
int			ft_strncmp(char const *s1, char const *s2, size_t n);
int			ft_atoi(char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

void		*ft_memalloc(size_t size);
void		ft_memdel(void **ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

int			ft_islower(int c);
int			ft_isupper(int c);

#endif

#ifndef LIBFT_H
# define LIBFT_H

//Test----
#include <stdio.h>
//--------

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src,  size_t n);
size_t	ft_strlen(const char *str);


int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);


void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);


void	ft_bzero(void *s, size_t n);


#endif

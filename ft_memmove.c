#include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(char *s);

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char c[n];

	
	ft_memcpy(c, src, n);
	ft_memcpy(dest, c, n);
	return (dest);
}
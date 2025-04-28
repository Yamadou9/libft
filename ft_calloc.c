#include<stdio.h>
#include<stdlib.h>
#include <stdint.h>

void    *ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;
	size_t 	t;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (0);
	t = nmemb * size;
	s = malloc(size * nmemb);
	if (s == NULL)
		return (NULL);
	ft_memset(s, 0, t);
	return (s);
}
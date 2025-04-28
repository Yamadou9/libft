#include<stdlib.h>

char	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	c = c % 256;
	i = 0;
	while (*(unsigned char *)(s + i) != c && i < n)
		i++;
	if (i == n)
		return (0);
	return ((char *)(s + i));
}


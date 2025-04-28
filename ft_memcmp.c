#include<stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while(*(unsigned char *)(s1 + i) == *(unsigned char *)(s2 + i) && i < n - 1)
		i++;
	return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
}

/*int main()
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("%d", ft_memcmp(s2, s3, 4));
}*/
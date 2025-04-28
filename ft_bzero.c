#include<stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;
	
	i = 0;
	str = s;
	while (i < n)
		str[i++] = 0;
}

/*int main()
{
	void *s[15];
	ft_bzero(s, 26);
}*/
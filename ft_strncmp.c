#include<stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (0);
	while(s1[i] == s2[i] && i < n - 1 && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*int	ft_atoi(const char *nptr);
int		main(int ac, char **av)
{
	printf("%d\n", ft_strncmp(av[1], av[2], ft_atoi(av[3])));
	printf("%d\n", strncmp(av[1], av[2], ft_atoi(av[3])));
}*/
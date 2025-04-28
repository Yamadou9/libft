#include<stdlib.h>
#include<stdio.h>

size_t	ft_strlen(const char *s);

char    *ft_strjoin(char const *s1, char const *s2)
{
	char    *res;
	int		i;
	int		j;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}
/*int main(int ac, char **av)
{
	printf("%s", ft_strjoin(av[1], av[2]));
}*/
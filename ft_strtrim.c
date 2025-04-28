#include<stdlib.h>
#include<stdio.h>

int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_strlenset(char const *s1, char const *set)
{
	int	taille;
	int	i;

	taille = 0;
	i = 0;
	while (s1[i])
	{
		if (is_set(s1[i], set) == 1)
			taille++;
		i++;
	}
	return (taille);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*str;

	j = 0;
	i = 0;
	str = malloc(sizeof(char) * (ft_strlenset(s1, set) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		if (is_set(s1[i], set) == 1)
		{
			str[j] = s1[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}		
/*int	main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strtrim(av[1], av[2]));
}*/	

	

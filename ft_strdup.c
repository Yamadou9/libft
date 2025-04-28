#include<stdlib.h>
#include<stdio.h>

size_t	ft_strlen(const char *s);

char	*ft_strdup(const char *s)
{
	size_t		i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (res == NULL)
		return (NULL);
	while (i < ft_strlen(s))
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
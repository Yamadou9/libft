#include<stdio.h>

size_t ft_strlen(char *s);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;
	
	i = 0;
	while (i < ft_strlen(s))
	{
		f((unsigned int)i, s + i);
		i++;
	}
}

/*void
iter(unsigned int i, char *s)
{
	*s += i;
}

int		main()
{
	{
		char s[] = "0000000000";
		ft_striteri(s, iter);
		
	}
}*/
	
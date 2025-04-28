#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (fd >= 0)
	{
		int	i;
	
		i = 0;
		while (s[i])
			write(fd, &s[i++], 1);
	}
}

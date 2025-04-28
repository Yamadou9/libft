/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:06:04 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/28 16:08:00 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);

int	ft_pass(char *res)
{
	int	i;

	i = 0;
	while (res[i])
		i++;
	return (i);
}

char	*ft_itoto(char *res, int n)
{
	int			i;

	i = 0;
	if (n < 0)
	{
		res[0] = '-';
		n = n * -1;
	}
	if (n < 10)
	{
		i = ft_pass(res);
		res[i] = n + 48;
	}
	else
	{
		ft_itoto(res, n / 10);
		i = ft_pass(res);
		res[i] = n % 10 + 48;
	}
	i = ft_pass(res);
	res[i] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int		t;
	long	j;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		j = (-1) * n;
	else
		j = n;
	t = 1;
	while (j >= 10)
	{
		j = j / 10;
		t++;
	}
	if (n < 0)
		res = calloc(sizeof(char), (t + 2));
	else
		res = calloc(sizeof(char), (t + 1));
	if (res == NULL)
		return (NULL);
	res = ft_itoto(res, n);
	return (res);
}
/*int		main(int ac, char **av)
{
	printf("%s", ft_itoa(-2147483648));
}*/
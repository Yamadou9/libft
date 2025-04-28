/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:49:15 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/28 16:49:16 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

size_t	ft_strlen(const char *s);

size_t	ft_countword(char const *s, char c)
{
	bool	set;
	int		i;
	size_t	word;

	word = 0;
	i = 0;
	set = 1;
	while (s[i])
	{
		if (set == 1 && s[i] != c)
		{
			word++;
			set = 0;
		}
		else if (s[i] == c)
			set = 1;
		i++;
	}
	return (word);
}

size_t	len_set(char const *s, int o, char c)
{
	size_t	i;

	i = 0;
	while (s[o] && s[o] != c)
	{
		i++;
		o++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	size_t	j;
	int		r;

	i = 0;
	j = 0;
	res = malloc(sizeof(char *) * (ft_countword(s, c) + 1));
	if (res == NULL)
		return (NULL);
	while (j < ft_countword(s, c))
	{
		r = 0;
		while (s[i] == c)
				i++;
		res[j] = malloc(sizeof(char) * len_set(s, i, c) + 1);
		while (s[i] != c && s[i])
			res[j][r++] = s[i++];
		res[j][r] = 0;
		j++;
	}
	res[j] = NULL;
	return (res);
}
/*int		main(int ac, char **av)
{
	char	**res = ft_split("  tripouille  42  ", ' ');
	int	i = 0;
	while (i < 2)
		printf("%s\n", res[i++]);
}*/

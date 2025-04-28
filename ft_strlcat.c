/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:37:04 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/28 16:35:08 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	str_len(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	d;
	size_t	i;
	size_t	s;

	d = str_len(dest);
	s = str_len(src);
	i = 0;
	if (size <= d)
		return (size + s);
	while (src[i] && (d + i) < (size - 1))
	{
		dest[d + i] = src[i];
		i++;
	}
	dest[d + i] = '\0';
	return (s + d);
}

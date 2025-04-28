/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:09:18 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/28 16:13:50 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!(s))
		return (NULL);
	while (i < n)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}

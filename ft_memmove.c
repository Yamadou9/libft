/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:09:11 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/28 19:58:18 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
size_t	ft_strlen(char *s);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	c[n];

	ft_memcpy(c, src, n);
	ft_memcpy(dest, c, n);
	return (dest);
}

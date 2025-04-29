/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydembele <ydembele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 17:07:20 by ydembele          #+#    #+#             */
/*   Updated: 2025/04/29 20:21:43 by ydembele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newnode_head;
	void	*temp;
	t_list	*jjj;
	t_list	*current;

	if (!lst || !f || !del)
		return (NULL);
	newnode_head = NULL;
	current = lst;
	while (current != NULL)
	{
		temp = f(current->content);
		jjj = ft_lstnew(temp);
		if (!jjj)
		{
			del(temp);
			ft_lstclear(&newnode_head, del);
			return (0);
		}
		ft_lstadd_back(&newnode_head, jjj);
		current = current->next;
	}
	return (newnode_head);
}
/*int main()
{
	#include <string.h>
	char tab[50][50] = {"je", "suis", "la", "gros"};
	t_list * l =  ft_lstnew(tab);
	for (int i = 1; i < 4; ++i)
			ft_lstadd_back(&l, ft_lstnew(tab + i));
	t_list * tmp = l;
	for (int i = 0; i < 4; ++i)
	{
			printf("p%sp, x%dx\n",(char *)tmp->content, i);
			tmp = (t_list *)tmp->next;
	}
	ft_lstclear(&tmp, free);
}*/
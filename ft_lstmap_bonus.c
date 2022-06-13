/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 06:13:29 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 06:15:20 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tail;

	if (!lst || !f)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (!head)
		return (NULL);
	tail = head;
	lst = lst->next;
	while (lst)
	{
		tail->next = ft_lstnew(f(lst->content));
		if (!tail->next)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		tail = tail->next;
		lst = lst->next;
	}
	tail->next = NULL;
	return (head);
}

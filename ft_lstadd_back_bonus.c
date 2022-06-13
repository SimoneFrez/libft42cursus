/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 06:05:48 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/06/11 06:06:41 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tail;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	tail = ft_lstlast(*alst);
	tail->next = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomes-d <sgomes-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 14:07:11 by sgomes-d          #+#    #+#             */
/*   Updated: 2022/05/14 14:36:57 by sgomes-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isalpha(int c);
int ft_isdigit(int c);

int	ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c))
		return(1);
	else
		return(0);
}


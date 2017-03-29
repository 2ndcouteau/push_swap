/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/15 20:40:52 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/25 17:25:38 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ft_push_back(t_pile **end_pile, t_pile *tmp_elem)
{
	if ((*end_pile)->nb != (*end_pile)->next->nb)
	{
		(*end_pile)->next->prev = tmp_elem;
		tmp_elem->next = (*end_pile)->next;
		tmp_elem->prev = *end_pile;
		(*end_pile)->next = tmp_elem;
		*end_pile = (*end_pile)->next;
	}
	else
	{
		(*end_pile)->prev = tmp_elem;
		(*end_pile)->next = tmp_elem;
		tmp_elem->next = *end_pile;
		tmp_elem->prev = *end_pile;
		*end_pile = (*end_pile)->next;
	}
}

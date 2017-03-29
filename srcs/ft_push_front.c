/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/23 00:06:29 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/24 23:11:57 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ft_push_front(t_pile **begin_pile, t_pile *tmp_elem)
{
	if (*begin_pile != NULL)
	{
		if ((*begin_pile)->nb != (*begin_pile)->prev->nb)
		{
			(*begin_pile)->prev->next = tmp_elem;
			tmp_elem->prev = (*begin_pile)->prev;
			tmp_elem->next = *begin_pile;
			(*begin_pile)->prev = tmp_elem;
			*begin_pile = (*begin_pile)->prev;
		}
		else
		{
			(*begin_pile)->prev = tmp_elem;
			(*begin_pile)->next = tmp_elem;
			tmp_elem->next = *begin_pile;
			tmp_elem->prev = *begin_pile;
			*begin_pile = (*begin_pile)->prev;
		}
	}
}

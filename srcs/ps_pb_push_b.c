/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_pb_push_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 17:53:43 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/24 21:44:55 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_pb_push_b(t_pile **begin_pile_b, t_pile **begin_pile_a)
{
	t_pile *tmp_elem;

	if (begin_pile_a != NULL && *begin_pile_a != NULL)
	{
		if (*begin_pile_b == NULL)
		{
			*begin_pile_b = ft_send_elem((*begin_pile_a)->nb);
			ft_boucle_pile(begin_pile_b, begin_pile_b);
			ft_remove_elem(begin_pile_a);
		}
		else
		{
			tmp_elem = ft_send_elem((*begin_pile_a)->nb);
			ft_push_front(begin_pile_b, tmp_elem);
			ft_remove_elem(begin_pile_a);
		}
	}
}

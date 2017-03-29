/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_px_push_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 17:53:43 by qrosa             #+#    #+#             */
/*   Updated: 2015/03/27 11:58:26 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_px_push_x(t_pile **begin_pile_recept, t_pile **begin_pile_send)
{
	t_pile *tmp_elem;

	if (begin_pile_send != NULL && *begin_pile_send != NULL)
	{
		if (*begin_pile_recept == NULL)
		{
			*begin_pile_recept = ft_send_elem((*begin_pile_send)->nb);
			ft_boucle_pile(begin_pile_recept, begin_pile_recept);
			ft_remove_elem(begin_pile_send);
		}
		else
		{
			tmp_elem = ft_send_elem((*begin_pile_send)->nb);
			ft_push_front(begin_pile_recept, tmp_elem);
			ft_remove_elem(begin_pile_send);
		}
	}
}

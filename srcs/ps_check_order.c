/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_order.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 18:50:40 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/19 16:45:15 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

int	ps_check_order(t_pile *begin_pile)
{
	t_pile	*tmp_pile;
	int		tri;

	tri = 0;
	tmp_pile = begin_pile;
	while (tmp_pile != begin_pile->prev)
	{
		if (tmp_pile->nb > tmp_pile->next->nb)
		{
			if (tmp_pile->nb == begin_pile->nb)
				tri = 1;
			else if (tri == 0 && tmp_pile->next->nb == begin_pile->prev->nb)
				tri = 2;
			else
				tri = 3;
		}
		tmp_pile = tmp_pile->next;
	}
	return (tri);
}

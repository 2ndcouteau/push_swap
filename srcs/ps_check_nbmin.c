/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_nbmin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 19:11:21 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/19 16:00:39 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

int		ps_check_nbmin(t_pile *begin_pile)
{
	t_pile	*tmp_pile;
	int		min;

	min = 2147483647;
	tmp_pile = begin_pile;
	while (tmp_pile->nb != begin_pile->prev->nb)
	{
		if (tmp_pile->nb < min)
			min = tmp_pile->nb;
		tmp_pile = tmp_pile->next;
	}
	if (tmp_pile->nb < min)
		min = tmp_pile->nb;
	return (min);
}

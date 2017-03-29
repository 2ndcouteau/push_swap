/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_check_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/19 16:16:07 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/19 16:27:09 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

int		ps_check_position(t_pile *begin_pile, int nb_elem, int min)
{
	int		cpt;

	cpt = 0;
	while (cpt != (nb_elem / 2) + 1)
	{
		if (begin_pile->nb == min)
			return (1);
		cpt++;
		begin_pile = begin_pile->next;
	}
	return (0);
}

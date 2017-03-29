/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/22 23:25:22 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 06:31:10 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ft_remove_elem(t_pile **begin_pile)
{
	t_pile	*tmp_pile_n;
	t_pile	*tmp_pile_p;

	if (begin_pile != NULL && *begin_pile != NULL)
	{
		if ((*begin_pile)->nb != (*begin_pile)->next->nb)
		{
			tmp_pile_n = (*begin_pile)->next;
			tmp_pile_p = (*begin_pile)->prev;
			tmp_pile_p->next = tmp_pile_n;
			tmp_pile_n->prev = tmp_pile_p;
			tmp_pile_n = *begin_pile;
			*begin_pile = (*begin_pile)->next;
			free(tmp_pile_n);
		}
		else
		{
			free(*begin_pile);
			*begin_pile = NULL;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 19:27:56 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 18:33:52 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static	void	part_one(t_pile **begin_pile, int *cpt, char *options, \
	int mark)
{
	if ((*begin_pile)->prev->nb > (*begin_pile)->next->nb)
	{
		if (mark == 1)
			ps_ra(begin_pile, cpt, options);
		else
			ps_ra(begin_pile, cpt, "00");
	}
	else
	{
		if ((*begin_pile)->next->nb < (*begin_pile)->nb)
		{
			ps_sa(begin_pile, cpt, "00");
			ft_putchar(' ');
		}
		if (mark == 1)
			ps_rra(begin_pile, cpt, options);
		else
			ps_rra(begin_pile, cpt, "00");
	}
}

void			ps_sort_three(t_pile **begin_pile, int *cpt, char *options, \
	int mark)
{
	if ((*begin_pile)->prev->nb < (*begin_pile)->nb)
		part_one(begin_pile, cpt, options, mark);
	else if ((*begin_pile)->next->nb < (*begin_pile)->nb)
	{
		if (mark == 1)
			ps_sa(begin_pile, cpt, options);
		else
			ps_sa(begin_pile, cpt, "00");
	}
	else
	{
		ps_sa(begin_pile, cpt, "00");
		ft_putchar(' ');
		if (mark == 1)
			ps_ra(begin_pile, cpt, options);
		else
			ps_ra(begin_pile, cpt, "00");
	}
}

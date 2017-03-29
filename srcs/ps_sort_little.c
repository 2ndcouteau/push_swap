/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_little.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 17:32:07 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 18:50:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static	int		ps_count_elem(t_pile *begin_pile)
{
	int		i;
	t_pile	*tmp_pile;

	i = 1;
	tmp_pile = begin_pile;
	while (tmp_pile->nb != begin_pile->prev->nb)
	{
		i++;
		tmp_pile = tmp_pile->next;
	}
	return (i);
}

void			ps_sort_little(t_pile **begin_pile_a, t_pile **begin_pile_b, \
	int *cpt, char *options)
{
	t_pile	*tmp_pile;
	int		min;
	int		elem;

	elem = ps_count_elem(*begin_pile_a);
	tmp_pile = *begin_pile_a;
	while (elem > 3)
	{
		min = ps_check_nbmin(*begin_pile_a);
		if (ps_check_position(*begin_pile_a, elem, min))
			ps_move_ra(begin_pile_a, min, cpt);
		else
			ps_move_rra(begin_pile_a, min, cpt);
		ps_pb(begin_pile_b, begin_pile_a, cpt, "00");
		ft_putchar(' ');
		elem--;
	}
	ps_sort_three(begin_pile_a, cpt, options, 0);
	ft_putchar(' ');
	while ((*begin_pile_b)->nb != (*begin_pile_b)->next->nb)
	{
		ps_pa(begin_pile_a, begin_pile_b, cpt, "00");
		ft_putchar(' ');
	}
	ps_pa(begin_pile_a, begin_pile_b, cpt, options);
}

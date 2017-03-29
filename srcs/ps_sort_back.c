/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_back.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 16:24:08 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 16:27:27 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_sort_back(t_pile **begin_pile, int *cpt, char *options)
{
	ps_rra(begin_pile, cpt, "00");
	ft_putchar(' ');
	ps_rra(begin_pile, cpt, "00");
	ft_putchar(' ');
	ps_sa(begin_pile, cpt, "00");
	ft_putchar(' ');
	ps_ra(begin_pile, cpt, "00");
	ft_putchar(' ');
	ps_ra(begin_pile, cpt, options);
}

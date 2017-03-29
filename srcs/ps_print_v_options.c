/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_v_options.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 01:44:59 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 01:48:35 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void		ps_print_v_options(t_pile **begin_pile_a, t_pile **begin_pile_b)
{
	ft_putstr("Pile A : ");
	ps_print_pile(begin_pile_a);
	ft_putchar('\n');
	ft_putstr("Pile B : ");
	ps_print_pile(begin_pile_b);
	ft_putchar('\n');
}

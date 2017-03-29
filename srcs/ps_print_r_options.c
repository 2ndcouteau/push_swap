/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_r_options.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 06:51:26 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 07:09:22 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_print_r_options(t_pile **begin_pile_a, t_pile **begin_pile_b)
{
	ft_putstr("Pile A : ");
	ps_print_reverse_pile(begin_pile_a);
	ft_putchar('\n');
	ft_putstr("Pile B : ");
	ps_print_reverse_pile(begin_pile_b);
	ft_putchar('\n');
}

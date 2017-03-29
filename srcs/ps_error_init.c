/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_error_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 18:05:42 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 16:29:08 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

void	ps_error_init(int error)
{
	if (error == 0)
		ps_print_error("Bad caractere in argument");
	else if (error == 1)
		ps_print_error("Argument in double");
	else if (error == 2)
		ps_print_error("Int overflow");
	else if (error == 3)
		ps_print_error("No argument");
	else if (error == 4)
		ps_print_error("Bad options. Options avaible : -acgrz");
	else
		ps_print_error("");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/12 16:53:33 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 17:18:54 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

int		main(int argc, char **argv)
{
	char	*options;

	if (argc > 1)
	{
		options = ps_check_options(argv[1]);
		if (options != NULL)
		{
			if (options[0] != 'D' && argc > 2)
				push_swap(argc, argv, options);
			else if (options[0] == 'D')
				push_swap(argc, argv, options);
			else
				ps_error_init(3);
		}
		else
			ps_error_init(4);
	}
	else
		ps_error_init(3);
	return (0);
}

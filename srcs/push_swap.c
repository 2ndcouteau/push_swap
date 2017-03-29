/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/14 17:12:48 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/22 19:10:25 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static	void	ps_print_options(t_pile **begin_pile_a, t_pile **begin_pile_b, \
	int *cpt, char *options)
{
	if (options[2] == '1')
	{
		if (options[3] == '1')
			ps_print_r_options(begin_pile_a, begin_pile_b);
		else
			ps_print_v_options(begin_pile_a, begin_pile_b);
	}
	else if (options[3] == '1')
		ps_print_r_options(begin_pile_a, begin_pile_b);
	if (options[0] == '1')
	{
		ft_putstr("Nombre d'operation : ");
		ft_putnbr(*cpt);
		ft_putchar('\n');
	}
	if (options[4] == '1')
		ps_print_pets(*cpt);
}

static	void	sans_options(t_pile **begin_pile_a, t_pile **begin_pile_b, \
	int *cpt, int argc)
{
	int tri;

	if ((tri = ps_check_order(*begin_pile_a)) != 0)
	{
		if (argc < 5)
		{
			if (argc == 3)
				ps_ra(begin_pile_a, cpt, "00");
			if (argc == 4)
				ps_sort_three(begin_pile_a, cpt, "00", 0);
		}
		else
		{
			if (tri == 1)
				ps_sa(begin_pile_a, cpt, "00");
			else if (tri == 2)
				ps_sort_back(begin_pile_a, cpt, "00");
			else
				ps_sort_little(begin_pile_a, begin_pile_b, cpt, "00");
		}
	}
	else
		ft_putendl("Stack in the order");
}

static	int		ps_lenpile(t_pile *begin_pile)
{
	int	len;
	int	rep;

	len = 1;
	rep = begin_pile->prev->nb;
	while (begin_pile->nb != rep)
	{
		begin_pile = begin_pile->next;
		len++;
	}
	return (len);
}

static	void	avec_options(t_pile **begin_pile_a, t_pile **begin_pile_b, \
	int *cpt, char *options)
{
	int tri;
	int	len;

	len = ps_lenpile(*begin_pile_a);
	if ((tri = ps_check_order(*begin_pile_a)) != 0)
	{
		if (len < 4)
		{
			if (len == 2)
				ps_ra(begin_pile_a, cpt, options);
			if (len == 3)
				ps_sort_three(begin_pile_a, cpt, options, 1);
		}
		else
		{
			if (tri == 1)
				ps_sa(begin_pile_a, cpt, options);
			else if (tri == 2)
				ps_sort_back(begin_pile_a, cpt, options);
			else
				ps_sort_little(begin_pile_a, begin_pile_b, cpt, options);
		}
	}
	else
		ft_putendl("Stack in the order");
}

void			push_swap(int argc, char **argv, char *options)
{
	t_pile	*begin_pile_a;
	t_pile	*begin_pile_b;
	int		cpt;

	cpt = 0;
	begin_pile_b = NULL;
	if (options[0] == 'D')
	{
		if ((begin_pile_a = ps_initialisation(argc, argv, 0)))
			sans_options(&begin_pile_a, &begin_pile_b, &cpt, argc);
	}
	else
	{
		if ((begin_pile_a = ps_initialisation(argc, argv, 1)))
			avec_options(&begin_pile_a, &begin_pile_b, &cpt, options);
	}
	if (cpt != 0)
	{
		ft_putchar('\n');
		ps_print_options(&begin_pile_a, &begin_pile_b, &cpt, options);
	}
	else if (options[4] == '1')
		ps_print_pets(cpt);
}

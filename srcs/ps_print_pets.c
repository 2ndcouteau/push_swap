/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_print_cat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/21 07:42:57 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 08:46:16 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/push_swap.h>

static void	print_duck(void)
{
	ft_putendl("                   .--.			");
	ft_putendl("                 _/aa  \\			");
	ft_putendl("                \\__\\    |			");
	ft_putendl("                  )   (      ,	");
	ft_putendl("                 /     `-----'\\	");
	ft_putendl("                 |       --.   |	");
	ft_putendl("               .-\\      --'    /-.");
	ft_putendl("               `'.-_.-_-,_-._-.-'`");
}

static void	print_bird(void)
{
	ft_putendl("                                .-\"\"\"-.			");
	ft_putendl("                              _/ (  0` \\_			");
	ft_putendl("                           .-' \\  '---'/-'			");
	ft_putendl("                         .'.  ' |'._.'				");
	ft_putendl("                        / '-/_, |::(				");
	ft_putendl("                       / /_.   ; ':;				");
	ft_putendl("                      /_.' , '/   /					");
	ft_putendl("              ________/_`-'_-'_.-'_______			");
	ft_putendl("              _____________)))_)))_______			");
	ft_putendl("                     |_/,/ ;`` ```					");
	ft_putendl("                     / \\_/-/						");
	ft_putendl("                     |`| ;|							");
	ft_putendl("                     |.| ||							");
	ft_putendl("                     \\/'|\\/							");
	ft_putendl("                      |'|							");
	ft_putendl("                       \\/							");
}

static void	print_teletub(void)
{
	ft_putendl("                  /\\  ____        ");
	ft_putendl("                  <> ( oo )        ");
	ft_putendl("                  <>_| ^^ |_        ");
	ft_putendl("                  <>   @    \\        ");
	ft_putendl("                 /~~\\ . . _ |        ");
	ft_putendl("                /~~~~\\    | |        ");
	ft_putendl("               /~~~~~~\\/ _| |        ");
	ft_putendl("               |[][][]/ / [m]        ");
	ft_putendl("               |[][][[m]        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[][][]|        ");
	ft_putendl("               |[|--|]|        ");
	ft_putendl("               |[|  |]|        ");
	ft_putendl("               ========        ");
	ft_putendl("              ==========        ");
	ft_putendl("              |[[    ]]|        ");
	ft_putendl("              ==========        ");
}

void		ps_print_pets(int cpt)
{
	if ((cpt % 3) == 0)
		print_duck();
	if ((cpt % 3) == 1)
		print_bird();
	if ((cpt % 3) == 2)
		print_teletub();
}

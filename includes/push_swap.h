/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qrosa <qrosa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/13 22:54:42 by qrosa             #+#    #+#             */
/*   Updated: 2015/04/21 08:56:29 by qrosa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*
** ----- System Libs -----
*/
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

/*
** ----- Color -----
*/
# define C_RED	"\033[31m"
# define C_NONE	"\033[0m"

/*
** ----- Structures -----
*/
typedef struct		s_pile
{
	int				nb;
	struct s_pile	*next;
	struct s_pile	*prev;
}					t_pile;

/*
** ----- Main Fonctions -----
*/
int					main(int argc, char **argv);
void				push_swap(int argc, char **argv, char *options);
t_pile				*ps_initialisation(int argc, char **argv, int mark);
char				*ps_check_options(char *str);

/*
** ---- List Fonctions -----
*/
t_pile				*ft_create_dnew(char *str);
t_pile				*ft_send_elem(int nb);
void				ft_remove_elem(t_pile **begin_pile);
void				ft_push_back(t_pile **begin_pile, t_pile *tmp_elem);
void				ft_push_front(t_pile **begin_pile, t_pile *tmp_elem);
void				ft_boucle_pile(t_pile **begin_pile, t_pile **end_pile);

/*
** ---- Sort Fonctions -----
*/
int					ps_check_order(t_pile *begin_pile);
int					ps_check_nbmin(t_pile *begin_pile);
int					ps_check_position(t_pile *begin_pile, int nb_elem,\
	int min);
void				ps_sort_three(t_pile **begin_pile, int *cpt,\
	char *options, int mark);
void				ps_sort_back(t_pile **begin_pile, int *cpt, char *options);
void				ps_sort_little(t_pile **begin_pile_a,
	t_pile **begin_pile_b, int *cpt, char *options);

/*
** ---- Push_Swap Fonctions -----
*/
void				ps_sx_swap_x(t_pile **begin_pile);
void				ps_rx_rotate_x(t_pile **begin_pile);
void				ps_px_push_x(t_pile **begin_pile_recept,\
	t_pile **begin_pile_send);
void				ps_rrx_reverse_rotate_x(t_pile **begin_list);
void				ps_sa(t_pile **begin_pile_a, int *cpt, char *options);
void				ps_sb(t_pile **begin_pile_b, int *cpt, char *options);
void				ps_ss(t_pile **begin_pile_a, t_pile **begin_pile_b,\
	int *cpt, char *options);
void				ps_ra(t_pile **begin_pile_a, int *cpt, char *options);
void				ps_rb(t_pile **begin_pile_b, int *cpt, char *options);
void				ps_rr(t_pile **begin_pile_a, t_pile **begin_pile_b,\
	int *cpt, char *options);
void				ps_rra(t_pile **begin_pile_a, int *cpt, char *options);
void				ps_rrb(t_pile **begin_pile_b, int *cpt, char *options);
void				ps_rrr(t_pile **begin_pile_a, t_pile **begin_pile_b,\
	int *cpt, char *options);
void				ps_pa(t_pile **begin_pile_a, t_pile **begin_pile_b,\
	int *cpt, char *options);
void				ps_pb(t_pile **begin_pile_b, t_pile **begin_pile_a,\
	int *cpt, char *options);
void				ps_move_ra(t_pile **begin_pile_a, int min, int *cpt);
void				ps_move_rra(t_pile **begin_pile_a, int min, int *cpt);

/*
** ---- Error Fonctions -----
*/
int					ft_check_intm(char *str);
int					ft_cmp_tab(char **argv, char *str, int len);
int					ft_ischnumber(char *str);
void				ps_error_init(int error);

/*
** ---- Print Fonctions -----
*/
void				ps_print_error(char *str);
void				ps_print_pile(t_pile **begin_pile);
void				ps_print_pets(int cpt);
void				ps_print_reverse_pile(t_pile **begin_pile);
void				ps_print_v_options(t_pile **begin_pile_a,\
	t_pile **begin_pile_b);
void				ps_print_r_options(t_pile **begin_pile_a,\
	t_pile **begin_pile_b);

#endif

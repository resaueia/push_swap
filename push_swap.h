/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:03:36 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/24 18:54:56 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_pile
{
	int				value;
	unsigned int	index;
	struct s_pile	*next;
}	t_pile;

typedef struct	s_data
{
	t_pile	*stack_a;
	t_pile	*stack_b;
}	t_data;

/********** FUNCTION PROTOTYPES **********/

int			sort_check(t_pile *stack);
int			size_check(t_pile *stack);
int			min_or_max(char *str);
int			integer_check(char *str);
int			add_node(t_pile **stack, int value);
int			data_init(t_data *data, int argc, char **argv);
int			duplicate(t_pile *stack);

//SWAP OPS

int			sa(t_data *data);
int			sb(t_data *data);
int			ss(t_data *data);

//PUSH OPS

int			pa(t_data *data);
int			pb(t_data *data);

//REVERSE OPS

int			ra(t_data *data);
int			rb(t_data *data);
int			rr(t_data *data);

//REVERSE ROTATE OPS

int			rra(t_data *data);
int			rrb(t_data *data);
int			rrr(t_data *data);

long int	ft_atol(char *str);

void		index_set(t_pile *pile);
void		swap(t_pile **stack);
void		push(t_pile **stack_from, t_pile **stack_to);
void		rotate(t_pile **stack);
void		reverse_rotate(t_pile **stack);
void		pile_sort(t_data *data);
void		three_nodes(t_data *data);
void		four_or_five(t_pile **a, t_pile **b, int size);
void		big_free(t_pile *stack);

#endif

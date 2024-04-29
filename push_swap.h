/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:03:36 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:45:23 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "printf/ft_printf.h"

typedef struct s_pile
{
	int				value;
	unsigned int	index;
	struct s_pile	*next;
}	t_pile;

typedef struct s_data
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

void		sa(t_pile **stack);
void		sb(t_pile **stack);
void		ss(t_pile **stack_a, t_pile **stack_b);

//PUSH OPS

void		pa(t_pile **stack_a, t_pile **stack_b);
void		pb(t_pile **stack_a, t_pile **stack_b);

//REVERSE OPS

void		ra(t_pile **stack);
void		rb(t_pile **stack);
void		rr(t_pile **stack_a, t_pile **stack_b);

//REVERSE ROTATE OPS

void		rra(t_pile **stack);
void		rrb(t_pile **stack);
void		rrr(t_pile **stack_a, t_pile **stack_b);

long int	ft_atol(char *nptr);

void		index_set(t_pile *pile);
void		swap(t_pile **stack);
void		push(t_pile **stack_from, t_pile **stack_to);
void		rotate(t_pile **stack);
void		reverse_rotate(t_pile **stack);
void		pile_sort(t_data *data);
void		three_nodes(t_pile **a);
void		four_or_five(t_pile **a, t_pile **b, int size);
void		big_free(t_pile *stack);
void		print_list(t_pile *list);
void		print_stack(t_data *data);
void		big_sort(t_pile **a, t_pile **b);
void		radix_sort(t_pile **a, t_pile **b, int bin);
void		*ft_calloc(size_t nmemb, size_t size);
void		ft_bzero(void *s, size_t n);

#endif

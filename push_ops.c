/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:01:33 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 21:02:06 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/****** PUSH OPERATIONS ******/

void	pa(t_pile **stack_b, t_pile **stack_a)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_pile **stack_a, t_pile **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

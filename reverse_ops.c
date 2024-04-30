/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_ops.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:02:16 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 21:03:05 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/****** REVERSE OPERATIONS ******/

void	ra(t_pile **stack)
{
	rotate(stack);
	ft_printf("ra\n");
}

void	rb(t_pile **stack)
{
	rotate(stack);
	ft_printf("rb\n");
}

void	rr(t_pile **stack_a, t_pile **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrot_ops.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 21:03:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 21:03:43 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/****** REVERSE ROTATE OPERATIONS ******/

void	rra(t_pile **stack)
{
	reverse_rotate(stack);
	ft_printf("rra\n");
}

void	rrb(t_pile **stack)
{
	reverse_rotate(stack);
	ft_printf("rrb\n");
}

void	rrr(t_pile **stack_a, t_pile **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}

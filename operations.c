/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:20:36 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:59:49 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/****** SWAP OPERATIONS ******/

void	sa(t_pile **stack)
{
	swap(stack);
	ft_printf("sa\n");
}

void	sb(t_pile **stack)
{
	swap(stack);
	ft_printf("sb\n");
}

void	ss(t_pile **stack_a, t_pile **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

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

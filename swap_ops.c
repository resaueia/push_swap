/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:59:44 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 21:00:18 by rsaueia-         ###   ########.fr       */
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

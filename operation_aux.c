/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:33:41 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/17 19:58:19 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_pile **stack)
{
	if (!stack || !(*stack)->next)
		return (0);
	t_pile	*second = (*stack)->next;
	(*stack)->next = second->next;
	second->next = *stack;
	*stack = second;
	return (0);
}

int	push(t_pile **stack_from, t_pile **stack_to)
{
	if(!*stack_from)
		return(0);
	t_pile *first = *stack_from;
	*stack_from = first->next;
	first->next = *stack_to;
	*stack_to = first;
	return (0);
}

int	rotate(t_pile **stack)
{
	if (!*stack || !(*stack)->next)
		return (0);
	t_pile *temp = *stack;
	while (temp->next)
		temp = temp->next;
	t_pile *second = (*stack)->next;
	(*stack)->next = NULL;
	*stack = second;
	return (0);
}

int	reverse_rotate(t_pile **stack)
{
	if (!*stack || !(*stack)->next)
		return (0);
	t_pile *temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	t_pile *last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:33:41 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/25 20:11:06 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_pile **stack)
{
	t_pile	*second;

	if (!stack || !(*stack)->next)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	second = (*stack)->next;
	(*stack)->next = second->next;
	second->next = *stack;
	*stack = second;
}

/*	SWAP FUNCTION:

	Check if there are at least 2 elements present;
	Save the 2nd element of the pile, for the next step will lose the pointer
	to it;
	The first element then points to the third, and the 2nd points to the first;
	The 2nd element, then, is now at the top of the pile.
*/

void	push(t_pile **stack_from, t_pile **stack_to)
{
	t_pile	*first;

	if (!*stack_from)
		return ;
	if (stack_size(*stack_from) == 0)
		return ;
	first = *stack_from;
	*stack_from = first->next;
	first->next = *stack_to;
	*stack_to = first;
}

/*	PUSH FUNCTION:
	
	Check if there's at least one element in the origin stack to be pushed;
	Save the 1st element since the next step will lose the pointer to it;
	1st element now points to the 1st element of the destination stack;
	1st element is now the top element of the destination stack;
	First element sits at the top of the destination stack.
*/

void	rotate(t_pile **stack)
{
	t_pile	*temp;
	t_pile	*second;

	if (!*stack || !(*stack)->next)
		return ;
	if (stack_size(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = *stack;
	second = (*stack)->next;
	(*stack)->next = NULL;
	*stack = second;
}

/*	ROTATE FUNCTION:

	Check if there are at least 2 elements present in the received pile;
	Proceeds to look for and find the last element of said pile;
	Save the 2nd element since the next step will lose the pointer to it;
	The 1st element becomes the new last element, hence it points to NULL;
	2nd element is now at the top of the pile.
*/

void	reverse_rotate(t_pile **stack)
{
	t_pile	*temp;
	t_pile	*last;

	if (!*stack || !(*stack)->next)
		return ;
	if (size_check(*stack) < 2)
		return ;
	temp = *stack;
	while (temp->next->next)
		temp = temp->next;
	last = temp->next;
	temp->next = NULL;
	last->next = *stack;
	*stack = last;
}

/*	REVERSE ROTATE FUNCTION:

	Check if there are at least 2 elements present in the received pile;
	Search for the second to last element in the aforementioned pile;
	Save the last element since the next step will lose the pointer to it;
	Second to last element now becomes the last element, hence why it is now
	pointing to NULL;
	Last element is now pointing to the first one;
	Finally, the last element now sits at the top of the pile.
*/

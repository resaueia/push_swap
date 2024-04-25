/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:58:35 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/25 19:37:41 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_set(t_pile *pile)
{
	t_pile	*pile1;
	t_pile	*pile2;

	pile1 = pile;
	pile2 = NULL;
	while (pile1)
	{
		pile2 = pile1;
		while (pile2)
		{
			if (pile1->value > pile2->value)
				pile1->index++;
			else
				pile2->index++;
			pile2 = pile2->next;
		}
		pile1 = pile1->next;
	}
}

int	duplicate(t_pile *stack)
{
	t_pile	*current;
	t_pile	*runner;

	current = stack;
	while (current != NULL)
	{
		runner = current->next;
		while (runner != NULL)
		{
			if (runner->value == current->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}

void	big_free(t_pile *stack)
{
	t_pile	*temp;
	int		i;

	i = 1;
	while (stack)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
		i++;
	}
}

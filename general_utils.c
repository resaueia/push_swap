/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/20 19:30:24 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_pile *stack)
{
	if (!stack)
		return (1);
	while
	{
		if (stack->value > stack->next->value)
			return (0);
			stack->next;
	}
	return (1);
}

int	size_check(t_pile *stack)
{
	t_pile	*temp;
	int		size;

	size = 0;
	temp = stack;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

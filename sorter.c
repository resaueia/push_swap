/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/22 19:55:24 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pile_sort(t_pile **a, t_pile **b)
{
	int	size;

	size = size_check(*a);
	*b = NULL;
	if (size == 2)
		sa(a);
	else if (size == 3)
		three_nodes(a, size);
	else if (size == 4 || size == 5)
		four_or_five(a, b, size);
	else if (size > 5)
			TBD!!!!!!!!!!!!!!;
}

void	three_nodes(t_pile **a, int size)
{
	t_pile	*stack;

	stack = NULL;
	if (*a->index == size)
		ra(a);
	stack = *a;
	if (*a->index == (size - 1))
	{
		stack = stack->next;
		if (stack->index == size)
			rra(a);
		else
			sa(a);
	}
	else if (sort_check(*a) != 3)
	{
		rra(a);
		sa(a);
	}
}

void	four_or_five(t_pile **a, t_pile **b, int size)
{
	int	len;

	len = size;
	while (len != 0)
	{
		if(*a->index == 1 || *a->index == 2)
		{
			pb(a, b);
			len--;
			continue;
		}
		if (size_check(*b) == 2)
			break;
		ra(a);
		len--;
	}
	if (*b->index == 1)
		sb(b);
	three_nodes(a, size);
	pa(b, a);;
	if (b != NULL)
		pa(b, a);
}

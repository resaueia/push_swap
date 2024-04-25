/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/25 18:40:44 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pile_sort(t_data *data)
{
	int	size;

	size = size_check(data->stack_a);
	while (!sort_check(data->stack_a) || data->stack_b)
	{
		if (size == 2)
			sa(data);
		if (size == 3)
			three_nodes(data);
		else if (size == 4 || size == 5)
			four_or_five(data, size);
		//else if (size > 5)
				//TBD!!!!!!!!!!!!!!;
	}
}

void	three_nodes(t_data *data)
{
	int	first;
	int	second;
	int third;

	first = data->stack_a->value;
	second = data->stack_a->next->value;
	third = data->stack_a->next->next->value;

	if (first < second && first < third && second > third)
	{
		sa(data);
		ra(data);
	}
	else if (first > second && first < third && second < third)
		sa(data);
	else if (first < second && first > third && second > third)
		rra(data);
	else if (first > second && first > third && second < third)
		ra(data);
	else if (first > second && first > third && second > third)
	{
		ra(data);
		sa(data);
	}
}
/*
 FOR 4 AND 5 ELEMENTS
if (size == 4)
	sort_4();
if (size == 5)
	sort_5();


int	position(t_data *data)
{
	
}
*/
void	four_or_five(t_data *data, int size)
{
	int		len;
	t_pile	*a;
	t_pile	*b;

	a = data->stack_a;
	b = data->stack_b;
	len = size;
	while (len != 0)
	{
		if(a->index == 1 || a->index == 2)
		{
			pb(data);
			len--;
			continue;
		}
		if (size_check(b) == 2)
			break;
		ra(data);
		len--;
	}
	if (b->index == 1)
		sb(data);
	three_nodes(data);
	pa(data);;
	if (b != NULL)
		pa(data);
}

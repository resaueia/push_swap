/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:37:39 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pile_sort(t_data *data)
{
	int	size;

	size = size_check(data->stack_a);
	data->stack_b = NULL;
	if (size == 2)
		sa(&(data->stack_a));
	else if (size == 3)
		three_nodes(&(data->stack_a));
	else if (size == 4 || size == 5)
	{
		four_or_five(&(data->stack_a), &(data->stack_b), size);
	}
	else if (size > 5)
		big_sort(&(data->stack_a), &(data->stack_b));
}

void	three_nodes(t_pile **a)
{
	int	first;
	int	second;
	int third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;

	if (first < second && first < third && second > third)
	{
		sa(a);
		ra(a);
	}
	else if (first > second && first < third && second < third)
		sa(a);
	else if (first < second && first > third && second > third)
		rra(a);
	else if (first > second && first > third && second < third)
		ra(a);
	else if (first > second && first > third && second > third)
	{
		ra(a);
		sa(a);
	}
}

void	four_or_five(t_pile **a, t_pile **b, int size)
{
	int	len;

	len = size;
	while (len != 0 && size_check(*a) > 3)
	{
		if ((*a)->index == 1 || ((*a)->index == 2 && size == 5))
			pb(a, b);
		else
			ra(a);
		len--;
		//print_list(*a);
	}
	if ((*b)->index == 1 && size == 5)
		sb(b);
	three_nodes(a);
	pa(b, a);
	if (size == 5)
		pa(b, a);
}


void	big_sort(t_pile **a, t_pile **b)
{
	int	bin;
	
	bin = 1;
	//pb (a, b);
	//print_list(*a);
	//return ;
	while (sort_check(*a) != 1)
	{
		radix_sort(a, b, bin);
		bin = bin << 1;
	}
	//ft_printf("valor binario: %d\n", bin);
}	

void	radix_sort(t_pile **a, t_pile **b, int bin)
{
	int	size;
	int	count = 0;
	
	size = size_check(*a);
	while (*a && size != 0)
	{
		if (!((*a)->index & bin))
		{	
			pb(a, b);
			count++;
		}
		else
		{
			ra(a);
		}
		size--;
	}
	while (count)
	{
		pa(b, a);
		count--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:39:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/27 18:25:50 by rsaueia-         ###   ########.fr       */
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
		three_nodes(&(data->stack_a), &(data->stack_b));
	else if (size == 4 || size == 5)
	{
	//	ft_printf("endereço a: %p\n", data->stack_a);
		four_or_five(&(data->stack_a), &(data->stack_b), size);
	}
	else if (size > 5)
		big_sort(&(data->stack_a), &(data->stack_a));
}

//void	three_nodes(t_data *data)
void	three_nodes(t_pile **a, t_pile **b)
{
	int	first;
	int	second;
	int third;

	first = (*a)->value;
	second = (*a)->next->value;
	third = (*a)->next->next->value;

	(void)b;
	if (first < second && first < third && second > third)
	{
		sa(a);
		ra(a);
		//sa(data);
		//ra(data);
	}
	else if (first > second && first < third && second < third)
		sa(a);
	//	sa(data);
	else if (first < second && first > third && second > third)
		rra(a);
		//rra(data);
	else if (first > second && first > third && second < third)
		ra(a);
		//ra(data);
	else if (first > second && first > third && second > third)
	{
		ra(a);
		sa(a);
		//ra(data);
		//sa(data);
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



//sort -> find the lowest number, push b; call sort_three, push a;

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
		print_list(*a);
	}
	if ((*b)->index == 1 && size == 5)
		sb(b);
	three_nodes(a, b);
	pa(b, a);
	if (size == 5)
		pa(b, a);
}


void	big_sort(t_pile **a, t_pile **b)
{
	int	bin;
	
	bin = 1;
	pb (a, b);
	print_list(*a);
	return ;
	while (!sort_check(*a) && bin < 8)
	{
		radix_sort(a, b, bin);
		bin = bin << 1;
	}
	ft_printf("valor binario: %d\n", bin);
}	

void	radix_sort(t_pile **a, t_pile **b, int bin)
{
	int	size;	
	
	size = size_check(*a);
	while (*a && size > 0)
	{
		ft_printf("lista a: \n");
		print_list(*a);	
		if (!((*a)->index & bin))
		{	
			ft_printf("entrou no if\n");
			pb(a, b);
		}
		else
		{
			ft_printf("entrou no else\n");
			ra(a);
		}
		print_list(*a);
		ft_printf("reduzindo size: %d\n", size);
		size--;
		if (size == 5)
			break;
	}
	//ra(a);
	print_list(*a);
	//pb(a, b);
	//pb(a, b);
	/*while (*b)
		pa(b, a);*/
}









/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:54:14 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_data *data)
{
	t_pile	*a;
	t_pile	*b;

	a = data->stack_a;
	b = data->stack_b;
	if (!a)
		ft_printf("Empty A.\n");
	if (!b)
		ft_printf("Empty B.\n");
	while (a || b)
	{
		if (a)
		{
			ft_printf("A: %d.\n", a->value);
			a = a->next;
		}
		if (b)
		{
			ft_printf("B: %d.\n", b->value);
			b = b->next;
		}
	}
}

void	print_list(t_pile *list)
{
	t_pile	*temp;

	temp = list;
	ft_printf("-----LINKED LIST-----:\n");
	while (temp)
	{
		ft_printf("Node address: %p - Value: %d - Index: %i \
			- Next node address: %x\n", temp, temp->value, temp->index, \
			temp->next);
		temp = temp->next;
	}
	free(temp);
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.stack_a = NULL;
	data.stack_b = NULL;
	if (!data_init(&data, argc, argv))
		return (1);
	if (sort_check(data.stack_a))
	{
		big_free(data.stack_a);
		return (0);
	}
	index_set(data.stack_a);
	pile_sort(&data);
	if (data.stack_b)
		big_free(data.stack_b);
	big_free(data.stack_a);
	return (0);
}

/*	First, we check if all arguments are valid:
	1- Are they entirely composed of numbers?
	2- Do they all fit, individually, within the int variable limits?

	Second, we start forming our pile:
	1- We check all the elements of the pile and attribute index numbers to them.
	2- We check if the pile is already in ascending order. If it is, we return it;
	if not, we properly arrange its elements.

	Organizing pile:
	1- If there are but 2 elements in a pile and they're not organized, we 
	merely swap them.
	2- If there are but 3 elements in a given pile, we use a range of different
	'ifs' to check all different combinations and rearrange them.
	3- If there are only 4 or 5 different elements in a pile, we push 2 of them 
	to another pile, properly arrange the 3 that are left using the above logic 
	and	then bring the former 2 elements back into the pile, sorted.
	4- If there are more than 5 elements in a given pile, we sort them by
	using the RADIX algorithm.
*/

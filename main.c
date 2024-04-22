/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/17 19:30:24 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_data	data;
	data = (t_data){0};
	if (!data_init(&data, argc, argv))
		return (1);
	if (!index_set(data.stack_a))
		return (1);
	stack_sort(&data);
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

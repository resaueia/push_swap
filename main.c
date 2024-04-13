/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/12 19:19:56 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	add_node(t_stack **s_pile, int value)
{
	t_stack	new_node;

	new_node = malloc(sizeof(t_stack));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = *s_pile;
	*s_pile = new_node;
	return (1);
}

int	main(int argc, char **argv)
{
	t_pile	*stack_a;
	t_pile	*stack_b;
	long int	nbr;
	int	count;

	stack_a = NULL;
	stack_b = NULL;
	nbr = 0;
	count = 1
	while (count < argc)
	{
		nbr = ft_atoi(argv[count]);
		if (count == 1)
		{	
			stack_a = malloc(sizeof(t_stack));
			if (!stack_a)
				return (NULL);
			add_node(*stack_a, nbr);
			return (stack_a);
		}
		else

		count++;
	}

}

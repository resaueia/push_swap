/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/11 19:40:10 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
			stack_a->value = nbr;
			stack_a->index = 1;
			stack_a->next = NULL;
			return (stack_a);
		}
		else

		count++;
	}

}

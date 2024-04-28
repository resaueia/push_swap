/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:24:25 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/26 17:39:51 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	integer_check(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	add_node(t_pile **stack, int value)
{
	t_pile	*new_node;

	new_node = malloc(sizeof(t_pile));
	if (!new_node)
		return (0);
	new_node->value = value;
	new_node->next = *stack;
	*stack = new_node;
	return (1);
}

int	data_init(t_data *data, int argc, char **argv)
{
	while (--argc > 0)
	{
		if (!integer_check(argv[argc]))
		{
			ft_printf("erro integer check\n");
			write(2, "Error\n", 6);
			return (0);
		}
		if (!min_or_max(argv[argc]))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (!add_node(&data->stack_a, ft_atol(argv[argc])))
			return (0);
		if (duplicate(data->stack_a))
		{
			ft_printf("erro duplicate.\n");
        		write(2, "Error\n", 6);
        		return (0);
		}
	}
	return (1);
}

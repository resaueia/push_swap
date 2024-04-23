/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initializer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 19:24:25 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/17 19:27:08 by rsaueia-         ###   ########.fr       */
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
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (1);
	}
	return (0);
}

int	add_node(t_pile **stack, int value)
{
	t_pile	*new_node;

	new_node = malloc(sizeof(t_pile));
	if (!new_node)
		return (1);
	new_node->value = value;
	new_node->next = *stack;
	*stack = new_node;
	return (0);
}

int	data_init(t_data *data, int argc, char **argv)
{
	int	count;

	count = 1;
	while (argc > count)
	{
		if (!integer_check(argc[argv]))
			return (1);
		if (!min_or_max(argc[argv]))
			return (1);
		if (!add_node(&data->stack_a, data->stack_a->value))
			return (1);
		argc--;
	}
	return (0);
}

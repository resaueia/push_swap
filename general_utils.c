/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:36:55 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sort_check(t_pile *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	size_check(t_pile *stack)
{
	t_pile	*temp;
	int		size;

	size = 0;
	temp = stack;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

long int	ft_atol(char *nptr)
{
	int	index;
	int	signal;
	long	int	number;

	index = 0;
	signal = 1;
	number = 0;
	while ((nptr[index] > 8 && nptr[index] < 14) || nptr[index] == 32)
		index++;
	if (nptr[index] == '+' || nptr[index] == '-')
	{
		if (nptr[index] == '-')
			signal *= -1 ;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		number = (number * 10) + (nptr[index] - 48);
		index++;
	}
	number = number * (long int)signal;
	return (number);
}

#include <stdio.h>
int	min_or_max(char *str)
{
	long int	nbr;

	nbr = ft_atol(str);
	printf("%ld\n", nbr);
	
	if (nbr > 2147483647 || nbr < -2147483648)
		return (0);
	return (1);
}

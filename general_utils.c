/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   general_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/23 15:45:15 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

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

long int	ft_atol(char *str)
{
	int	sign;
	int	nbr;

	sign = 1;
	nbr = 0;
	while (*str >= 7 && *str <= 13 || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= 9)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

int	min_or_max(char *str)
{
	long int	nbr;

	if (ft_strlen(str) > 11)
		return (1);
	nbr = ft_atol(str);
	if (nbr > 2147483647 || nbr < -2147483648)
		return (1);
	return (0);
}

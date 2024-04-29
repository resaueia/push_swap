/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:58:35 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/29 20:43:18 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_set(t_pile *pile)
{
	t_pile	*pile1;
	t_pile	*pile2;

	pile1 = pile;
	pile2 = NULL;
	while (pile1)
	{
		pile2 = pile1;
		while (pile2)
		{
			if (pile1->value > pile2->value)
				pile1->index++;
			else
				pile2->index++;
			pile2 = pile2->next;
		}
		pile1 = pile1->next;
	}
}

int	duplicate(t_pile *stack)
{
	t_pile	*current;
	t_pile	*runner;

	current = stack;
	while (current != NULL)
	{
		runner = current->next;
		while (runner != NULL)
		{
			if (runner->value == current->value)
				return (1);
			runner = runner->next;
		}
		current = current->next;
	}
	return (0);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*holder;

	holder = (unsigned char *)s;
	while (n > 0)
	{
		*holder = 0;
		holder++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

void	big_free(t_pile *stack)
{
	t_pile	*temp;
	t_pile	*head;

	head = stack;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

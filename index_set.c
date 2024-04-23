/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:58:35 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/23 15:50:46 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    index_set(t_pile *pile)
{
	t_pile  *pile1;
	t_pile	*pile2;

	pile1 = pile;
	pile2 = NULL;
	while(pile1)
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

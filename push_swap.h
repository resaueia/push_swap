/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:03:36 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/11 17:08:14 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_pile
{
	int				value;
	unsigned int	index;
	struct s_pile	*next;
}	t_pile;

typedef struct	s_data
{
	t_stack	*stack_a;
	t_stack	*stack_b;
}	t_data;

/********** FUNCTION PROTOTYPES **********/

#endif

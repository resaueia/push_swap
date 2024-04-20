# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    operations.c                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 16:04:03 by rsaueia-          #+#    #+#              #
#    Updated: 2024/04/17 17:34:05 by rsaueia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#include "push_swap.h"

/****** SWAP OPERATIONS ******/

int sa(t_pile *data)
{
    swap(&data->stack_a);
    printf("performed sa\n");
    return (0);
}

int sb(t_pile *data)
{
    swap(&data->stack_b);
    printf("performed sb\n");
    return (0);
}

int ss(t_pile *data)
{
    swap(&data->stack_a);
    swap(&data->stack_b);
    printf("performed ss\n");
    return (0);
}

/****** PUSH OPERATIONS ******/

int pa(t_pile *data)
{
    push(&data->stack_b, &data->stack_a);
    printf("performed pa\n");
    return (0);
}

int pb(t_pile *data)
{
    push(&data->stack_a, &data->stack_b);
    printf("performed pb\n");
    return (0);
}

/****** REVERSE OPERATIONS ******/

int ra(t_pile *data)
{
    rotate(&data->stack_b);
    printf("performed ra\n");
    return (0);
}

int rb(t_pile *data)
{
    rotate(&data->stack_b);
    printf("performed rb\n");
    return (0);
}

int rr(t_pile *data)
{
    rotate(&data->stack_a);
    rotate(&data->stack_b);
    printf("performed rr");
    return(0);
}

/****** REVERSE ROTATE OPERATIONS ******/

int rra(t_pile *data)
{
    reverse_rotate(&data->stack_a);
    printf("performed rra\n");
    return (0);
}

int rrb(t_pile *data)
{
    reverse_rotate(&data->stack_b);
    printf("performed rrb\n");
    return (0);
}

int rrr(t_pile *data)
{
    reverse_rotate(&data->stack_a);
    reverse_rotate(&data->stack_b);
    printf("performed rrr\n");
    return(0);
}
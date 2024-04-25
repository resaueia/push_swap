/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:20:36 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/25 15:38:11 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/****** SWAP OPERATIONS ******/

int sa(t_data *data)
{
    swap(&data->stack_a);
    printf("sa\n");
    return (0);
}

int sb(t_data *data)
{
    swap(&data->stack_b);
    printf("sb\n");
    return (0);
}

int ss(t_data *data)
{
    swap(&data->stack_a);
    swap(&data->stack_b);
    printf("ss\n");
    return (0);
}

/****** PUSH OPERATIONS ******/

int pa(t_data *data)
{
    push(&data->stack_b, &data->stack_a);
    printf("pa\n");
    return (0);
}

int pb(t_data *data)
{
    push(&data->stack_a, &data->stack_b);
    printf("pb\n");
    return (0);
}

/****** REVERSE OPERATIONS ******/

int ra(t_data *data)
{
    rotate(&data->stack_a);
    printf("ra\n");
    return (0);
}

int rb(t_data *data)
{
    rotate(&data->stack_b);
    printf("rb\n");
    return (0);
}

int rr(t_data *data)
{
    rotate(&data->stack_a);
    rotate(&data->stack_b);
    printf("rr");
    return(0);
}

/****** REVERSE ROTATE OPERATIONS ******/

int rra(t_data *data)
{
    reverse_rotate(&data->stack_a);
    printf("rra\n");
    return (0);
}

int rrb(t_data *data)
{
    reverse_rotate(&data->stack_b);
    printf("rrb\n");
    return (0);
}

int rrr(t_data *data)
{
    reverse_rotate(&data->stack_a);
    reverse_rotate(&data->stack_b);
    printf("rrr\n");
    return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:08:23 by rsaueia-          #+#    #+#             */
/*   Updated: 2024/04/17 19:30:24 by rsaueia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	main(int argc, char **argv)
{
	t_pile	data;
	data = (t_pile){0};
	if (!data_init(&data, argc, argv))
		return (1);
	if (!index_set(data.stack_a))
		return (1);
	stack_sort(&data);
	return (0);
}

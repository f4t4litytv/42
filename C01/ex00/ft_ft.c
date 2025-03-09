/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:55:48 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/09 16:03:32 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int n = 1;
	int *nbr = &n;

	printf("Before ft_ft: \n");
	printf("Variable 'nbr' points to adress %p that has the value %d stored\n", &n, n);
	printf("Pointer 'nbr' points to the same adress %p that has the value %d stored\n", nbr, *nbr);
	ft_ft(nbr);
	printf("\n");
	printf("After ft_ft: \n");
	printf("Pointer 'nbr' remains pointing to adress %p, but now that has the value %d stored\n", nbr, *nbr);
	printf("Now 'n' has the value %d stored\n", n);
}


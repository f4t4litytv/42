/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:32:31 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/10 18:32:35 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int main()
{
	int a, b;
	int	resultado_div;
	int	resultado_mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &resultado_div, &resultado_mod);
	printf("o res divisao e: %d \n o res resto 
	e: %d \n", resultado_div, resultado_mod);

	return 0;
}*/

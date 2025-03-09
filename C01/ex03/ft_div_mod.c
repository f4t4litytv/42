/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:50:10 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/09 16:30:42 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main()
{
	int a, b;
	int	resultado_div;
	int	resultado_mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &resultado_div, &resultado_mod);
	printf("o resultado da divisao e: %d \n o resultado do resto e: %d \n", resultado_div, resultado_mod);

	return 0;
}

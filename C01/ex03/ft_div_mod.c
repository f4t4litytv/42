/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 00:50:10 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/09 00:42:31 by f4t4lity         ###   ########.fr       */
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
	int	num1 = 10;
	int	num2 = 7;
	int	resultado_divisao;
	int	resultado_resto;

	ft_div_mod(num1, num2, resultado_divisao, resultado_resto);

	printf("Divisão: %d\n", resultado_divisao);
	printf("Resto: %d\n", resultado_resto);
	return 0;
}
*/

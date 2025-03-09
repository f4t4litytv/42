/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 00:59:51 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/09 16:56:42 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c = 20;
	int	d = 12;

	*a = c / d;
	*b = c % d;
}

int main(void)
{
	int a, b;

	ft_ultimate_div_mod(&a, &b);
	printf("divisao = %d\nresto = %d \n", a, b);
}

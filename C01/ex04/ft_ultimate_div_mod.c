/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:33:02 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/10 18:33:06 by jpinto-r         ###   ########.fr       */
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
/*
int main(void)
{
	int a, b;

	ft_ultimate_div_mod(&a, &b);
	printf("divisao = %d\nresto = %d \n", a, b);
}
*/

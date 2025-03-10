/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 17:46:01 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/10 18:43:15 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	n = 1; // criamos uma var para colocar o endereco
	ft_ft(&n); // chamamos a funcao com endereco que queremos obter
	printf("O pointer nbr e : %d \n", n);
	// agora printamos o apontador da var n que passara *nbr 42
	return (0);
}*/

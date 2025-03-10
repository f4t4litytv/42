/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:55:48 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/09 22:46:33 by f4t4lity         ###   ########.fr       */
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

	printf("ft_ft antes: \n");
	printf("A variavel nbr agora aponta %p e tem o valor %d guardado\n", &n, n);
	printf("O apontador nbr que está localizado %p e tem o valor %d guardado\n", nbr, *nbr);
	ft_ft(nbr);
	printf("\n");
	printf("Depois ft_ft: \n ");
	printf("O apontador 'nbr' ainda se encontra localizado %p, mas desta vez contém %d guardado\n", nbr, *nbr);
	printf("Agora 'n' tem o valor %d guardado\n", n);
}


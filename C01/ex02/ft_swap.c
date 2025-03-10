/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:19:13 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/10 18:44:48 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Antes da mudanca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2); // executo a funcao

    printf("Depois da mudanca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/

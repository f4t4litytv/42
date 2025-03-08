/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 00:47:00 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/07 00:57:52 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n <= 0)
	{
		printf("N");
	}
	else{
		printf("P");
	}
}
/*
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-3);
	return(0);
}
*/

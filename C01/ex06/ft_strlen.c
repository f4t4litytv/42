/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:05:05 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/10 20:01:39 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
}

/*
int	main(void)
{
	int	len = ft_strlen("mundo");
	write(1, "\n", 1);
	return 0;
}*/

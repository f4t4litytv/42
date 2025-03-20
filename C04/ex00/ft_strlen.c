/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:49:39 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/20 16:02:17 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main()
{
	char	string[] = "Hello, world!";
	int	length = ft_strlen(string);
	printf	("a string: %s, tem o comprimento de %d", string, length);
	return (0);
}*/

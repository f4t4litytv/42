/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:05:46 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/16 15:05:50 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
int	main()
{
	char	str1[] = "Olá mundo";
	char	str2[] = "OlA mUndO";
	char	str3[] = "kekW";
	char	str4[] = "JOAOZINHOO";

	printf("original '%s'minusculas '%s'\n", str1, ft_strlowcase(str1));
	printf("original '%s'maiusculas '%s'\n", str2, ft_strlowcase(str2));
	printf("original '%s'maiusculas '%s'\n", str3, ft_strlowcase(str3));
	printf("original '%s'maiusculas '%s'\n", str4, ft_strlowcase(str4));
	return (0);
}*/

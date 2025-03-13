/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:06:02 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/12 19:47:58 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
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
	char	str4[] = "ueuwe";

	printf("original '%s'maiusculas '%s'\n", str1, ft_strupcase(str1));
	printf("original '%s'maiusculas '%s'\n", str2, ft_strupcase(str2));
	printf("original '%s'maiusculas '%s'\n", str3, ft_strupcase(str3));
	printf("original '%s'maiusculas '%s'\n", str4, ft_strupcase(str4));
	return (0);
}*/

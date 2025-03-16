/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 15:04:53 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/16 15:04:56 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	str1[] = "Olá mundo";
	char	str2[] = "Mundo Olá";
	char	str3[] = "134567890";
	char	str4[] = "";
	char	str5[] = "!#$%%&/(()";  ;

	printf("str1 (\"%s\") é numérico : %d\n", str1, ft_str_is_numeric(str1));
	printf("str2 (\"%s\") é numérico : %d\n", str2, ft_str_is_numeric(str2));
	printf("str3 (\"%s\") é numérico : %d\n", str3, ft_str_is_numeric(str3));
	printf("str4 (\"%s\") é numérico : %d\n", str4, ft_str_is_numeric(str4));
	printf("str5 (\"%s\") é numérico : %d\n", str5, ft_str_is_numeric(str5));
	return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:32:54 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/12 19:18:51 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main()
{
         char    str1[] = "Olá mundo";
         char    str2[] = "MUNDO OLA";
         char    str3[] = "134567890";
         char    str4[] = "";
         char    str5[] = "!#$%%&/(()";

	printf("str1 (\"%s\") é Maiúscula : %d\n", str1, ft_str_is_uppercase(str1));
	printf("str2 (\"%s\") é Maiúscula : %d\n", str2, ft_str_is_uppercase(str2));
	printf("str3 (\"%s\") é Maiúscula : %d\n", str3, ft_str_is_uppercase(str3));
	printf("str4 (\"%s\") é Maiúscula : %d\n", str4, ft_str_is_uppercase(str4));
	printf("str5 (\"%s\") é Maiúscula : %d\n", str5, ft_str_is_uppercase(str5));
	return 0;
}*/

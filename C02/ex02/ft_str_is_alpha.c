/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:25:56 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/11 23:57:33 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return 1;
	}
	
	while(*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return 0;
		}
		str++;
	}
	return 1;
}
/*
int	main()
{
	char	str1[] = "Olá mundo";
	char	str2[] = "Mundo Olá";
	char	str3[] = "134567890";
	char	str4[] = "";
	char	str5[] = "!#$%%&/(()";  ;

	printf("str1 (\"%s\") é alpha : %d\n", str1, ft_str_is_alpha(str1));
	printf("str2 (\"%s\") é alpha : %d\n", str2, ft_str_is_alpha(str2));
	printf("str3 (\"%s\") é alpha : %d\n", str3, ft_str_is_alpha(str3));
	printf("str4 (\"%s\") é alpha : %d\n", str4, ft_str_is_alpha(str4));
	printf("str5 (\"%s\") é alpha : %d\n", str5, ft_str_is_alpha(str5));
	return 0;
}*/

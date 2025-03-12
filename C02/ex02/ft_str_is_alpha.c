/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 17:25:56 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/12 17:15:27 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
    char str1[] = "OlaMundo";
    char str2[] = "MundoOla";
    char str3[] = "134567890";
    char str4[] = "";
    char str5[] = "!#$%%&/(()";
    char str6[] = "Ola Mundo"; // String com espaço
    char str7[] = "OláMundo"; // String com acento

    printf("str1 (\"%s\") é alfabético : %d\n", str1, ft_str_is_alpha(str1));
    printf("str2 (\"%s\") é alfabético : %d\n", str2, ft_str_is_alpha(str2));
    printf("str3 (\"%s\") é alfabético : %d\n", str3, ft_str_is_alpha(str3));
    printf("str4 (\"%s\") é alfabético : %d\n", str4, ft_str_is_alpha(str4));
    printf("str5 (\"%s\") é alfabético : %d\n", str5, ft_str_is_alpha(str5));
    printf("str6 (\"%s\") é alfabético : %d\n", str6, ft_str_is_alpha(str6));
    printf("str7 (\"%s\") é alfabético : %d\n", str7, ft_str_is_alpha(str7));

    return 0;
}*/

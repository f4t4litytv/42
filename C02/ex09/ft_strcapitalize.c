/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 20:44:39 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/13 14:27:04 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcapitalize(char *str)
{
	int	i = 0, primeira_palavra = 1;

	while (str[i] != '\0')
	{
		if (isalnum(str[i]))
		{
			if (primeira_palavra)
			{
				str[i] = toupper(str[i]);
				primeira_palavra = 0;
			}
			else
			{
				str[i] = tolower(str[i]);
			}
			i++;
		}
		else
		{
			primeira_palavra = 1;
			i++;
		}
	}
	return (str);
}
/*
int	main()
{
	char	str1[] = "ola, tudo bem?"; 
	char	str2[] = "PRIMEIRA PALAVRA"; 
	char	str3[] = "outra string";
       	char	str4[] = "123palavras";
	char	str5[] = "";
	
	char	*copia1 = strdup(str1);
	char	*copia2 = strdup(str2);
	char	*copia3 = strdup(str3);
	char	*copia4 = strdup(str4);
	char	*copia5 = strdup(str5);

    printf("Original: '%s', Capitalizada:
    '%s'\n", str1, ft_strcapitalize(copia1));
    printf("Original: '%s', Capitalizada:
    '%s'\n", str2, ft_strcapitalize(copia2));
    printf("Original: '%s', Capitalizada:
    '%s'\n", str3, ft_strcapitalize(copia3));
    printf("Original: '%s', Capitalizada: 
    '%s'\n", str4, ft_strcapitalize(copia4));
    printf("Original: '%s', Capitalizada:
    '%s'\n", str5, ft_strcapitalize(copia5));

    free(copia1);
    free(copia2);
    free(copia3);
    free(copia4);
    free(copia5);

    return 0;
}*/

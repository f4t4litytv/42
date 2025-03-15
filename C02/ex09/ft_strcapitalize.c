/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:11:19 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/15 00:01:14 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void	processar_caracteres(char *str)
{
	int	i;
	int	primeira_letra;

	i = 0;
	primeira_letra = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (primeira_letra)
			{
				str[i] = str[i] - 32;
				primeira_letra = 0;
			}
			else
			{
				str[i] = str[i] + 32;
			}
		}
		else
		{
			primeira_letra = 1;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	processar_caracteres(str);
	return (str);
}


int main()
{
    char str1[] = "ola, tudo bem?";
    char str2[] = "PRIMEIRA PALAVRA";
    char str3[] = "outra string";
    char str4[] = "123palavras";
    char str5[] = "";

    printf("Original: '%s', Capitalizada:'%s'\n", str1, ft_strcapitalize(str1));
    printf("Original: '%s', Capitalizada:'%s'\n", str2, ft_strcapitalize(str2));
    printf("Original: '%s', Capitalizada:'%s'\n", str3, ft_strcapitalize(str3));
    printf("Original: '%s', Capitalizada:'%s'\n", str4, ft_strcapitalize(str4));
    printf("Original: '%s', Capitalizada:'%s'\n", str5, ft_strcapitalize(str5));

    return 0;
}

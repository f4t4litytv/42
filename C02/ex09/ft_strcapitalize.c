/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 17:11:19 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/13 18:30:35 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void	processar_caracteres(char *str)
{
	int	i;
	int	primeira_palavra;

	i = 0;
	primeira_palavra = 1;
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
		}
		else
		{
			primeira_palavra = 1;
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

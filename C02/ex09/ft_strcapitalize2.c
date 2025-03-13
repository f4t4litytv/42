/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 15:19:42 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/13 17:10:00 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*char	ft_strcapitalize(char *str);

void	tratar_primeira_palavra(char *str, int *i, int *primeira_palavra)
{
	if (*primeira_palavra)
	{
		str[*i] = toupper(str[*i]);
		*primeira_palavra = 0;
	}
	else
	{
		str[*i] = tolower(str[*i]);
	}
}
void	processar_caracteres(char *str)
{
	int i = 0;
	int primeira_palavra = 1;

	while (str[i] = '\0')
	{
		if
		{
			tratar_primeira_palavra(str, &i, &primeira_palavra);
		}
		else
		{
			primeira_palavra = 1;
			i++;
		}
	}
}

char *ft_capitalize(char *str)
{
	processar_caracteres(str);
	return (str);
}*/
void	parametro_i(int	i)
{
	int	i;

	i = 0;
}

void	parametro_pp(int pp)
{
	int	pp;

	pp = 1;
}

char	*ft_strcapitalize(char *str)
{
	while(str[i] != '\0')
	{
		if (isalnum(str[i]))
		{
			if (str[primeira_palavra])
			{
				str[i] = toupper(str[i]);
				primeira_palavra = 0;
			}
			else {
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

	free(copia1);
	free(copia2);
	free(copia3);
	free(copia4);
	free(copia5);
	return 0;

}*/

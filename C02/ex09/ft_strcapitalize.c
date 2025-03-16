/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:20:30 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/16 21:03:47 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_strlowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
		{
			str[x] = str[x] + 32;
		}
		x++;
	}
}
char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;

    ft_strlowercase(str);
    while (str[i] != '\0')
    {
            if (str[0] >= 'a' && str[0] <= 'z')
            {
                str[0] -= 32;
            }
	    if ((str[i] >= 32 && str[i] <= 47) 
			    || (str[i] >= 58 && str[i] <= 64)
			    || (str[i] >= 91 && str[i] <= 96)
			    || (str[i] >= 123 && str[i] <= 126))
		    if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			    str[i + 1] = str[i + 1] - 32;
	    i++;
    }
    return str;  // Retorna a string modificada
}
int	main()
{
	char	str1[] = "OlA-mndo";
	char	str2[] = "asda sd21 3124dasd asd";
	char	str3[] = " 2e sda sd2 131 24dasd -asd";
	char	str4[] = "asd  as d2 1 3124d as d *asd";
	char	str5[] = "asdas das d +asd";
	char	str6[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str1));
	printf("%s\n", ft_strcapitalize(str2));
	printf("%s\n", ft_strcapitalize(str3));
	printf("%s\n", ft_strcapitalize(str4));
	printf("%s\n", ft_strcapitalize(str5));
	printf("%s\n", ft_strcapitalize(str6));
	return (0);
}

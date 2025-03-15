/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:32:54 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/14 23:23:51 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char	*str1 = "mundo";
	char	*str2 = "Olá mundo";
	char	*str3 = "1234567";
	char	*str4 = "não imprimiveis: \x01\x02";
	char	*str5 = "";

	printf("'%s' é imprivel %d\n", str1, ft_str_is_printable(str1));
	printf("'%s' é imprivel %d\n", str2, ft_str_is_printable(str2));
	printf("'%s' é imprivel %d\n", str3, ft_str_is_printable(str3));
	printf("'%s' é imprivel %d\n", str4, ft_str_is_printable(str4));
	printf("'%s' é imprivel %d\n", str5, ft_str_is_printable(str5));

	return (0);

}*/

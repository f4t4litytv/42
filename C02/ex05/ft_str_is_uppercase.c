/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:32:54 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/11 18:33:13 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	if (str[0] == '\0')
	{
		return 1;
	}
	
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}


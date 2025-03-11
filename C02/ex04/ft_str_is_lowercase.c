/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 18:29:36 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/11 18:30:10 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
	{
		return 1;
	}
	
	int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return 0;
		}
		i++;
	}
	return 1;
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 17:12:00 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/17 18:24:02 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	s1;
	int	s2;
	// comparar as casas dos caracteres 
	while (*s1 || *s2)
	{
		if (*s1 != '\0' && *s2 != '\0')
	}
	return (0);
}

int	main()
{
	char	*s1 = "ola";
	char	*s2 = "mundo";

	ft_strcmp(*s1, *s2);
}


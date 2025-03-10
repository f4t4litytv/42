/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 14:46:56 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/10 15:04:40 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(void)
{
	char	word[] = "Olá Mundo!";
	int	nchars = strlen(word);
	write(1, nchars, strlen(nchars));
	return 0;
}

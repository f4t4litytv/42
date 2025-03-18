/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:58:57 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/18 19:22:23 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > dest_len)
	{
		while (src[i] != '\0' && dest_len + i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
	dest[dest_len + i] = '\0';
	}
	if (size < dest_len) dest[size - 1] = '\0';
	return (dest_len + src_len);
}
/*
int main() {
    char dest[20] = "Hello, ";
    char src[] = "world! NANI";
    unsigned int size = sizeof(dest);
    unsigned int result = ft_strlcat(dest, src, size);

    printf("Result: %u\n", result);
    printf("Dest: %s\n", dest);

    return 0;
}*/

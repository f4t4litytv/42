/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testeChars.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:59:48 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/06 14:04:27 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int main()
{
	char mensagem[] = "Ola, mundo!";
	size_t tamanho = strlen(mensagem);

	write (1, mensagem, tamanho);
	return (0);
}

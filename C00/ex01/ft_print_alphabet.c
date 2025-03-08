/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:06:33 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/07 19:09:02 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		write (1, &alpha, 1);
		alpha++;
	}
}
int main()
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}

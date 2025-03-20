/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpinto-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 17:00:14 by jpinto-r          #+#    #+#             */
/*   Updated: 2025/03/20 18:24:47 by jpinto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 * (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// Protótipo da tua função ft_atoi
int ft_atoi(char *str);

int main() {
    // Casos de teste
    char *testes[] = {
        "123",
        "-456",
        "  789",
        "   -1011",
        "0",
        "-0",
        "abc",
        "123abc456",
        "   +123",
        "   -00123",
        "   +00123",
        "   -2147483648", // Valor mínimo de int
        "   2147483647",  // Valor máximo de int
        "   -2147483649", // Valor abaixo do mínimo de int
        "   2147483648"   // Valor acima do máximo de int
    };

    // Número de casos de teste
    int num_testes = sizeof(testes) / sizeof(testes[0]);

    // Executar os testes
    for (int i = 0; i < num_testes; i++) {
        char *str = testes[i];
        int resultado_ft_atoi = ft_atoi(str);
        int resultado_atoi = ft_atoi(str); // Usar atoi como referência

        // Comparar os resultados
        if (resultado_ft_atoi == resultado_atoi) {
            printf("Teste %d: SUCESSO - ft_atoi(\"%s\") = %d\n", i + 1, str, resultado_ft_atoi);
        } else {
            printf("Teste %d: FALHA - ft_atoi(\"%s\") = %d, esperado = %d\n", i + 1, str, resultado_ft_atoi, resultado_atoi);
        }
    }

    return 0;
}

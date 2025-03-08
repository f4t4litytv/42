/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f4t4lity <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 01:19:30 by f4t4lity          #+#    #+#             */
/*   Updated: 2025/03/07 01:19:47 by f4t4lity         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_numbers(void) {
    char num1 = '0';
    while (num1 <= '9') {
        char num2 = '0';
        while (num2 <= '9') {
            if (num2 != num1) {
                char num3 = '0';
                while (num3 <= '9') {
                    if (num3 != num1 && num3 != num2) {
                        ft_putchar(num1);
                        ft_putchar(num2);
                        ft_putchar(num3);
                        ft_putchar('\n');
                    }
                    num3++;
                }
            }
            num2++;
        }
        num1++;
    }
}

int main() {
    ft_print_numbers();
    return 0;
}

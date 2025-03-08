#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Before change:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2); // Adicionado \n para nova linha

    ft_swap(&num1, &num2);

    printf("After change:\n"); // Corrigido para "After change:"
    printf("num1 = %d, num2 = %d\n", num1, num2); // Adicionado \n para nova linha

    return 0;
}

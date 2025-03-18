#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("Antes da mudanca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    ft_swap(&num1, &num2); // executo a funcao

    printf("Depois da mudanca:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
*/

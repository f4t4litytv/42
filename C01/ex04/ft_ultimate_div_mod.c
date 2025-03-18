#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int main(void)
{
	int x, y;
	x = 10;
	y = 3;


	ft_ultimate_div_mod(&x, &y);
	printf("divisao = %d\nresto = %d \n", x, y);

	return 0;
}*/

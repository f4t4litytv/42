#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int	n = 1; // criamos uma var para colocar o endereco
	ft_ft(&n); // chamamos a funcao com endereco que queremos obter
	printf("O pointer nbr e : %d \n", n);
	// agora printamos o apontador da var n que passara *nbr 42
	return (0);
}*/

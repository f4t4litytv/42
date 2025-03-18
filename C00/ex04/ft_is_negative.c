#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n <= 0)
	{
		printf("N");
	}
	else{
		printf("P");
	}
}
/*
int	main(void)
{
	ft_is_negative(4);
	ft_is_negative(-3);
	ft_is_negative(33);
	return(0);
}i
*/

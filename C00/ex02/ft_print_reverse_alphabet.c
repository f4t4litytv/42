#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		write (1, &alpha, 1);
		alpha--;
	}
}

int	main()
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}

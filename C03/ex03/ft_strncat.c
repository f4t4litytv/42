#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return dest;
}
/*
int	main()
{
	char	dest[20] = "Hello, ";
	char	src[] = "World!";

	printf("string concatenada : %s \n", ft_strncat(dest, src, 5));
	return (0);
}*/

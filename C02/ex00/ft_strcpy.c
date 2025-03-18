#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0 ;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
	char	origem[] = "Ola mundo!";
	char	dest[50];

	ft_strcpy(dest, origem);

	printf("Origem: %s \n", origem);
	printf("Destino: %s \n", dest);
	return 0;
}*/

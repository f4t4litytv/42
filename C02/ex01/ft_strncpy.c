#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	origem[] = "Hello World!";
	char	destino[20];
	unsigned int	n =5;

	ft_strncpy(destino, origem, n);
	printf("origem: \"%s\", n=%u, Copiado: \"%s\"\n", origem, n, destino);
	
	n = 15;
	ft_strncpy(destino, origem, n);
	printf("origem: \"%s\", n=%u, Copiado: \"%s\"\n", origem, n, destino);

	n = 0;
	ft_strncpy(destino, origem, n);
	printf("origem: \"%s\", n=%u, Copiado: \"%s\"\n", origem, n, destino);

	char	origem_vazia[] = "";
	n = 10;
	ft_strncpy(destino, origem_vazia, n);
	printf("origem: \"%s\", n=%u, Copiado: \"%s\"\n", origem_vazia, n, destino);

	return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int nb = 0;

	while (i < nb && dest[i] != '\0' && src[i] != '\0')
	{
		if (dest[i] != src[i])
		{
			return (0);
		}
		nb++;
	}
	
	if (i == nb)
	{
		return (0);
	}
	else
	{
		return (dest[i] - src[i]);
	}
}

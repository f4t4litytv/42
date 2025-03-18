#include <stdio.h>
#include <string.h>


unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len = 0;
	unsigned int src_len = 0;
	unsigned int total_len = 0;
	unsigned int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	total_len = dest_len + src_len;

	if (size > dest_len + 1)
	{
		while (src[i] != '\0' && dest_len +i < size - 1)
		{
			dest[dest_len + i] = src[i];
			i++;
		}
		dest[dest_len + i] = '\0';
		else if (size != dest_len)
		{
			dest[size-1] = '\0';
		}
	}
}
/*
int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int size = sizeof(dest);
    unsigned int result = ft_strlcat(dest, src, size);

    printf("Result: %u\n", result);
    printf("Dest: %s\n", dest);

    return 0;
}*/

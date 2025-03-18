#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);
{
	if (*to_find != '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		char	*s = str;
		char	*f = *to_find;

		while (*s == *f && *f != '\0')
		{
			s++;
			f++;
		}
		if (*f == '\0')
		{
			return (str);
		}
		str++;
	}
	return NULL;
}



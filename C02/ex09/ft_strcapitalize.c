#include <stdio.h>
#include <string.h>

void	processar_caracteres(char *str)
{
	int	i;
	int	nova_palavra;

	i = 0;
	nova_palavra = 1;
	while (str[i] != '\0')
	{
		if (nova_palavra)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				nova_palavra = 0;
			} 
			else if (str[i] >= 'A' && str[i] <= 'Z')
			{
				nova_palavra = 0;
			}
		} 
		else if (str[i] == ' ' || str[i] == ',' || str[i] == '?'
				|| str[i] == ';' || str[i] == '+' || str[i] == '-')
		{
			nova_palavra = 1;
		}
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	processar_caracteres(str);
	return (str);
}

/*
int main()
{
    char str1[] = "ola, tudo bem?";
    char str2[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
    char str3[] = "outra string";
    char str4[] = "123palavras";
    char str5[] = "";

    printf("Original: '%s', Capitalizada:'%s'\n", str1, ft_strcapitalize(str1));
    printf("Original: '%s', Capitalizada:'%s'\n", str2, ft_strcapitalize(str2));
    printf("Original: '%s', Capitalizada:'%s'\n", str3, ft_strcapitalize(str3));
    printf("Original: '%s', Capitalizada:'%s'\n", str4, ft_strcapitalize(str4));
    printf("Original: '%s', Capitalizada:'%s'\n", str5, ft_strcapitalize(str5));

    return 0;
}*/

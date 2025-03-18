#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int     main() 
{ 
        char    str1[] = "ola mundo"; 
        char    str2[] = "Mundo Olá"; 
        char    str3[] = "134567890"; 
        char    str4[] = ""; 
        char    str5[] = "!#$%%&/(()";  ; 
 
        printf("str1 (\"%s\") é minúscula :
	%d\n", str1, ft_str_is_lowercase(str1)); 
        printf("str2 (\"%s\") é minúscula :
	%d\n", str2, ft_str_is_lowercase(str2)); 
        printf("str3 (\"%s\") é minúscula :
	%d\n", str3, ft_str_is_lowercase(str3)); 
        printf("str4 (\"%s\") é minúscula :
	%d\n", str4, ft_str_is_lowercase(str4)); 
        printf("str5 (\"%s\") é minúscula :
       	%d\n", str5, ft_str_is_lowercase(str5)); 
        return 0; 
} 
*/

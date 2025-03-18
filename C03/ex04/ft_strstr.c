#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find) {
    if (str == NULL || to_find == NULL) {
        return NULL; // Verifica ponteiros nulos
    }

    if (*to_find == '\0') {
        return str;
    }

    while (*str != '\0') {
        char *s = str;
        char *f = to_find;

        while (*s == *f && *f != '\0') {
            s++;
            f++;
        }

        if (*f == '\0') {
            return str; // Retorna o ponteiro correto
        }

        str++;
    }

    return NULL;
}
/*
int main() {
    char str[] = "Esta é uma string de teste.";
    char to_find[] = "string";
    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}*/

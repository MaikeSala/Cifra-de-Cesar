#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE* fp;
    int i = 0, key = 3, size;
    char texto[100], cesar;

    fp = fopen("testando.txt", "w+"); 

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite um texto qualquer: ");
    scanf("%99s", texto); 

    // Algoritmo para encriptar o texto
    int texto_len = strlen(texto);
    while (i < texto_len) {
        size = ((texto[i] - 'a') + key) % 26 + 'a';
        cesar = (char)(size);
        fprintf(fp, "%c", cesar);
        printf("%c",cesar);
        i++;
    }

    fclose(fp);

    return 0;
}



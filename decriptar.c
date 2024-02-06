#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    FILE* fp;
    int i = 0, key = 3, size;
    char texto[100], cesar;

    fp = fopen("testando.txt", "r");

    if (fp == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fgets(texto, 100, fp);
    fclose(fp);

/*     for (i = 0; i < strlen(texto); i++) {
        printf("%c\n", texto[i]);
    } */

    fp = fopen("teste-decriptado.txt", "w");

    // Algoritmo para decriptar o texto
    i = 0;
    while (texto[i] != '\0' && strlen(texto) > i) {
        size = ((texto[i] - 'a') - key + 26) % 26 + 'a';
        cesar = (char)(size);
        fprintf(fp, "%c", cesar);
        printf("%c", cesar);
        i++;
    }

    fclose(fp);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Palindromo(char palavra[]);
void verificarPalindromo();

int main() {
    setlocale(LC_ALL, "Portuguese");
    verificarPalindromo();
    return 0;
}

int Palindromo(char palavra[]) {
    int tamanho = 0;


    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            return 0;
        }
    }

    return 1;
}

void verificarPalindromo() {
    char palavra[101];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (Palindromo(palavra)) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exercício 1
void sequencia_fibonacci() {
    // declarando as variáveis que serão utilizadas
    int tamanho_sequencia, z;
    
    printf("\nDigite a quantidade de números da sequência de Fibonacci entre 1 e 50:\t ");
    scanf("%i", &tamanho_sequencia);

    if (tamanho_sequencia < 1)
        tamanho_sequencia = 1;
    else if (tamanho_sequencia > 50)
        tamanho_sequencia = 50;
    // declarando o vetor com o tamanho máximo possível determinado 
    int vetor_numeros[50];
    vetor_numeros[0] = 0;

    if (tamanho_sequencia > 1)
        vetor_numeros[1] = 1;
    // utilizando o z como incremento para fazer a lógica da repetição 
    for (z = 2; z < tamanho_sequencia; z++) {
        vetor_numeros[z] = vetor_numeros[z - 2] + vetor_numeros[z - 1];
    }

    printf("\nA sequência de Fibonacci com %i posições é:\n", tamanho_sequencia);
    for (z = 0; z < tamanho_sequencia; z++)
        printf("%i\t", vetor_numeros[z]);

    printf("\n");
}

// Exercício 2
void fatorial() {
    // declaração dos tipos das variáveis utilizadas, sendo i para incremento e y para calcular o fatorial
    int numero, resultado_fatorial, i, y;
    
    printf("Digite um número inteiro entre 1 e 20:\t");
    scanf("%i", &numero);
    printf("\nOs fatoriais do número 1 até %i são:\n", numero);
    // inicia o primerio laço de repetição para imprimir a lista do número 1 até o desejado
    for (i = 1; i <= numero; i++) {
        printf("\n%i! = ", i);
        resultado_fatorial = 1;
        // segundo laço para calcular o fatorial
        for (y = i; y >= 1; y--) {
            resultado_fatorial *= y;
        }
        printf("%i", resultado_fatorial);
    }
    printf("\n");
}

// Exercício 3
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

// Exercício 4
void verificarSubstring() {
    char str1[101], str2[101];
    int i, j;

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != 0; i++) {
        for (j = 0; str2[j] == str1[i + j]; j++) {
            if (str2[j + 1] == 0) {
                printf("A segunda string está contida na primeira.\n");
                return;
            }
        }
    }

    printf("A segunda string não está contida na primeira.\n");
}

//Menu
int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    while (1) { 
        printf("\nEscolha uma opção:\n");
        printf("1. Sequência de Fibonacci\n");
        printf("2. Fatorial\n");
        printf("3. Verificar Palíndromo\n");
        printf("4. Verificar Substring\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                sequencia_fibonacci();
                break;
            case 2:
                fatorial();
                break;
            case 3:
                verificarPalindromo();
                break;
            case 4:
                verificarSubstring();
                break;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}

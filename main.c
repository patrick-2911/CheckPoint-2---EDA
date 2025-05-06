#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Exercício 1
// declarando variaveis a serem utilizadas
    int sequencia_fibonacci(){
    int tamanho_sequencia, z;
    tamanho_sequencia= 0;
    printf("\nDigite a quantidade de de números da sequência de Fibonacci entre 1 e 50:\t ");
    scanf("%i", &tamanho_sequencia);

    if (tamanho_sequencia< 1)
        tamanho_sequencia =1;
        else if(tamanho_sequencia> 50)
        tamanho_sequencia= 50;
    // declarando o vetor com o tamanho máximo possível
    int vetor_numeros[50];
    vetor_numeros[0] = 0;
    if (tamanho_sequencia > 1)
        vetor_numeros[1] = 1;
    // Utilizando o z como incrimento para fazer a lógica de fibonnaci
    for (z = 2; z < tamanho_sequencia; z++){
        vetor_numeros[z] = vetor_numeros[z - 2] + vetor_numeros[z - 1];
    } 
    // print da sequencia acionando os vetores para a execução do código
    printf("\nA sequência de Fibonacci com %i posições é:\n", tamanho_sequencia);
    for (z = 0; z < tamanho_sequencia; z++)
        printf("%i\t", vetor_numeros[z]);

    printf("\n");
    }






// Exercício 2
int fatorial(){
    // declaração do tipo das variaives utilizadas, sendo i o incrimento e o Y a variavel de controle para calcular o fatorial
    int numero, resultado_fatorial, i, y;
    printf("Digite um número inteiro entre 1 e 20:\t");
    scanf("%i", &numero);
    // inicio do primeiro laço de repetição para imprimir a lista de números desde o 1 até o desejado
    printf("\nOs fatoriais do numero 1 até %i são:\n", numero);
    for (i=1; i<=numero; i++){
        printf("\n%i! =\t", i);
        resultado_fatorial = 1;
        // segundo laço de repetição utilizado para calcular o fatorial dos números
        for (y=i; y>=1; y--){
            resultado_fatorial *= y;
        }
        printf("%i", resultado_fatorial);
    }
    
// Exercício 3

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

//Exercício 4

void verificarSubstring();

int main() {
    setlocale(LC_ALL, "Portuguese");
    verificarSubstring();
    return 0;
}

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

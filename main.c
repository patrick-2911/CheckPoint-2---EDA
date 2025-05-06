#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

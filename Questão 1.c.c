#include <stdio.h>

void bubbleSort(char arr[], int n) {
    int i, j;
    char temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Troca arr[j] e arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Digite o número de letras que deseja inserir: ");
    scanf("%d", &n);

    char letras[n];
    printf("Insira as letras:\n");
    for (i = 0; i < n; i++) {
        scanf(" %c", &letras[i]);
    }

    bubbleSort(letras, n);

    printf("Letras em ordem alfabética:\n");
    for (i = 0; i < n; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

    return 0;
}

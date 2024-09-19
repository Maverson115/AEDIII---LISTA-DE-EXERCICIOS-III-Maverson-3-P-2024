#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    int trocou; // Variável para verificar se houve troca

    for (i = 0; i < n - 1; i++) {
        trocou = 0; // Inicializa a variável como 0 a cada nova passagem
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = 1; // Indica que houve uma troca
            }
        }
        // Se não houve troca, o array já está ordenado
        if (trocou == 0) {
            break;
        }
    }
}

void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 34, 20, 12, 9, 11, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: ");
    imprimirArray(arr, n);

    bubbleSort(arr, n);

    printf("Array ordenado: ");
    imprimirArray(arr, n);

    return 0;
}

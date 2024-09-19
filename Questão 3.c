#include <stdio.h>

void bubbleSortDecrescente(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) { // Alteração para ordem decrescente
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {100, 110, 40, 30, 22,50, 87};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSortDecrescente(arr, n);
    printf("Array ordenado em ordem decrescente: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

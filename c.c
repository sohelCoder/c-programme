#include <stdio.h>
int main() {
    int arr[5] = {5, 2, 9, 1, 5}; 
    int temp;

    printf("Original Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

  
    for (int i = 0; i < 5 - 1; i++) { 
        for (int j = 0; j < 5 - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

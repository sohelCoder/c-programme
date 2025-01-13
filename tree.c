#include <stdio.h>

void printTree(int height) {
    
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");  
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");  
        }
        printf("\n");
    }

    
    for (int i = 1; i <= height / 3; i++) {
        for (int j = 1; j <= height - 1; j++) {
            printf(" ");  
        }
        
        printf("|\n");  
    }
}

int main() {
    int height;

    printf("Enter the height of the tree: ");
    scanf("%d", &height);

    
    printTree(height);

    return 0;
}

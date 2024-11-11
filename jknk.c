#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 4; i++) {
        printf("%d", i);
        if(i != 4) {
            printf("\t");
        }
    }
    printf("\n");

    for(i = 1; i <= 3; i++) {
        printf("%d", i);
        if(i != 3) {
            printf("\t");
        }
    }
    printf("\n");

    for(i = 1; i <= 2; i++) {
        printf("%d", i);
        if(i != 2) {
            printf("\t");
        }
    }
    printf("\n");

    printf("1\n");

    return 0;
}


#include <stdio.h>
int main() {

    printf("Uppercase letters:\n");
    for (int i = 65; i <= 90; i++) {
        printf("%c ", i);  
    }

    printf("\n\n");

    printf("Lowercase letters:\n");
    for (int i = 97; i <= 122; i++) {
        printf("%c ", i);
    }

    return 0;
}

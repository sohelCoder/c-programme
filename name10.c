#include <stdio.h>

int main() {
    
    const char *countries[] = {
          "India",
        "Canada",
        "Germany",
        "United States",
        "Japan",
        "Australia",
        "Brazil",
        "United Kingdom",
        "France",
        "Mexico"
    };

    
    printf("List of 10 countries:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %s\n", i + 1, countries[i]);
    }

    return 0;
}

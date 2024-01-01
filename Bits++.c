#include <stdio.h>
#include <string.h>

int main() {
    int n, i, x = 0;
    char operation[5];

    // Read the number of statements
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%s", operation);

       
        if (strstr(operation, "++") != NULL) {
            x++;
        } else if (strstr(operation, "--") != NULL) {
            x--;
        }
    }

    
    printf("%d
", x);


}

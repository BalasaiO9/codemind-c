#include <stdio.h>

char maxCharacter(char str[]) {
    char maxChar = NULL; 
    int i;

    for (i = 0; str[i] != NULL; i++) {
        if (str[i] > maxChar) {
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    char input[100];
    printf("");
    scanf("%[^
]", input);

    char max = maxCharacter(input);

    printf("%c
", max);


}

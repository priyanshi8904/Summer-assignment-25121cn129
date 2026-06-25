#include <stdio.h>

int main() {
    int i, j, k;
    char ch = 'A';

    for(i = 1; i <= 5; i++) {
        
        for(j = 1; j <= 5 - i; j++) {
            printf(" ");
        }

        
        ch = 'A';
        for(k = 1; k <= (2 * i - 1); k++) {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}

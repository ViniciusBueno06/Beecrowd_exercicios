#include <stdio.h>

int main() {
    int N, X, i;

    scanf("%d", &N);

    while (N--) {
        scanf("%d", &X);
        int primo = 1; 

        i = 2;
        while (i * i <= X) {
            if (X % i == 0) {
                primo = 0; 
                break;
            }
            i++;
        }

    
        if (primo && X > 1) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }

    return 0;
}

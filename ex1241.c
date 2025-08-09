#include <stdio.h>

int main() {
    int N;
    char A[1001], B[1001];

    scanf("%d\n", &N);

    for (int i = 0; i < N; ++i) {
        scanf("%s %s\n", A, B);

        int lenA = 0;
        while (A[lenA] != '\0') {
            lenA++;
        }

       
        int lenB = 0;
        while (B[lenB] != '\0') {
            lenB++;
        }

        if (lenB > lenA) {
            printf("nao encaixa\n");
        } else {
            int encaixa = 1; 
            int startIndexA = lenA - lenB;
            int j = 0;

            while (j < lenB && encaixa == 1) {
                if (A[startIndexA + j] != B[j]) {
                    encaixa = 0; 
                }
                j++;
            }

            if (encaixa) {
                printf("encaixa\n");
            } else {
                printf("nao encaixa\n");
            }
        }
    }

    return 0;
}
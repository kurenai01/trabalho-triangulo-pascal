#include <stdio.h>

int main() {
    int n, i, j;
    int pascal[20][20];

    printf("Digite o numero de linhas (1 a 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Numero invalido!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1]
                             + pascal[i - 1][j];
            }

            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }

    return 0;
}

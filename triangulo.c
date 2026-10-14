#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {

    setlocale(LC_ALL, "Portuguese");
    int numero;
    int matriz[22][22];

    printf("Quantidade de linhas (1 a 22)\n");
    printf("Digite um valor:\n");
    scanf("%d", &numero);

    if(numero > 25){

        printf("numero de linhas invalido!");
        return 0;
    }

    for (int i = 0; i < numero; i++) {
        for (int j = 0; j <= i; j++) {

            if (j == 0 || j == i) {

                matriz[i][j] = 1;

            }else{

                matriz[i][j] = matriz[i - 1][j - 1] + matriz[i - 1][j];
            }

            printf("%d ", matriz[i][j]);

        }
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int funcao_fatorial(int numero_digitado){

    int fatorial = 1;

    for (int i = 1; i <= numero_digitado; i++){

        fatorial *= i;
    }

    return fatorial;

}

int main(){
    
    int op;
    int n;
    int k;
    
    int permutacao = 1;
    int combinacao = 1;
    int arranjo = 1;
    int pascoal;
    int matriz[16][16];
    
    printf("Escolha:\n"
           "1)Permutacao simples:\n"
           "2)Combinacao simples:\n"
           "3)Arranjo:\n"
           "4)Triangulo pascoal:\n");
           
    scanf("%d", &op);

    switch(op){

        case 1:

        
            printf("escolha um numero:\n");
            scanf("%d", &n);

            if(n > 0){

                for(int i = 1; i <= n; i++){

                    permutacao *= i;
                }

                printf("resultado da permutacao simples: %d", permutacao);

            }else{

                printf("nao existe fatorial de numero negativo.");
            }

            
        break;
        case 2:
            
            
            printf("escolha um numero que defina o tamanho do grupo(n):\n");
            scanf("%d", &n);

            printf("escolha um numero que defina a quantidade de pessoas(k):\n");
            scanf("%d", &k);

            if(n > 0 && k > 0){

                combinacao = funcao_fatorial(n) / (funcao_fatorial(k) * funcao_fatorial(n - k));

                printf("Resultado da combinacao: %d", combinacao);

            }else{

                printf("nao existe fatorial de numero negativo.");
            }

            
        break;
        case 3:
            
            
            printf("escolha um numero que defina o tamanho do grupo(n):\n");
            scanf("%d", &n);

            printf("escolha um numero que defina a quantidade de pessoas ordenadas(k):\n");
            scanf("%d", &k);

            if(n > 0 && k > 0){

                arranjo = funcao_fatorial(n) / (funcao_fatorial(n - k));

                printf("Resultado do Arranjo: %d", arranjo);

            }else{

                printf("nao existe fatorial de numero negativo.");
            }

            
        break;
        case 4:
            
            
            printf("Quantidade de linhas (1 a 15)\n");
            printf("Digite um valor:\n");
            scanf("%d", &pascoal);

            if(pascoal > 15){

                printf("numero de linhas invalido!");
                return 0;
            }

            for (int i = 0; i <= pascoal; i++) {

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

        
        break;
        default:
            printf("opcao invalida!");
    }

    return 0;
}


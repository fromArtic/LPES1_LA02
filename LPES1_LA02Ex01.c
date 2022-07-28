#include <stdio.h>
#include <stdlib.h>

#define N 10

void inputDezElementos();

int V[N], X[N], A[N], B[N];
int i = 0, j = 0, n = 0, m = 0, zero = 0;

int main(){
    inputDezElementos();

    i = 0;
    printf("\nCONCLUSAO\n");
    printf("\n- Seus 10 valores inseridos (desconsiderando entradas nulas):");
    for(i = 0; i < j; i++){
        printf(" %d", V[i]);
    }
    i = 0;
    printf("\n- Dos quais %d sao positivos:", n);
    for(i = 0; i < n; i++){
        printf(" %d", A[i]);
    }
    i = 0;
    printf("\n- E %d sao negativos:", m);
    for(i = 0; i < m; i++){
        printf(" %d", B[i]);
    }
    printf("\n- Quantidade de entradas nulas: %d", zero);
    printf("\n\n");

    system("PAUSE");
    return 0;
}

void inputDezElementos(){
    int ordem = 1;
    for(i = 0; i < N; i++){
        printf("Insira o %d numero: ", ordem);
        scanf("%d", &X[i]);
        if(X[i] != 0){
            V[j] = X[i];
            if(V[j] > 0){
                A[n] = V[j];
                n++;
            }
            if(V[j] < 0){
                B[m] = V[j];
                m++;
            }
            j++;
        }
        else{
            zero++;
        }
        ordem++;
    }
}

#include <stdio.h>
#include <stdlib.h>

void gerarNumerosAleatorios();
void imprimirSequenciaOriginal();
void inverterPosicoes();
void imprimirSequenciaModificada();

int U[10];
int i = 0;

int main(){
    srand(time(NULL));

    gerarNumerosAleatorios();
    imprimirSequenciaOriginal();
    inverterPosicoes();
    imprimirSequenciaModificada();

    system("PAUSE");
    return 0;
}

void gerarNumerosAleatorios(){
    for(i = 0; i < 10; i++){
        U[i] =  1 + rand() % 1000;
    }
}

void imprimirSequenciaOriginal(){
    i = 0;
    printf("Sequencia de numeros gerada aleatoriamente: ");
    for(i = 0; i < 10; i++){
        printf("%d ", U[i]);
    }
}

void inverterPosicoes(){
    i = 0;
    int copia;
    for(i = 0; i < 5; i++){
        copia = U[i];
        U[i] = U[9 - i];
        U[9 - i] = copia;
    }
}

void imprimirSequenciaModificada(){
    i = 0;
    printf("\nA mesma sequencia, com a ordem de seus valores invertida: ");
    for(i = 0; i < 10; i++){
        printf("%d ", U[i]);
    }
    printf("\n\n");
}

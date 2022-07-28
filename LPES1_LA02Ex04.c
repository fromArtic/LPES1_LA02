#include <stdio.h>
#include <stdlib.h>

void printfSequencias();
void contagemDeAdeninas();
void inputUsuario();
void contagemDeEscolha();

int i = 0, adenina = 0, quant, n = 0;
char input, inputCorrected;

char dna1[10] = {'A', 'T', 'G', 'C', 'A', 'A', 'C', 'T', 'A'};
char dna2[10] = {'G', 'G', 'C', 'C', 'A', 'A', 'T', 'A', 'T'};
char dna3[10] = {'C', 'A', 'A', 'T', 'G', 'C', 'C', 'A', 'C'};
char dna4[10] = {'T', 'T', 'G', 'C', 'C', 'C', 'T', 'T', 'C'};

int main(){
    printfSequencias();
    contagemDeAdeninas();
    inputUsuario();
    contagemDeEscolha();

    system("PAUSE");
    return 0;
}

void printfSequencias(){
    printf("SEQUENCIAS");
    printf("\n\n- DNA 1:");
    for(i = 0; i < 9; i++){
        printf(" %c", dna1[i]);
    }
    printf("\n- DNA 2:");
    for(i = 0; i < 9; i++){
        printf(" %c", dna2[i]);
    }
    printf("\n- DNA 3:");
    for(i = 0; i < 9; i++){
        printf(" %c", dna3[i]);
    }
    printf("\n- DNA 4:");
    for(i = 0; i < 9; i++){
        printf(" %c", dna4[i]);
    }
    printf("\n\n");
}

void contagemDeAdeninas(){
     printf("Sequencias que possuem mais de 3 bases de Adenina:");
    //Sequencia 1
    for(i = 0; i < 9; i++){
        if(dna1[i] == 'A'){
            adenina++;
        }
        if(adenina == 4){
            printf("\n- DNA 1");
            break;
        }
    }
    adenina = 0;
    //Sequencia 2
    for(i = 0; i < 9; i++){
        if(dna2[i] == 'A'){
            adenina++;
        }
        if(adenina == 4){
            printf("\n- DNA 2");
            break;
        }
    }
    adenina = 0;
    //Sequencia 3
    for(i = 0; i < 9; i++){
        if(dna3[i] == 'A'){
            adenina++;
        }
        if(adenina == 4){
            printf("\n- DNA 3");
            break;
        }
    }
    adenina = 0;
    //Sequencia 4
    for(i = 0; i < 9; i++){
        if(dna4[i] == 'A'){
            adenina++;
        }
        if(adenina == 4){
            printf("\n- DNA 4");
        }
    }
}

void inputUsuario(){
    printf("\n\n");
    printf("Informe qual base deseja enumerar (A, C, G ou T): ");
    scanf("%c", &input);

    if((input == 'A') || (input == 'a')){
        inputCorrected = 'A';
    }
    if((input == 'C') || (input == 'c')){
        inputCorrected = 'C';
    }
    if((input == 'G') || (input == 'g')){
        inputCorrected = 'G';
    }
    if((input == 'T') || (input == 't')){
        inputCorrected = 'T';
    }
    if((input != 'A') && (input != 'a') && (input != 'C') && (input != 'c') && (input != 'G') && (input != 'g') && (input != 'T') && (input != 't')){
        printf("A base inserida nao eh valida. Reinicie o programa para procurar por um novo valor.\n\n");
        return 0;
    }

    printf("E qual valor a base selecionada deve exceder em cada sequencia? ");
    scanf("%d", &quant);
}

void contagemDeEscolha(){
    printf("\n");
    if(inputCorrected == 'A'){
        printf("Sequencias que possuem mais de %d bases de Adenina:", quant);
    }
    if(inputCorrected == 'C'){
        printf("Sequencias que possuem mais de %d bases de Citosina:", quant);
    }
    if(inputCorrected == 'G'){
        printf("Sequencias que possuem mais de %d bases de Guanina:", quant);
    }
    if(inputCorrected == 'T'){
        printf("Sequencias que possuem mais de %d bases de Timina:", quant);
    }

    //Sequencia 1
    for(i = 0; i < 9; i++){
        if(dna1[i] == inputCorrected){
            n++;
        }
        if(n == quant){
            printf("\n- DNA 1");
            break;
        }
    }
    n = 0;
    //Sequencia 2
    for(i = 0; i < 9; i++){
        if(dna2[i] == inputCorrected){
            n++;
        }
        if(n == quant){
            printf("\n- DNA 2");
            break;
        }
    }
    n = 0;
    //Sequencia 3
    for(i = 0; i < 9; i++){
        if(dna3[i] == inputCorrected){
            n++;
        }
        if(n == quant){
            printf("\n- DNA 3");
            break;
        }
    }
    n = 0;
    //Sequencia 4
    for(i = 0; i < 9; i++){
        if(dna4[i] == inputCorrected){
            n++;
        }
        if(n == quant){
            printf("\n- DNA 4");
            break;
        }
    }
    printf("\n\n");
}

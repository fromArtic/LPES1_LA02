#include <stdio.h>
#include <stdlib.h>

void questionario();
void calculoDaComissao();
void menorMaiorComissao();
void relatorio();

int i = 0, maiorValorNome, menorValorNome;
float somatoriaVendas = 0, maiorValor = 0, menorValor;
float vendas[3], percentual[3], comissao[3];
char nome[3][30];

int main(){
    questionario();
    calculoDaComissao();
    menorMaiorComissao();
    relatorio();

    system("PAUSE");
    return 0;
}

void questionario(){
    printf("QUESTIONARIO:\n\n");
    for(i = 0; i < 3; i++){
        printf("Informe o nome do %d vendedor: ", i+1);
        scanf("%s", nome[i]);
        printf("Insira seu total arrecadado com as vendas: R$");
        scanf("%f", &vendas[i]);
        printf("Agora, insira seu percentual de comissao: ");
        scanf("%f", &percentual[i]);
        somatoriaVendas += vendas[i];
        getchar();
    }
}

void calculoDaComissao(){
    for(i = 0; i < 3; i++){
        comissao[i] = vendas[i] * (percentual[i]/100);
    }
}

void menorMaiorComissao(){
    menorValor = comissao[0];
    for(i = 0; i < 3; i++){
        if(comissao[i] > maiorValor){
            maiorValor = comissao[i];
            maiorValorNome = i;
        }
        else{
            if (comissao[i] < menorValor){
                menorValor = comissao[i];
                menorValorNome = i;
            }
        }
    }
}

void relatorio(){
    printf ("\n\nRELATORIO:\n\n");
    for(i = 0; i < 3; i++){
        printf("- Comissao pelas vendas de %s: R$%.2f\n", nome[i], comissao[i]);
    }
    printf("\nA maior comissao de vendas adquirida eh de R$%.2f, por parte de %s.\n", maiorValor, nome[maiorValorNome]);
    printf("Ja a menor comissao adquirida eh de R$%.2f, por parte de %s.\n", menorValor, nome[menorValorNome]);
    printf("A somatoria das vendas equivale a R$%.2f.\n\n", somatoriaVendas);
}

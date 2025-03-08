#include <stdio.h>

int main(){

    int A, B, soma, subtr, mult, divis, res_divisao, resultado;

    printf("Digite o Primeiro Valor:\n");
    scanf("%d", &A);
    printf("Digite o Segundo Valor:\n");
    scanf("%d", &B);

    //Cálculos abaixo:
    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;
    res_divisao = A % B;
    
    printf("Escolha a opção abaixo:\n[1]Soma\n[2]Subtração\n[3]Multiplicação\n[4]Divisão\n");
    scanf("%d", resultado);

    if (resultado == 1){
        printf("Soma: %d.\n", soma); 
    }

    
    printf("Subtração:%d.\n", subtr);
    printf("Multiplicação:%d.\n",mult);
    printf("Divisão inteira:%d. \n", divis);
    printf("Resto da divisão: %d.\n", res_divisao);
}
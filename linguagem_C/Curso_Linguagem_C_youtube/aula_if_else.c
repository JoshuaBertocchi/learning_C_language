#include <stdio.h>
#include <locale.h> //Biblioteca para o código executar acentos
#include <stdlib.h>
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil"); // Interpreta caracteres da lingua portuguesa

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
    
    printf("Escolha a op��o abaixo:\n[1]Soma\n[2]Subtra��o\n[3]Multiplica��o\n[4]Divis�o\n");
    scanf("%d", &resultado);

    if (resultado == 1){
        printf("Soma: %d.\n", soma); 
    }
    else if (resultado == 2){
        printf("Subtra��o: %d\n", subtr);
    }
    else if (resultado == 3){
        printf("Multiplica��o: %d\n", divis);
    }
    else if (resultado == 4){
        printf("Divis�o inteira: %d\n", divis, res_divisao);
        if (res_divisao > 0){
            printf("Resto da divis�o: %d\n", res_divisao);
        }
        else {
            printf("N�o possui resto da divis�o!");
        }
    }
    printf("teste\n");
    system("pause");
    return 0;
}
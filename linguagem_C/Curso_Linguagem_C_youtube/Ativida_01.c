#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 100;


    printf("Informar Temperatura:\n");
    scanf("%f", &temperatura);
    printf("Informe Umidade:\n");
    scanf("%f", &umidade);
    printf("Informe N� do estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("Temperatura est� alta \n");
    }
    else{
        printf("Temperatura est� dentro dos par�mentros\n");
    }

    if(umidade > 50){
        printf("Umidade elevada\n");
    }
    else{
        printf("Umidade est� dentro dos par�metros\n");
    }
    if (estoque < estoqueMinimo){
        printf("Estoque abaixo do valor min�mo!\n");
    }
    else{
        printf("Estoque normal\n");
    }
    system("pause");
    return 0;
}
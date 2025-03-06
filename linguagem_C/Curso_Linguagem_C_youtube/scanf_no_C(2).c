#include <stdio.h>

int main(){
float peso = 0;
int idade = 0;

printf("Digite sua idade:\n");
scanf("%d",&idade);

printf("Digite seu pedo:\n");
scanf("%f",&peso);

printf("Sua idade é: %d\n Seu peso é: %.2f\n", idade, peso);
}
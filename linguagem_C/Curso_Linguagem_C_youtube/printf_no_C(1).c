#include <stdio.h>  // Biblioteca padrão para entrada e saída

int main() {  // Função principal do programa
    
    printf("Oi, Tudo bem? Tenho 6 anos e progamo.\n");// Exibe uma mensagem de texto simples
    printf("Valor inteiro: %d.\n", 10); // Exibe um número inteiro usando o especificador %d
    printf("Valor real: %f.\n", 3.2392841);// Exibe um número real (float) usando o especificador %f
    printf("Valor real com apenas duas casas: %.2f.\n", 3.2392841); // Exibe um número real com apenas duas casas decimais usando %.2f
    printf("Dado de texto: %c.\n", 'T');// Exibe um caractere usando o especificador %c
    printf("Dado de texto: %s.\n", "testando");// Exibe uma string (texto) usando o especificador %s
    return 0;  // Retorna 0 indicando que o programa executou corretamente
}

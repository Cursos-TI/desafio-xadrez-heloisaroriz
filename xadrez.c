#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
   
int main() {
    int bispo = 0, rainha = 0;


    printf("Movimentos das peças de xadrez \n");

    printf("\n----------Movimento da Torre---------- \n\n");
    for( int torre = 0; torre < 5; torre++) //Vai execultar 5 vezes o movimento da torre
    {
       printf("A torre se moveu para a direita \n");
    }

    printf("\n----------Movimento do Bispo----------\n\n");

    while (bispo < 5) { //Vai execultar 5 vezes o movimento do bispo
        printf("O bispo se moveu para cima, direita \n");
        bispo++;
    }
    
    printf("\n----------Movimento da Rainha----------\n\n");

    do{ //Vai execultar 8 vezes o movimento da rainha
       printf("A rainha se moveu para a esquerda \n");
       rainha++;
    } while (rainha < 8);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

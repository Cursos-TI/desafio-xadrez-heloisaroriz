#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
   
int main() {
    int bispo = 0, rainha = 0, cavalo = 1;


    printf("Movimentos das peças de xadrez \n");

    printf("\n----------Movimento da Torre---------- \n\n");
    for( int torre = 0; torre < 5; torre++) //Vai execultar 5 vezes o movimento da torre
    {
       printf("Direita \n");
    }
    printf("Torre andou 5 casas para direita\n");

    printf("\n----------Movimento do Bispo----------\n\n");

    while (bispo < 5) { //Vai execultar 5 vezes o movimento do bispo
        printf("Cima, Direita \n");
        bispo++;
    }
    printf("Bispo andou 5 casas em diagonal\n");
    
    printf("\n----------Movimento da Rainha----------\n\n");

    do{ //Vai execultar 8 vezes o movimento da rainha
       printf("Esquerda \n");
       rainha++;
    } while (rainha < 8);
    printf("Rainha andou 8 casas para esquerda\n");



// Nível Aventureiro - Movimentação do Cavalo
    printf("\n----------Movimento do Cavalo----------\n\n");

    while (cavalo--)
    {
        for (int c = 0; c < 2; c++) {
          printf("Baixo, ");    

        }
        printf("Esquerda\n");
    }
    printf("Cavalo moveu em L\n");
        
// Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}

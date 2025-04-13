#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Nível Novato - Movimentação das Peças
void recursivotorre(int torre){
    if (torre == 0){
        printf("\nTorre moveu 5 casas para direita\n\n");
        return;
    } 
    printf("Direita\t");
    recursivotorre(torre - 1);
}
void recursivobispo(int linhas, int colunas,int casas){
    if (casas == 0){
        printf("\nBispo moveu 5 casas em diagonal\n\n");
        return;
    }
    for (int l = 0; l < linhas; l++){
        for(int c = 0; c < colunas; c++){ 
            if(l == c){ 
                printf("Cima,Direita\t");
            }
        }
    }
    recursivobispo(0,0,casas - 1);
}
void recessivorainha(int casas){
    if (casas == 0){
        printf("\nRainha movimentou 8 casas para esquerda\n\n");
        return;
    }
    printf("Esquerda\t");
    recessivorainha(casas - 1);
}


void recessivocavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < movimentos; j++) {
            if (i == j) continue;
            if (i == 2 && j == 1) {
                printf("Cima, Cima, Direita\t");
                break;
            }
        }
    }
    printf("\nCavalo moveu 2 casas pra cima e 1 pra direita");
}


int main(){
    recursivotorre(5); 
    recursivobispo(5,5,1); 
    recessivorainha(8);
    recessivocavalo(3);
    return 0;
}
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // CONTROLA QUANTAS CASAS A PEÇA SE MOVERÁ
    const int movimentacao_bispo = 5;
    const int movimentacao_torre = 5;
    const int movimentacao_rainha = 8;

    // VARIÁVEIS DE CONTROLE DE MOVIMENTO
    // INDICA O MOVIMENTO ATUAL DA PEÇA
    int movimentacao_atual = 1;
    // REPRESENTA A CASA ATUAL QUE A PEÇA SE ENCONTRA
    int movimentacao = 0;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // PRIMEIRO CONTROLE DE REPETIÇÃO COM WHILE
    printf("-------------- MOVIMENTAÇÃO DO BISPO! --------------\n\n");
    while (movimentacao < movimentacao_bispo) {
        // SE VERDADEIRA A CONDIÇÃO, PRINTA O MOVIMENTO ATUAL E EM SEGUIDA O MOVIMENTO DA PEÇA
        printf("Movimento N. %d - ", movimentacao_atual);
        printf("Direita e Cima\n");

        // REALIZA A ITERAÇÃO DE AMBOS CONTROLES
        movimentacao_atual++;
        movimentacao++;
    }

    // APÓS O PRIMEIRO LOOP, AS VARIÁVEIS DE CONTROLE SÃO "ZERADAS"
    movimentacao_atual = 1;
    movimentacao = 0;
    
    // SEGUNDO CONTROLE DE REPETIÇÃO COM WHILE

    printf("\n\n-------------- MOVIMENTAÇÃO DA TORRE! --------------\n\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    do {
        // SE VERDADEIRA A CONDIÇÃO, PRINTA O MOVIMENTO ATUAL E EM SEGUIDA O MOVIMENTO DA PEÇA
        printf("Movimento N. %d - ", movimentacao_atual);
        printf("Direita\n");

        // REALIZA A ITERAÇÃO DE AMBOS CONTROLES
        movimentacao_atual++;
        movimentacao++;
    } while (movimentacao < movimentacao_torre);
    
    // APÓS O PRIMEIRO LOOP, AS VARIÁVEIS DE CONTROLE SÃO "ZERADAS"
    movimentacao_atual = 1;
    movimentacao = 0;

    // TERCEIRO CONTROLE DE REPETIÇÃO COM WHILE

    printf("\n\n-------------- MOVIMENTAÇÃO DA RAINHA! --------------\n\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    for (movimentacao; movimentacao < movimentacao_rainha; movimentacao++) {
        // SE VERDADEIRA A CONDIÇÃO, PRINTA O MOVIMENTO ATUAL E EM SEGUIDA O MOVIMENTO DA PEÇA
        printf("Movimento N. %d - ", movimentacao_atual);
        printf("Esquerda\n");

        // REALIZA A ITERAÇÃO DA VARIÁVEL DE CONTROLE
        movimentacao_atual++;
    }
    
    // FIM DO PROGRAMA
    printf("\n\n------------------------- FIM! -------------------------\n\n");
    
    return 0;
}

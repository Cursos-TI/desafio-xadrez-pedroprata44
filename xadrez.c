#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarPeca(int movimentoMax, char nomePeca [50]){
    if(strcmp(nomePeca, "Bispo") == 0){
        while(movimentoMax != 0){
            printf("%s andou 1 casa na diagonal à direita\n", nomePeca);
            movimentoMax--;
        }
    }
    if(strcmp(nomePeca, "Torre") == 0){
        while(movimentoMax != 0){
            printf("%s andou 1 casa à direita\n", nomePeca);
            movimentoMax--;
        }
    }
    if(strcmp(nomePeca, "Rainha") == 0){
        while(movimentoMax != 0){
            printf("%s andou 1 casa à esquerda\n", nomePeca);
            movimentoMax--;
        }
    }
    if(strcmp(nomePeca, "Cavalo") == 0){
        while(movimentoMax > 1){
            printf("%s andou 1 casa à baixo\n", nomePeca);
            movimentoMax--;
        }
        for(movimentoMax; movimentoMax > 0; movimentoMax--){
            printf("%s andou uma casa à esquerda\n", nomePeca);
        }
    }
}

int main() {
    const int movimentoMaxBispo = 5;
    const int movimentoMaxTorre = 5;
    const int movimentoMaxRainha = 8;
    const int movimentoMaxCavalo = 3;

    movimentarPeca(movimentoMaxCavalo, "Cavalo");

    // movimentarPeca(movimentoMaxBispo, "Bispo");
    // movimentarPeca(movimentoMaxTorre, "Torre");
    // movimentarPeca(movimentoMaxRainha, "Rainha");

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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

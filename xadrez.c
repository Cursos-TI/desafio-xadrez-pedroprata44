#include <stdio.h>
#include <string.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movimentarCavalo(){
    int quantidadeMovimentosCavalo = 3;
    for(quantidadeMovimentosCavalo; quantidadeMovimentosCavalo > 0; quantidadeMovimentosCavalo--){
        if(quantidadeMovimentosCavalo == 1){
            printf("Cavalo andou 1 casa à direita\n");
            break;
        }
        printf("Cavalo andou 1 casa à cima\n");
    }
}

void movimentarBispo(){
    int quantidadeMovimentosBispo = 5;
        while(quantidadeMovimentosBispo != 0){
            printf("Bispo andou 1 casa na diagonal à direita\n");
            quantidadeMovimentosBispo--;
        }
}

void movimentarTorre(){
    int quantidadeMovimentosTorre = 5;
        while(quantidadeMovimentosTorre != 0){
            printf("Torre andou 1 casa na diagonal à direita\n");
            quantidadeMovimentosTorre--;
        }
}

void movimentarRainha(){
    int quantidadeMovimentosRainha = 8;
        while(quantidadeMovimentosRainha != 0){
            printf("Rainha andou 1 casa na diagonal à direita\n");
            quantidadeMovimentosRainha--;
        }
}

int main() {
    movimentarCavalo();
    movimentarBispo();
    movimentarTorre();
    movimentarRainha();

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

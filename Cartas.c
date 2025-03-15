#include <stdio.h>

// Estrutura para armazenar os países e seus atributos
typedef struct {
    char nome[30];
    int populacao;   // em milhões
    int area;        // em mil km²
    int pib;         // PIB em trilhões de dólares
} Carta;

// Função para exibir uma carta
void exibirCarta(Carta c) {
    printf("\n=======================\n");
    printf("País: %s\n", c.nome);
    printf("População: %d milhões\n", c.populacao);
    printf("Área: %d mil km²\n", c.area);
    printf("PIB: %d trilhões de dólares\n", c.pib);
    printf("=======================\n");
}

int main() {
    // Criando um pequeno baralho com 4 países
    Carta baralho[4] = {
        {"Brasil", 213, 8516, 2},
        {"EUA", 331, 9834, 23},
        {"China", 1441, 9597, 17},
        {"Alemanha", 83, 357, 4}
    };

    // Exibindo todas as cartas
    for (int i = 0; i < 4; i++) {
        exibirCarta(baralho[i]);
    }

    return 0;
}

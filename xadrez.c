#include <stdio.h>

int main() {
    // Definindo o número de casas que cada peça deve se mover
    const int casasTorre = 5;   // Torre moverá 5 casas para a direita
    const int casasBispo = 5;   // Bispo moverá 5 casas na diagonal (cima e direita)
    const int casasRainha = 8;  // Rainha moverá 8 casas para a esquerda

    // Simulação do movimento da Torre
    printf("Movimento da Torre:\n");
    // A Torre move-se em linha reta horizontalmente ou verticalmente.
    // Aqui simulamos a Torre movendo 5 casas para a direita.
    // Utilizamos o loop 'for' para repetir o movimento 5 vezes.
    for (int i = 0; i < casasTorre; i++) {
        // Imprimir a direção do movimento para cada casa percorrida
        printf("Direita\n");
    }

    // Simulação do movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    // O Bispo move-se na diagonal.
    // Aqui simulamos o movimento em diagonal para cima e para a direita.
    // Usamos o loop 'while' para repetir o movimento 5 vezes.
    int j = 0; // Inicializa o contador para o loop while
    while (j < casasBispo) {
        // Imprimir a combinação de direções "Cima, Direita" para cada casa percorrida
        printf("Cima, Direita\n");
        j++; // Incrementa o contador para continuar o loop
    }

    // Simulação do movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    // A Rainha pode mover-se em todas as direções.
    // Aqui simulamos a Rainha movendo 8 casas para a esquerda.
    // Utilizamos o loop 'do-while' para garantir que o movimento ocorra pelo menos uma vez.
    int k = 0; // Inicializa o contador para o loop do-while
    do {
        // Imprimir a direção do movimento para cada casa percorrida
        printf("Esquerda\n");
        k++; // Incrementa o contador para continuar o loop
    } while (k < casasRainha);

    return 0; // Indica que o programa terminou com sucesso
}
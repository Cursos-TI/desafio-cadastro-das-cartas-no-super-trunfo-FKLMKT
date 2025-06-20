#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado;
    int cod_cidade;
    int cidade;
    int populacao;
    int area;
    float pib;
    int pontos_tur;

    printf ("Digite o estado: %s/n");
    scanf ("%s/n", &estado);

    printf ("Digite a cidade: %d/n");
    scanf ("%d/n", &cidade);

    printf ("Digite a população: %d/n");
    scanf ("%d/n", &populacao);

    printf ("Digite a área em m2: %d/n");
    scanf ("%d/n", &area);

    printf ("Digite o PIB %.2f/n");
    scanf ("%.2f/n", &pib);

    printf("Digite o número de pontos turísticos: %d/n");
    scanf ("%d/n", &pontos_tur);

    printf("A cidade é: %d/n", cidade);
    printf("Sua população é de: %d/n", populacao);
    printf("Possui uma área de: %d m2 /n", area);
    printf("Seu PIB é de: %d /n,", pib);
    printf("Possui %d pontos turísticos /n", pontos_tur);



    return 0;
}

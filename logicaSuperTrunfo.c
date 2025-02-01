#include <stdio.h>
#include <string.h>

// Estrutura para armazenar as propriedades de uma cidade
struct Cidade {
    char nome[100];
    char codigo[10];
    int populacao;
    float area;
    float pib;
};

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    struct Cidade cidade1, cidade2;

    // Cadastro das Cartas:
    // Solicitando as informações da cidade 1
    printf("Digite o nome da cidade 1: ");
    fgets(cidade1.nome, sizeof(cidade1.nome), stdin);  // Usando fgets para permitir nomes com espaços
    cidade1.nome[strcspn(cidade1.nome, "\n")] = 0; // Remove a nova linha que vem com o fgets

    printf("Digite o código da cidade 1: ");
    fgets(cidade1.codigo, sizeof(cidade1.codigo), stdin);
    cidade1.codigo[strcspn(cidade1.codigo, "\n")] = 0; // Remove a nova linha que vem com o fgets

    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);
    getchar();  // Limpa o caractere de nova linha residual

    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);
    getchar();  // Limpa o caractere de nova linha residual

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &cidade1.pib);
    getchar();  // Limpa o caractere de nova linha residual

    // Solicitando as informações da cidade 2
    printf("\nDigite o nome da cidade 2: ");
    fgets(cidade2.nome, sizeof(cidade2.nome), stdin);  // Usando fgets para permitir nomes com espaços
    cidade2.nome[strcspn(cidade2.nome, "\n")] = 0; // Remove a nova linha que vem com o fgets

    printf("Digite o código da cidade 2: ");
    fgets(cidade2.codigo, sizeof(cidade2.codigo), stdin);
    cidade2.codigo[strcspn(cidade2.codigo, "\n")] = 0; // Remove a nova linha que vem com o fgets

    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);
    getchar();  // Limpa o caractere de nova linha residual

    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);
    getchar();  // Limpa o caractere de nova linha residual

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &cidade2.pib);
    getchar();  // Limpa o caractere de nova linha residual

    // Comparação de Cartas:
    // Comparando a população das duas cidades
    printf("\nComparando as cidades:\n");

    // Comparação de população
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade 1 tem maior população.\n");
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade 2 tem maior população.\n");
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Comparação de área
    if (cidade1.area > cidade2.area) {
        printf("Cidade 1 tem maior área.\n");
    } else if (cidade1.area < cidade2.area) {
        printf("Cidade 2 tem maior área.\n");
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // Comparação de PIB
    if (cidade1.pib > cidade2.pib) {
        printf("Cidade 1 tem maior PIB.\n");
    } else if (cidade1.pib < cidade2.pib) {
        printf("Cidade 2 tem maior PIB.\n");
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    // Exibição dos Resultados:
    // Exibindo a cidade vencedora com base na maior população, área ou PIB
    printf("\nResumo da comparação entre as cidades:\n");
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade vencedora (maior população): %s\n", cidade1.nome);
    } else if (cidade1.populacao < cidade2.populacao) {
        printf("Cidade vencedora (maior população): %s\n", cidade2.nome);
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main() {
    /* Irei fazer de só um dos estados, quando eu tiver a aula de laços de repeticão, Arrey, Se e senão e Structs, o código ficará melhor.
    Eu tenho a base da programação mas ainda não sei sobre C, por enquanto vou abrir variavel pra cada um.*/ 

    // Nomes do País e dos Estados
    char nomePais[50], nomeEstadoA[50]; 
    // Nomes das Cidades (divididas por numeração)
    char nomeCidadeA01[50], nomeCidadeA02[50], nomeCidadeA03[50], nomeCidadeA04[50];
    // População das Cidades
    int popuA01, popuA02, popuA03, popuA04;
    // PIB
    int pibA01, pibA02, pibA03, pibA04;
    // Área
    float areaA01, areaA02, areaA03, areaA04;
    // Número de Pontos Turísticos
    int numPTA01 = 1, numPTA02 = 1, numPTA03 = 1, numPTA04 = 1; 

    // Cadrasto de dados
    printf("OLÁ SEJA BEM VNDO AO SURPE TRUFO PAÍSES\n");
    printf ("------------------------------------------------------------------------------\n");
    printf ("REGRAS:\nInforme o nome do País, o nome dos Estados e o nome de 4 (quatro) cidades por estado e\n");
    printf("depois infome seus Respectivos números de População, Área, PIB e Número de pontos turísticos. \n(Utilize ponto ao inves de virgula para dividir os números) (Nivel Novato)\n");
    printf ("------------------------------------------------------------------------------\n");
    printf ("Qual é o nome do seu País? ");
    scanf("%s", &nomePais);
    printf("Qual o nome do primeiro estado? ");
    scanf("%s", &nomeEstadoA);
    printf("Qual é o nome da primeira cidade? ");
    scanf("%s", &nomeCidadeA01);
    printf("Me informe a população da cidade %s (Sem . ou ,)\n", nomeCidadeA01);
    scanf("%d", &popuA01);
    printf("Me informe a Área da cidade %s (em km quadrados)\n", nomeCidadeA01);
    scanf("%f", &areaA01);
    printf("Me informe o PIB da cidade %s (Sem . ou ,)\n ", nomeCidadeA01); // Depois fazer uma função para reconhecer bilhão, milhão, mil...
    scanf("%d", &pibA01);
    printf("Me informe de Número de pontos turísticos da cidade %s\n", nomeCidadeA01);
    scanf("%d", &numPTA01);
    printf("Cadastro da Carta %s bem sucedida!", nomeCidadeA01);
    printf("Informações:\n Estado: %s\n Cidade: %s\n População: %d\n Área: %.3f\n PIB: %d\n Número de pontos turísticos: %i\n", nomeEstadoA, nomeCidadeA01, popuA01, areaA01, pibA01, numPTA01);
    printf("Deseja cadastrar uma nova cidade? (s/n) -------EM DESENVOLVIMENTO\n");

    return 0;
}

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
    /* Quando eu tiver a aula de laços de repeticão, Arrey, Se e senão e Structs, o código ficará melhor.
    Eu tenho a base da programação mas ainda não sei sobre C, por enquanto vou abrir variavel pra cada um.*/ 

    // Nomes das Cidades (divididas por numeração)
    char nomeEstado01[2] = "", nomeEstado02[2] = "", nomeCidade01[50] = "", nomeCidade02[50] = "";
    // População das Cidades
    int popu01 = -1, popu02 = -1;
    // Área
    float area01 = -1.0, area02 = -1.0;
    // PIB
    float pib01 = -1.0, pib02 = -1.0;
    // Número de Pontos Turísticos
    int numPT01 = -1, numPT02 = -1; 

    // Cadrasto de dados
    printf("OLÁ SEJA BEM VNDO AO SUPER TRUFO PAÍSES\n");
    printf ("------------------------------------------------------------------------------\n");
    printf ("REGRAS:\nInforme uma letra de A a H representando o Estado e o nome da cidade e\n");
    printf("depois infome seus Respectivos números de População, Área, PIB e Número de pontos turísticos. \n(Utilize ponto ao inves de virgula para dividir os números) (Nivel Novato)\n");
    printf ("------------------------------------------------------------------------------\n");
    // Leitura dos dados da primeira Carta
    printf("Qual o nome do primeiro estado? (represente por letras de A a H) ");
        scanf("%1s", nomeEstado01);
    printf("Qual é o nome da cidade? ");
        scanf("%s", nomeCidade01);
    printf("Me informe a população da cidade (Sem . ou ,)\n");
        scanf("%d", &popu01);
    printf("Me informe a Área da cidade (em km quadrados)\n");
        scanf("%f", &area01);
    printf("Me informe o PIB da cidade (Sem . ou ,)\n "); // Depois fazer uma função para reconhecer bilhão, milhão, mil...
        scanf("%f", &pib01);
    printf("Me informe de Número de pontos turísticos da cidade\n");
        scanf("%d", &numPT01);
    printf("Cadastro da Carta %s01 bem sucedida!\n", nomeEstado01);
    printf("Deseja cadastrar uma nova cidade? (s/n) -------INDISPONIVEL: EM DESENVOLVIMENTO\n");
    // Leitura dos dados da segunda carta
    printf("Qual o nome do segundo estado? (represente por letras de A a H) ");
        scanf("%1s", nomeEstado02);
    printf("Qual é o nome da cidade? ");
        scanf("%s", nomeCidade02);
    printf("Me informe a população da cidade (Sem . ou ,)\n");
        scanf("%d", &popu02);
    printf("Me informe a Área da cidade (em km quadrados)\n");
        scanf("%f", &area02);
    printf("Me informe o PIB da cidade (Sem . ou ,)\n "); // Depois fazer uma função para reconhecer bilhão, milhão, mil...
        scanf("%f", &pib02);
    printf("Me informe de Número de pontos turísticos da cidade\n");
        scanf("%d", &numPT02);
    printf("Cadastro da Carta %s02 bem sucedida!\n", nomeEstado02);
    printf("Deseja cadastrar uma nova cidade? (s/n) -------INDISPONIVEL: EM DESENVOLVIMENTO\n");
    // Exibição das informações
    printf("Informações:\n Carta 01:\n Estado: %s\n Cidade: %s\n Codigo: %s01\n População: %d\n Área: %.2fkm²\n PIB: %.2f\n Número de pontos turísticos: %d\n", 
        nomeEstado01, nomeCidade01, nomeEstado01, popu01, area01, pib01, numPT01);
    printf("Carta 02:\n Estado: %s\n Cidade: %s\n Codigo: %s02\n População: %d\n Área: %.2f\n PIB: %,2f\n Número de pontos turísticos: %d\n", 
        nomeEstado02, nomeCidade02, nomeEstado02, popu02, area02, pib02, numPT02);

    return 0;
}

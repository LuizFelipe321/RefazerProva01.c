#include <stdio.h>

int main() {
    int vendasTotais, valorTotal; //define variavel tipo int
    char resposta; //define variavel tipo char

    //Se N atingiu a meta = "Desempenho insuficiente"

    //Se S atingiu a meta:
    //Mais de 50 vendas e valor a cima de 10000 -> Excelente Desempenho
    // Mais de 30 vendas ou valor total a cima de 5000 -> Bom Desempenho
    //Caso contrario -> "Desempenho regular"
    //Se resposta for diferente de S e N, imprime exibir mensagem "resposta inválida"


    printf("Qual a venda total realizadas:\n"); // Pede venda total
    scanf("%d", &vendasTotais); // Le venda total

    printf("Qual o valor total realizadas:\n"); //Pede valor total
    scanf("%d", &valorTotal); // Le venda total

    printf("Atingiu a meta (S - Sim, N - Nao:"); // Pede resposta 'S' ou 'N'
    scanf(" %c", &resposta); // Le resposta

    switch (resposta) {
    case 'N': //Caso leitura do usuario for 'N' na variavel 'resposta'
            printf("Desempenho insuficiente"); //imprime mensagem
        break; // O caso foi atendido, portanto ele nao continua seguindo, interrompendo o switch case
    case 'S': // Casoleitura do usuario for 'S' na variavel 'resposta'
        if (vendasTotais > 50 && valorTotal > 10000) { // se venda total for maior que 50 e tambem o valor total for menor que 10000
            printf("Excelente desempenho!"); //imprime mensagem
        } else if (vendasTotais > 30 || valorTotal > 5000) { // se nao, venda total > 30 ou valor total for maior que 5000 (caso uma ou outra condicao seja verdadeira)
            printf("Bom desempenho!"); //imprime na tela a mensagem
        } else { //caso nenhuma condicao seja atendida ele cai em else
            printf("Desempenho regular!"); //imprime mensagem
        }
        break; // o caso foi atendido portando ele nao continua seguindo, interrompendo o switch case
    default: // caso nenhum case seja atendido ele cai em default
        printf("Resposta inválida!"); // imprime mensagem

        }

    return 0; //fecha programa caso tudo tenha ocorrido bem

        }


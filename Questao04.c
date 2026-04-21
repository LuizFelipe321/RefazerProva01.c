#include <stdio.h>

int main(){

    char tipo;
    float distanciaPercorrida, valorPorKm, precoTotal; //define variavel

    printf("Digite o tipo do veiculo (1-Carro, 2-Moto, 3-Van):\n "); //pede tipo do veiculo
    scanf(" %c", &tipo);

    printf("Digite a distancia percorrida em (km):\n "); //pede distancia percorrida
    scanf("%f", &distanciaPercorrida);

    switch (tipo) {
        case '1':
            printf("Voce selecionou tipo carro!\n");
            valorPorKm = 2.00;  // valor por km
            break; // caso seja atendida, interrompe e fecha o switch case
        case '2':
            printf("Voce selecionou tipo moto!\n");
            valorPorKm = 1.00;  // valor por km
            break; //caso seja atendida, interrompe e fecha o switch case
        case '3':
            printf("Voce selecionou tipo van!\n");
            valorPorKm = 3.00; //valor por km
            break; // caso seja atendida, interrompe e fecha o switch case
        default:
            printf("Tipo de veiculo invalido!\n"); //Caso nenhuma opcao tipo seja atendida, ele cai em default.

    }
    if (tipo == '1' || tipo == '2' || tipo == '3') { // caso atenda tipo sendo '1','2','3' ele realiza o calculo

    precoTotal = distanciaPercorrida * valorPorKm;

    }

    if (distanciaPercorrida > 10 && distanciaPercorrida <= 30) { //se distancia for maior que 10km e menor ou = 30
        precoTotal = precoTotal * 1.10;  // acrescimo de 10% preco total
    } else if (distanciaPercorrida > 30) { //senao,caso seja > 30
        precoTotal = precoTotal * 1.20; //acrescimo de 20% no preco total
    }

    printf("O valor total da corrida eh: R$%.2f\n", precoTotal); //imprime na tela o resultado do calculo (precoTotal = distanciaPercorrida * valorPorKm)

    return 0;
}

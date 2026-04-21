#include <stdio.h>

int main() {

int quantidade, calculo;
float valor, valorFinal;
char tipo;

// Implemental calculo final de compras.

printf ("Escreva o valor do produto:\n");
scanf ("%f" , &valor);

printf ("Escreva a quantidade comprada de produtos(+10 recebe desconto de 5%):\n");
scanf ("%d" , &quantidade);

printf ("Escreva o tipo do cliente ( C ou V ):\n");
scanf(" %c", &tipo);


if (tipo == 'C' || tipo == 'V') {
    valorFinal = valor * quantidade;
    if (tipo == 'V') {
    valorFinal = valorFinal * 0.9;
  } if (quantidade > 10) {
    valorFinal = valorFinal * 0.95;
}

else {
    printf("Tipo de cliente invalido!\n");
}
}

printf("O gasto final da compra é: %.2f\n", valorFinal);

return 0;

}

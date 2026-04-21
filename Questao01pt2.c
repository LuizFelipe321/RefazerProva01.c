#include <stdio.h>

int main() {
    
    int a, b;
    
/*O código possui
erros, que podem ser de
sintaxe ou lógica.
- Explique por que cada um
deles está incorreto. Mostre
como deveria ser corrigido.*/

    
    printf ("Digite dois numeros: ");
    scanf ("%d %d", a, b);
    
    if (a = b) {
        printf("Numeros iguais\n");
    } else if (a > b);  // Aqui possui um erro pois nao foram abertas chave "{}" de abertura e fechamento de else if, ela é uma outra condicao
         printf ("A eh maior\n");
    else //Aqui tambem possui um erro pois nao foram abertas chave "{}" de abertura e fechamento para else, ela é uma condicao
        printf("B eh maior\n");
        
    return 0;
}

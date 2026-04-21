#include <stdio.h>
#include <stdbool.h>

int main() //variavel principal
{
    int x = 15; //atribui variavel de x
    int y = 4;  //atribui variavel de y
    char c = 'A'; //atribui valor do char
    bool cond; //atribui variavel booleana bond

    cond = (x % y == 3) || (c == 'B'); // resto da divisao x / y == 3 (3.75) (INT) (VERDADEIRO), ou c == B (FALSO)--> (VERDADEIRO)

    x = cond ? x - y : x + y; //x = cond, (VERDADEIRO), logo será x - y --> 15 - 4 = 11 ---> x = 11

    if (c == 'A') { //VERDADEIRO
        y = (x > 10) ? y * 2 : y + 5; //y = (x > 10, 11 > 10) (VERDADEIRO), logo será y * 2, 4 * 2 ---> y = 8
    } else { // nao será atribuida essa condicao pois condicao if ja foi aceita.
        y = y - 3;
    }

    x = (y % 3 == 0) ? x / 3 : x + 2; //x = ( 8 % 3 == 0 ) (FALSO) , 8 % 3 == 2, logo será x + 2, 11 + 2 --> x = 13
    printf("%d %d\n", x, y);  //imprime na tela: ( 13 8 )

    return 0; // Encerra o programa
}

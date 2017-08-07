/* Contador de palavras
 * Flavia Degelo Camilo RA: 167611
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */


#include <stdio.h>

int main() {
    char c;
    char anterior;
    int palavras=0;
    int flutuante=0;
    c = 0;
    anterior = 0;

  while (c != '\n') {

    scanf("%c",&c);

    if (c == ' ' || c == '.' || c == ',' || c == '?' || c == '!' || c == '-' || c == '\n' || c == ';' || c == ':'){ // A contagem de palavras eh feita pensando-se nas pontuacoes que indicam final de palavras/numeros

        if((anterior >= 'a' && anterior <= 'z') || (anterior >= 'A' && anterior <= 'Z')) { // Indicacao do final de uma palavra

            palavras++;
        }

        if(anterior >= '0' && anterior <= '9'){ // Indicacao do final de um numero ou de um ponto flutuante

                if(c== '.' || c== ','){ // Se houver chances de ser ponto flutuante, ele sera testado atraves de uma flag

                    flutuante=1;
                }

                else{

                    flutuante=0;
                }

                palavras++;
        }

    }

    anterior = c;

    if(flutuante==1 && (anterior >= '0' && anterior <= '9')){ // Caso a pontuacao ocorra devido a um ponto flutuante, ela deixa de ser considerada como uma nova palavra
        palavras--;
        flutuante=0;
    }

}
  printf("%d\n", palavras);
  return 0;
}

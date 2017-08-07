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

    if (c == ' ' || c == '.' || c == ',' || c == '?' || c == '!' || c == '-' || c == '\n' || c == ';' || c == ':'){

        if((anterior >= 'a' && anterior <= 'z') || (anterior >= 'A' && anterior <= 'Z')) {

            palavras++;
      }

       if(anterior >= '0' && anterior <= '9'){

                if(c== '.' || c== ','){

                    flutuante=1;
                }
                else{
                    flutuante=0;
                }

                palavras++;
            }



  }

    anterior = c;

    if(flutuante==1 && (anterior >= '0' && anterior <= '9')){
        palavras--;
        flutuante=0;
}


}
  printf("%d\n", palavras);
  return 0;
}

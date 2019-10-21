/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/04/16 18:13:19 $
* $Log: aula0302.c,v $
* Revision 1.1  2015/04/16 18:13:19  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>

#include "aula0301.h"

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define ARGUMENTO_INVALIDO		2

#define NUMERO_ARGUMENTOS		2
#define EOS				'\0'

int
main (int argc, char*argv[]){
  
  int indice;

  if (argc != NUMERO_ARGUMENTOS){
    printf("Uso: %s: <NUMERO TERMO FIBONACCI>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO); 
  }

  for (indice = 0; argv[1][indice] != EOS; indice++)
    if ((argv[1][indice] < '0') || (argv[1][indice] > '9')) {
         printf ("Uso: %s: NUMERO INTEIRO POSITIVO\n", argv[0]);
         exit (ARGUMENTO_INVALIDO);
   }

  printf("%llu\n", CalcularTermoSerieFibonacci((unsigned short) strtoul(argv[1],EOS,10)));
  
return OK;

}

/*$RCSFiles$*/

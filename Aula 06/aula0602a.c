/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2007/01/17 06:09:30 $
* $Log: aula0602a.c,v $
* Revision 1.1  2007/01/17 06:09:30  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula0601.h"

#define OK					0
#define NUMERO_ARGUMENTOS_INVALIDOS		1
#define COMPRIMENTO_ARGUMENTO_INVALIDO		2
#define ARGUMENTO_INVALIDO			3

#define NUMERO_ARGUMENTOS			11

int
main (int argc, char **argv){

  unsigned indice;
  byte pisPasep[TAMANHO_PIS_PASEP];
  char *validacao;
  
  if (argc != NUMERO_ARGUMENTOS){
    printf ("Uso <%s>: <10 digitos>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDOS);
  }
  
  for (indice = 1; indice < NUMERO_ARGUMENTOS; indice++){
    if ((argv[indice][0] < '0') || (argv[indice][0] > '9')){
      printf ("Argumento Invalido\n");
      exit (ARGUMENTO_INVALIDO);}

    if (strlen (argv [indice]) != 1){
      printf ("Comprimento Invalido\n");
      exit (COMPRIMENTO_ARGUMENTO_INVALIDO);}

    pisPasep [indice-1] = (byte) strtoul (argv [indice], &validacao, 10);
  }

  if (*validacao != EOS){
    printf("Caractere Invalido\n");
    exit (ARGUMENTO_INVALIDO);}
  
  printf("Digito Verificador= %u\n", (unsigned) GerarDigitoVerificadorPisPasep(pisPasep));

  return OK;    
}

/*$RCSFiles$*/

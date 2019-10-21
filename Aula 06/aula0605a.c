/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2007/01/17 06:09:30 $
* $Log: aula0605a.c,v $
* Revision 1.1  2007/01/17 06:09:30  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula0604.h"

#define OK					0
#define NUMERO_ARGUMENTOS_INVALIDOS		1
#define COMPRIMENTO_ARGUMENTO_INVALIDO		2
#define ARGUMENTO_INVALIDO			3

#define NUMERO_ARGUMENTOS			11

int
main (int argc, char **argv){

  unsigned indice;
  char pisPasepSemDigito[TAMANHO_PIS_PASEP-1];
  
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
  
    pisPasepSemDigito[indice-1] = argv[indice][0];}
  
  printf("Digito Verificador= %c\n", GerarDigitoVerificadorPisPasep(pisPasepSemDigito));

  return OK;    
}

/*$RCSFiles$*/

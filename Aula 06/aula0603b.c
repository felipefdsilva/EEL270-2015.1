/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2007/01/17 06:09:30 $
* $Log: aula0603b.c,v $
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
#define NUMERO_ARGUMENTOS_INVALIDO		1
#define COMPRIMENTO_ARGUMENTO_INVALIDO		2
#define ARGUMENTO_INVALIDO			3

#define NUMERO_ARGUMENTOS			2

int
main (int argc, char **argv){

  unsigned indice;
  byte pisPasep[TAMANHO_PIS_PASEP];
  
  if (argc != NUMERO_ARGUMENTOS){
    printf ("Uso <%s>: <PISPASEP>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);}
  
  if (strlen(argv[1]) != TAMANHO_PIS_PASEP){
    printf("PISPASEP possui 11 digitos\n");
    exit(COMPRIMENTO_ARGUMENTO_INVALIDO);}
  
  for (indice = 0; indice < TAMANHO_PIS_PASEP; indice++){
    if ((argv[1][indice] < '0' ) || (argv[1][indice] > '9')){ 
      printf("Argumento Invalido\n");
      exit(ARGUMENTO_INVALIDO);}

    pisPasep[indice] = (byte)(argv[1][indice] - '0');}

  if (ValidarPisPasep(pisPasep) == verdadeiro)
    printf("Pispasep valido\n");

  else
    printf("Pispasep Invaldo\n");

  return OK;    
}

/*$RCSFiles$*/

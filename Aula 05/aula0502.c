/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/03 02:48:03 $
* $Log: aula0502.c,v $
* Revision 1.1  2015/06/03 02:48:03  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "aula0501.h"

#define OK						0
#define NUMERO_ARGUMENTOS_INVALIDO			1
#define ARGUMENTO_INVALIDO				2
#define COMPRIMENTO_ARGUMENTO_INVALIDO			3

#define NUMERO_ARGUMENTOS				2
#define TAMANHO_MAXIMO					120

int
main (int argc, char **argv){

  byte entrada[TAMANHO_MAXIMO];
  byte saida[TAMANHO_MAXIMO*4/3];
  unsigned long indice;
  tipoErros erro;
  char *erros[] = {"Entrada Null", "Saida Null", "Erro de Codificacao", 
                   "Erro de Decodificacao", "Caractere Invalido"};

  if (argc != NUMERO_ARGUMENTOS){
    printf ("Uso: %s <string>\n", argv[0]);
    exit (NUMERO_ARGUMENTOS_INVALIDO);}

  if (strlen(argv[1]) > TAMANHO_MAXIMO){
    printf ("String com no maximo 120 caracteres\n");
    exit (COMPRIMENTO_ARGUMENTO_INVALIDO);}

  for (indice = 0; indice < strlen(argv[1]); indice++)
    entrada[indice] = argv[1][indice];

  if ((erro = CodificarBase64(entrada,strlen(argv[1]),saida)) != ok)
    printf("%s\n", erros[erro-1]);

  else
    printf("%s\n", saida);

  return OK;
}
/*$RCSFile$*/

/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0704.c,v $
* Revision 1.1  2015/06/14 19:44:45  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>

#include "aula0701.h"
#include "aula0702.h"

#define OK				0
#define NUMERO_ARGUMENTOS_INVALIDO	1
#define COMPRIMENTO_INVALIDO		2
#define COMPRIMENTO_MINIMO_INVALIDO	3
#define COMPRIMENTO_MAXIMO_INVALIDO	4

#define NUMERO_ARGUMENTOS		5

int
main (int argc, char **argv){

  unsigned minimo, maximo;
  char *verificacao, *stringGerada;
  tipoErros erro;
  
  if (argc != NUMERO_ARGUMENTOS){
    printf("Uso: %s <string > <caracteres validos> <comprimento minimo> <comprimento maximo>\n", argv[0]);
    exit(NUMERO_ARGUMENTOS_INVALIDO);}

  if (argv[3][0] == '-'){
    printf("Comprimento minimo deve ser positivo\n");
    exit (COMPRIMENTO_MINIMO_INVALIDO);}
  
  if (argv[4][0] == '-'){
    printf("Comprimento maximo deve ser positivo\n");
    exit (COMPRIMENTO_MAXIMO_INVALIDO);}

  minimo = (unsigned) strtoul (argv[3], &verificacao, 10);

  if (*verificacao != EOS){
    printf("Comprimento eh um numero inteiro\n");
    exit(COMPRIMENTO_INVALIDO);}

  maximo = (unsigned) strtoul (argv[4], &verificacao, 10);

  if (*verificacao != EOS){
    printf("Comprimento eh um numero inteiro\n");
    exit(COMPRIMENTO_INVALIDO);}

  erro = ValidarCampoTipoString (argv[1], argv[2], minimo, maximo);

  if (erro != ok)
    printf("%s\n", ObterMensagemErro(erro));

  else
    printf("Campo Valido!\n");

  return OK;
}
/*$RCSFiles$*/

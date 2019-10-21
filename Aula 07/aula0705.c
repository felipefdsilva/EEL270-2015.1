/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0705.c,v $
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

#define NUMERO_ARGUMENTOS		2

int
main (int argc, char **argv){

  unsigned comprimento;
  char *verificacao;
  char senha[COMPRIMENTO_MAXIMO_STRING];
  tipoErros erro;
  
  if (argc != NUMERO_ARGUMENTOS){
    printf("Uso: %s <comprimento da senha temporaria>\n", argv[0]);
    exit(NUMERO_ARGUMENTOS_INVALIDO);}

  if (argv[1][0] == '-'){
    printf("Comprimento deve ser positivo\n");
    exit (COMPRIMENTO_INVALIDO);}
  
  comprimento = (unsigned) strtoul (argv[1], &verificacao, 10);

  if (*verificacao != EOS){
    printf("Comprimento eh um numero inteiro\n");
    exit(COMPRIMENTO_INVALIDO);}

  erro = GerarSenhaTemporaria (comprimento, senha);

  if (erro != ok)
    printf("%s\n", ObterMensagemErro(erro));

  else
    printf("Senha: %s\n", senha);

  return OK;
}
/*$RCSFiles$*/

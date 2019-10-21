/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/04/11 18:13:13 $
* $Log: aula0202.c,v $
* Revision 1.1  2015/04/11 18:13:13  felipe.ferreira
* Initial revision
*
* Revision 1.2  2015/04/11 16:12:36  fsilva
* remocao do printf de debug da funcoes atof e atoi
*
* Revision 1.1  2015/04/11 16:08:31  fsilva
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>

#include "aula0201.h"

#define NUMERO_ARGUMENTOS			3			

#define OK					0
#define NUMERO_ARGUMENTOS_INVALIDO		1
#define ARGUMENTO_INVALIDO			2

#define EOS					'\0'

int
main (int argc ,char*argv [])
{
  int argumento, caractere;

  if (argc != NUMERO_ARGUMENTOS) {
    printf ("Uso: ./aula02** <base> <expoente>\n");
    exit (NUMERO_ARGUMENTOS_INVALIDO);
  } 

  for (argumento = 1; argumento < 3; argumento++)
    for (caractere = 0; argv[argumento][caractere] != EOS; caractere++)
      if (((argv[argumento][caractere] < '0') || 
           (argv[argumento][caractere] > '9'))&& 
           (argv[argumento][caractere] != '.'))
        if (argv[argumento][0] != '-'){
          printf("Uso <argumento1 = real> <argumento2 = inteiro>\n");
          exit (ARGUMENTO_INVALIDO);
        }
      
    
  printf ("Resultado = %f\n", CalcularPotencia (atof (argv[1]), atoi(argv[2])));
  return OK;  
}

/*$RCSFiles$*/

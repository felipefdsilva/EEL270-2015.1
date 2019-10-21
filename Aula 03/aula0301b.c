/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/04/16 18:13:19 $
* $Log: aula0301b.c,v $
* Revision 1.1  2015/04/16 18:13:19  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include "aula0301.h"

unsigned long long
CalcularTermoSerieFibonacci (unsigned short termo){
  
  unsigned long long auxiliarSomaFibonacci1, auxiliarSomaFibonacci2, somaFibonacci;

  if ((termo == 0)||(termo == 1))
    return termo;

  auxiliarSomaFibonacci1 = 0;
  auxiliarSomaFibonacci2 = 1;

  do {
    somaFibonacci = auxiliarSomaFibonacci1 + auxiliarSomaFibonacci2;
    auxiliarSomaFibonacci1 = auxiliarSomaFibonacci2;
    auxiliarSomaFibonacci2 = somaFibonacci;
    termo--;
     }
  while (termo > 1);

  return somaFibonacci;
}

/*$RCSFiles$*/

/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/04/11 18:13:13 $
* $Log: aula0201c.c,v $
* Revision 1.1  2015/04/11 18:13:13  felipe.ferreira
* Initial revision
*
* Revision 1.2  2015/04/11 18:08:01  fsilva
* *** empty log message ***
*
* Revision 1.1  2015/04/11 16:08:31  fsilva
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include "aula0201.h"

double
CalcularPotencia (float base,int expoente){
  
  float auxiliar;
  auxiliar = base;

  if (expoente == 0)
    return 1;

  if (base != 0){ 
    if (expoente < 0){
      for (;expoente !=-1; expoente++)
        base *= auxiliar;

      return 1/base;
    }

    for (;expoente !=1; expoente--)
      base *= auxiliar;
  }
  return base;
} 


/*$RCSFiles$*/

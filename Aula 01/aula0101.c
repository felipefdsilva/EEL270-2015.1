/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/03/30 15:18:02 $
* $Log: aula0101.c,v $
* Revision 1.2  2015/03/30 15:18:02  felipe.ferreira
* alteracao no printf do titulo
*
* Revision 1.1  2015/03/29 22:46:31  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>

#define OK			0


int
main () { 

  printf("=============\n");
  printf("TIPOS BASICOS\n");
  printf("=============\n\n");
  
  if (sizeof (void) == 1)
    printf("void:\t\t\t\t\t %u byte\n", sizeof(void));
  else
    printf("void:\t\t\t\t\t %u bytes\n", sizeof(void));

  if (sizeof (char) == 1)
    printf("char:\t\t\t\t\t %u byte\n", sizeof(char));
  else
    printf("char:\t\t\t\t\t %u bytes\n", sizeof(char));
  
  if (sizeof (int) == 1)
    printf("int:\t\t\t\t\t %u byte\n", sizeof(int));
  else
    printf("int:\t\t\t\t\t %u bytes\n", sizeof(int));

  if (sizeof (float) == 1)
    printf("float:\t\t\t\t\t %u byte\n", sizeof(float));
  else
    printf("float:\t\t\t\t\t %u bytes\n", sizeof(float));

  if (sizeof (double) == 1)
    printf("double:\t\t\t\t\t %u byte\n", sizeof(double));
  else
    printf("double:\t\t\t\t\t %u bytes\n", sizeof(double));


return OK;
}
/*$RCSFile$*/

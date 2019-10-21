/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/03/30 15:18:02 $
* $Log: aula0102.c,v $
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

  printf("==============================================================\n");
  printf("Modificadores de Sinal combinados com Modificadores de Largura\n");
  printf("==============================================================\n\n");

  if (sizeof (unsigned short) == 1)
    printf("unsigned short:\t\t\t\t\t %u byte\n", sizeof(unsigned short));
  else
    printf("unsigned short:\t\t\t\t\t %u bytes\n", sizeof(unsigned short));

  if (sizeof (unsigned long) == 1)
    printf("unsigned long:\t\t\t\t\t %u byte\n", sizeof(unsigned long));
  else
    printf("unsigned long:\t\t\t\t\t %u bytes\n", sizeof(unsigned long));
  
  if (sizeof (unsigned long long) == 1)
    printf("unsigned long long:\t\t\t\t\t %u byte\n", sizeof(unsigned long long));
  else
    printf("unsigned long long:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long));

  if (sizeof (signed short) == 1)
    printf("signed short:\t\t\t\t\t %u byte\n", sizeof(signed short));
  else
    printf("signed short:\t\t\t\t\t %u bytes\n", sizeof(signed short));

  if (sizeof (signed long) == 1)
    printf("signed long:\t\t\t\t\t %u byte\n", sizeof(signed long));
  else
    printf("signed long:\t\t\t\t\t %u bytes\n", sizeof(signed long));

  if (sizeof (signed long long) == 1)
    printf("signed long long:\t\t\t\t\t %u byte\n", sizeof(signed long long));
  else
    printf("signed long long:\t\t\t\t\t %u bytes\n", sizeof(signed long long));

return OK;
}
/*$RCSFile$*/

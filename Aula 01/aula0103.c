/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/03/30 15:18:02 $
* $Log: aula0103.c,v $
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
	printf("===================================================\n");
	printf("Tipos Basicos combinados com Modificadores de Sinal\n");
  printf("===================================================\n\n");
 
 /* if (sizeof (unsigned void) == 1)
  *  printf("unsigned void:\t\t\t\t\t %u byte\n", sizeof(unsigned void));
  *else
  *  printf("unsigned void:\t\t\t\t\t %u bytes\n", sizeof(unsigned void));
  */
  if (sizeof (unsigned char) == 1)
    printf("unsigned char:\t\t\t\t\t %u byte\n", sizeof(unsigned char));
  else
    printf("unsigned char:\t\t\t\t\t %u bytes\n", sizeof(unsigned char));
  
  if (sizeof (unsigned int) == 1)
    printf("unsigned int:\t\t\t\t\t %u byte\n", sizeof(unsigned int));
  else
    printf("unsigned int:\t\t\t\t\t %u bytes\n", sizeof(unsigned int));

 /* if (sizeof (unsigned float) == 1)
  *  printf("unsigned float:\t\t\t\t\t %u byte\n", sizeof(unsigned float));
  *else
  *  printf("unsigned float:\t\t\t\t\t %u bytes\n", sizeof(unsigned float));
  */
 /* if (sizeof (unsigned double) == 1)
  *  printf("unsigned double:\t\t\t\t\t %u byte\n", sizeof(unsigned double));
  *else
  *  printf("unsigned double:\t\t\t\t\t %u bytes\n", sizeof(unsigned double));
  */
 /*if (sizeof (signed void) == 1)
  *  printf("signed void:\t\t\t\t\t %u byte\n", sizeof(signed void));
  *else
  *  printf("signed void:\t\t\t\t\t %u bytes\n", sizeof(signed void));
  */
  if (sizeof (signed char) == 1)
    printf("signed char:\t\t\t\t\t %u byte\n", sizeof(signed char));
  else
    printf("signed char:\t\t\t\t\t %u bytes\n", sizeof(signed char));
  
  if (sizeof (signed int) == 1)
    printf("signed int:\t\t\t\t\t %u byte\n", sizeof(signed int));
  else
    printf("signed int:\t\t\t\t\t %u bytes\n\n", sizeof(signed int));

 /* if (sizeof (signed float) == 1)
  *  printf("signed float:\t\t\t\t\t %u byte\n", sizeof(signed float));
  *else
  *  printf("signed float:\t\t\t\t\t %u bytes\n", sizeof(signed float));
  */
 /* if (sizeof (signed double) == 1)
  *  printf("signed double:\t\t\t\t\t %u byte\n", sizeof(signed double));
  *else
  *  printf("signed double:\t\t\t\t\t %u bytes\n\n", sizeof(signed double));
  */
  printf("=====================================================\n");
  printf("Tipos Basicos combinados com Modificadores de Largura\n");
  printf("=====================================================\n\n");

 /* if (sizeof (short void) == 1)
  *  printf("short void:\t\t\t\t\t %u byte\n", sizeof(short void));
  *else
  *  printf("short void:\t\t\t\t\t %u bytes\n", sizeof(short void));
  */
 /* if (sizeof (short char) == 1)
  *  printf("short char:\t\t\t\t\t %u byte\n", sizeof(short char));
  *else
  *  printf("short char:\t\t\t\t\t %u bytes\n", sizeof(short char));
  */
  if (sizeof (short int) == 1)
    printf("short int:\t\t\t\t\t %u byte\n", sizeof(short int));
  else
    printf("short int:\t\t\t\t\t %u bytes\n", sizeof(short int));

 /* if (sizeof (short float) == 1)
  *  printf("short float:\t\t\t\t\t %u byte\n", sizeof(short float));
  *else
  *  printf("short float:\t\t\t\t\t %u bytes\n", sizeof(short float));
  */
 /* if (sizeof (short double) == 1)
  *  printf("short double:\t\t\t\t\t %u byte\n", sizeof(short double));
  *else
  *  printf("short double:\t\t\t\t\t %u bytes\n", sizeof(short double));
  */
 /*if (sizeof (long void) == 1)
  *  printf("long void:\t\t\t\t\t %u byte\n", sizeof(long void));
  *else
  *  printf("long void:\t\t\t\t\t %u bytes\n", sizeof(long void));
  */
 /* if (sizeof (long char) == 1)
  *  printf("long char:\t\t\t\t\t %u byte\n", sizeof(long char));
  *else
  *  printf("long char:\t\t\t\t\t %u bytes\n", sizeof(long char));
  */
  if (sizeof (long int) == 1)
    printf("long int:\t\t\t\t\t %u byte\n", sizeof(long int));
  else
    printf("long int:\t\t\t\t\t %u bytes\n", sizeof(long int));

 /* if (sizeof (long float) == 1)
  *  printf("long float:\t\t\t\t\t %u byte\n", sizeof(long float));
  *else
  *  printf("long float:\t\t\t\t\t %u bytes\n", sizeof(long float));
  */
  if (sizeof (long double) == 1)
    printf("long double:\t\t\t\t\t %u byte\n", sizeof(long double));
  else
    printf("long double:\t\t\t\t\t %u bytes\n", sizeof(long double));

 /* if (sizeof (long long void) == 1)
  *  printf("long long void:\t\t\t\t\t %u byte\n", sizeof(long long void));
  *else
  *  printf("long long void:\t\t\t\t\t %u bytes\n", sizeof(long long void));
  */
 /*if (sizeof (long long char) == 1)
  *  printf("long long char:\t\t\t\t\t %u byte\n", sizeof(long long char));
  *else
  *  printf("long long char:\t\t\t\t\t %u bytes\n", sizeof(long long char));
  */
  if (sizeof (long long int) == 1)
    printf("long long int:\t\t\t\t\t %u byte\n", sizeof(long long int));
  else
    printf("long long int:\t\t\t\t\t %u bytes\n\n", sizeof(long long int));

 /* if (sizeof (long long float) == 1)
  *  printf("long long float:\t\t\t\t\t %u byte\n", sizeof(long long float));
  *else
  *  printf("long long float:\t\t\t\t\t %u bytes\n", sizeof(long long float));
  */
 /* if (sizeof (long long double) == 1)
  *  printf("long long double:\t\t\t\t\t %u byte\n", sizeof(long long double));
  *else
  *  printf("long long double:\t\t\t\t\t %u bytes\n\n", sizeof(long long double));
  */
  printf("=============================================================\n");
  printf("Tipos Basicos combinados com Modificadores de Sinal e Largura\n");
  printf("=============================================================\n\n");

/*if (sizeof (unsigned short void) == 1)
 *   printf("unsigned short void:\t\t\t\t\t %u byte\n", sizeof(unsigned short void));
 * else
 *   printf("unsigned short void:\t\t\t\t\t %u bytes\n", sizeof(unsigned short void));
 *
 * if (sizeof (unsigned short char) == 1)
 *   printf("unsigned short char:\t\t\t\t\t %u byte\n", sizeof(unsigned short char));
 * else
 *   printf("unsigned short char:\t\t\t\t\t %u bytes\n", sizeof(unsigned short char));
 */ 
  if (sizeof (unsigned short int) == 1)
    printf("unsigned short int:\t\t\t\t\t %u byte\n", sizeof(unsigned short int));
  else
    printf("unsigned short int:\t\t\t\t\t %u bytes\n", sizeof(unsigned short int));

 /* if (sizeof (unsigned short float) == 1)
  *  printf("unsigned short float:\t\t\t\t\t %u byte\n", sizeof(unsigned short float));
  *else
  *  printf("unsigned short float:\t\t\t\t\t %u bytes\n", sizeof(unsigned short float));
  *
  *if (sizeof (unsigned short double) == 1)
  *  printf("unsigned short double:\t\t\t\t\t %u byte\n", sizeof(unsigned short double));
  *else
  *  printf("unsigned short double:\t\t\t\t\t %u bytes\n", sizeof(unsigned short double));
  */
 /* if (sizeof (unsigned long void) == 1)
  *  printf("unsigned long void:\t\t\t\t\t %u byte\n", sizeof(unsigned long void));
  *else
  *  printf("unsigned long void:\t\t\t\t\t %u bytes\n", sizeof(unsigned long void));
  *
  *if (sizeof (unsigned long char) == 1)
  *  printf("unsigned long char:\t\t\t\t\t %u byte\n", sizeof(unsigned long char));
  *else
  *  printf("unsigned long char:\t\t\t\t\t %u bytes\n", sizeof(unsigned long char));
  */
  if (sizeof (unsigned long int) == 1)
    printf("unsigned long int:\t\t\t\t\t %u byte\n", sizeof(unsigned long int));
  else
    printf("unsigned long int:\t\t\t\t\t %u bytes\n", sizeof(unsigned long int));

 /*if (sizeof (unsigned long float) == 1)
  *  printf("unsigned long float:\t\t\t\t\t %u byte\n", sizeof(unsigned long float));
  *else
  *  printf("unsigned long float:\t\t\t\t\t %u bytes\n", sizeof(unsigned long float));
  *
  *if (sizeof (unsigned long double) == 1)
  *  printf("unsigned long double:\t\t\t\t\t %u byte\n", sizeof(unsigned long double));
  *else
  *  printf("unsigned long double:\t\t\t\t\t %u bytes\n", sizeof(unsigned long double));
  */
 /* if (sizeof (unsigned long long void) == 1)
  *  printf("unsigned long long void:\t\t\t\t\t %u byte\n", sizeof(unsigned long long void));
  *else
  *  printf("unsigned long long void:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long void));
  *
  *if (sizeof (unsigned long long char) == 1)
  *  printf("unsigned long long char:\t\t\t\t\t %u byte\n", sizeof(unsigned long long char));
  *else
  *  printf("unsigned long long char:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long char));
  */
  if (sizeof (unsigned long long int) == 1)
    printf("unsigned long long int:\t\t\t\t\t %u byte\n", sizeof(unsigned long long int));
  else
    printf("unsigned long long int:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long int));

 /* if (sizeof (unsigned long long float) == 1)
  *  printf("unsigned long long float:\t\t\t\t\t %u byte\n", sizeof(unsigned long long float));
  *else
  *  printf("unsigned long long float:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long float));
  *
  *if (sizeof (unsigned long long double) == 1)
  *  printf("unsigned long long double:\t\t\t\t\t %u byte\n", sizeof(unsigned long long double));
  *else
  *  printf("unsigned long long double:\t\t\t\t\t %u bytes\n", sizeof(unsigned long long double));
  */
 /* if (sizeof (signed short void) == 1)
  *  printf("signed short void:\t\t\t\t\t %u byte\n", sizeof(signed short void));
  *else
  *  printf("signed short void:\t\t\t\t\t %u bytes\n", sizeof(signed short void));
  *
  *if (sizeof (signed short char) == 1)
  *  printf("signed short char:\t\t\t\t\t %u byte\n", sizeof(signed short char));
  *else
  *  printf("signed short char:\t\t\t\t\t %u bytes\n", sizeof(signed short char));
  */
  if (sizeof (signed short int) == 1)
    printf("signed short int:\t\t\t\t\t %u byte\n", sizeof(signed short int));
  else
    printf("signed short int:\t\t\t\t\t %u bytes\n", sizeof(signed short int));

 /*if (sizeof (signed short float) == 1)
  *  printf("signed short float:\t\t\t\t\t %u byte\n", sizeof(signed short float));
  *else
  *  printf("signed short float:\t\t\t\t\t %u bytes\n", sizeof(signed short float));
  *
  *if (sizeof (signed short double) == 1)
  *  printf("signed short double:\t\t\t\t\t %u byte\n", sizeof(signed short double));
  *else
  *  printf("signed short double:\t\t\t\t\t %u bytes\n", sizeof(signed short double));
  */
 /*if (sizeof (signed long void) == 1)
  *  printf("signed long void:\t\t\t\t\t %u byte\n", sizeof(signed long void));
  *else
  *  printf("signed long void:\t\t\t\t\t %u bytes\n", sizeof(signed long void));
  *
  *if (sizeof (signed long char) == 1)
  *  printf("signed long char:\t\t\t\t\t %u byte\n", sizeof(signed long char));
  *else
  *  printf("signed long char:\t\t\t\t\t %u bytes\n", sizeof(signed long char));
  */
  if (sizeof (signed long int) == 1)
    printf("signed long int:\t\t\t\t\t %u byte\n", sizeof(signed long int));
  else
    printf("signed long int:\t\t\t\t\t %u bytes\n", sizeof(signed long int));

 /* if (sizeof (signed long float) == 1)
  *  printf("signed long float:\t\t\t\t\t %u byte\n", sizeof(signed long float));
  *else
  *  printf("signed long float:\t\t\t\t\t %u bytes\n", sizeof(signed long float));
  *
  *if (sizeof (signed long double) == 1)
  *  printf("signed long double:\t\t\t\t\t %u byte\n", sizeof(signed long double));
  *else
  *  printf("signed long double:\t\t\t\t\t %u bytes\n", sizeof(signed long double));
  */
 /*if (sizeof (signed long long void) == 1)
  *  printf("signed long long void:\t\t\t\t\t %u byte\n", sizeof(signed long long void));
  *else
  *  printf("signed long long void:\t\t\t\t\t %u bytes\n", sizeof(signed long long void));
  *
  *if (sizeof (signed long long char) == 1)
  *  printf("signed long long char:\t\t\t\t\t %u byte\n", sizeof(signed long long char));
  *else
  *  printf("signed long long char:\t\t\t\t\t %u bytes\n", sizeof(signed long long char));
  */
  if (sizeof (signed long long int) == 1)
    printf("signed long long int:\t\t\t\t\t %u byte\n", sizeof(signed long long int));
  else
    printf("signed long long int:\t\t\t\t\t %u bytes\n\n", sizeof(signed long long int));

 /* if (sizeof (signed long long float) == 1)
  *  printf("signed long long float:\t\t\t\t\t %u byte\n", sizeof(signed long long float));
  *else
  *  printf("signed long long float:\t\t\t\t\t %u bytes\n", sizeof(signed long long float));
  *
  *if (sizeof (signed long long double) == 1)
  *  printf("signed long long double:\t\t\t\t\t %u byte\n", sizeof(signed long long double));
  *else
  *  printf("signed long long double:\t\t\t\t\t %u bytes\n", sizeof(signed long long double));
  */
  printf("=====================\n");
  printf("Combinacoes Invalidas\n");
  printf("=====================\n\n");

  printf("unsigned void\nunsigned float\nunsigned double\nsigned void\nsigned float\nsigned double\nshort void\nshort char\nshort float\nshort double\nlong void\nlong char\nlong float\nlong long void\nlong long char\nlong long float\nlong long double\nunsigned short void\nunsigned short char\nunsigned short float\nunsigned short double\nunsigned long void\nunsigned long char\nunsigned long float\nunsigned long double\nunsigned long long void\nunsigned long long char\nunsigned long long float\nunsigned long long double\nsigned short void\nsigned short char\nsigned short float\nsigned short double\nsigned long void\nsigned long char\nsigned long float\nsigned long double\nsigned long long void\nsigned long long char\nsigned long long float\nsigned long long double\n");
          
  return OK;
}
/*$RCSFile$*/

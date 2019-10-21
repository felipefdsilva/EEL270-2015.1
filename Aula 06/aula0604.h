/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2007/01/17 06:09:30 $
* $Log: aula0604.h,v $
* Revision 1.1  2007/01/17 06:09:30  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#ifndef _AULA_0601_H_
#define _AULA_0601_H_ "@(#)aula0601.h"

#define EOS				'\0'
#define TAMANHO_PIS_PASEP		11

typedef enum {falso, verdadeiro} boolean;
typedef unsigned char byte;

char 
GerarDigitoVerificadorPisPasep (char [TAMANHO_PIS_PASEP]);

boolean 
ValidarPisPasep (char [TAMANHO_PIS_PASEP]);

#endif

/*$RCSFiles$*/

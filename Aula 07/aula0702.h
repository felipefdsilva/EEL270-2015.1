/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0702.h,v $
* Revision 1.1  2015/06/14 19:44:45  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include "aula0701.h"

#ifndef _AULA_0702_H_
#define _AULA_0702_H_ "@(#)aula0702.h$Revision: 1.1 $"

tipoErros
GerarStringAleatoria (char *caracteresValidos, unsigned comprimento, char *stringGerada);

tipoErros
ValidarCampoTipoString (char *string, char *caracteresValidos, unsigned minimo, unsigned maximo);

tipoErros
GerarSenhaTemporaria (unsigned comprimento, char *senha);

#endif
/*$RCSFile$*/

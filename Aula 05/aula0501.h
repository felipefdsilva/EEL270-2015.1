/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/03 02:48:03 $
* $Log: aula0501.h,v $
* Revision 1.1  2015/06/03 02:48:03  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/
#ifndef _AULA_0501_
#define _AULA_0501_   "@(#)aula0501.h $Revision: 1.1 $"

#define CONJUNTO_BASE_64		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
#define EOS				'\0'
#define PAD				'='

typedef unsigned char byte;

typedef enum {ok, entradaNull, saidaNull, 
		erroConversao, erroDecodificacao, caractereInvalido} tipoErros;

tipoErros
CodificarBase64 (byte*, unsigned long, byte*);

tipoErros
DecodificarBase64 (byte*, unsigned long, byte*);

#endif
/*$RCSFiles$*/

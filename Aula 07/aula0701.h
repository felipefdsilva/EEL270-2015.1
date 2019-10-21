/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0701.h,v $
* Revision 1.1  2015/06/14 19:44:45  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#ifndef _AULA_0701_H
#define _AULA_0701_H "@(#)aula0701.h$Revision: 1.1 $"

#define EOS				'\0'
#define COMPRIMENTO_MAXIMO_STRING	1024
#define CARACTERES_SENHA		"ABCDEFGHIJKLMNOPQRSTUVXYWZabcdefghijklmnopqrstuvxywz0123456789!?@#$%&_|*/-+=()[]<>,.;:\\"
#define COMPRIMENTO_MINIMO_SENHA	8
#define NUMERO_LETRAS			26
#define NUMERO_DIGITOS			10
#define NUMERO_CARACTERES_ESPECIAIS	25

typedef enum {ok, comprimentoInvalido, erroAoGerarString, 
              comprimentoMenorQueMinimo, comprimentoMaiorQueMaximo, 
              caractereInvalido, minimoMaiorQueMaximo, 
              comprimentoMaximoInvalido, comprimentoMinimoInvalido, 
              senhaNull, comprimentoMinimoSenhaInvalido} tipoErros;

char *
ObterMensagemErro (tipoErros);

#endif


/*$RCSFiles$*/

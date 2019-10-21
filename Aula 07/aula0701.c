/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0701.c,v $
* Revision 1.1  2015/06/14 19:44:45  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include "aula0701.h"

char *
ObterMensagemErro (tipoErros numeroErro){

  char *mensagensErro [] = {"Ok",
			    "Comprimento invalido" , 
			    "Erro ao gerar string",
			    "Comprimento da string eh menor que comprimento minimo",
                            "Comprimento da string eh maior que comprimento maximo",
                            "A String possui um ou mais caracter(es) invalido(s)",
                            "O Comprimento minimo eh maior que o comprimento maximo",
                            "Comprimento maximo deve ser menor que 1024",
                            "Comprimento minimo deve ser maior que 0",
                            "Senha Null",
                            "Senha deve ter no minimo 8 caracteres"};

  return mensagensErro[numeroErro];
}

/*$RCSFiles$*/

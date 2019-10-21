/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2007/01/17 06:09:30 $
* $Log: aula0601.c,v $
* Revision 1.1  2007/01/17 06:09:30  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include "aula0601.h"

byte GerarDigitoVerificadorPisPasep (byte pisPasepSemDigito[TAMANHO_PIS_PASEP-1]){
  
  unsigned pisPasepInt[TAMANHO_PIS_PASEP], peso, indice;
  unsigned long digitoVerificador;
 
  digitoVerificador = 0;

  for (indice = 0, peso = 3; peso > 1; peso--, indice++){
    pisPasepInt[indice] = pisPasepSemDigito[indice];
    digitoVerificador += pisPasepInt[indice]*peso;}

  for (peso = 9; peso > 1; peso--, indice++){
    pisPasepInt[indice] = pisPasepSemDigito[indice];
    digitoVerificador += pisPasepInt[indice]*peso;}
  
  digitoVerificador%= 11;

  if (digitoVerificador < 2)
    return 0;

  return (11 - digitoVerificador);
}

boolean ValidarPisPasep (byte pisPasep[TAMANHO_PIS_PASEP]){

  if (pisPasep[TAMANHO_PIS_PASEP-1] != GerarDigitoVerificadorPisPasep(pisPasep))
    return falso;

  else
    return verdadeiro;
}

/*$RCSFiles$*/

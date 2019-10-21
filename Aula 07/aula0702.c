/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/06/14 19:44:45 $
* $Log: aula0702.c,v $
* Revision 1.1  2015/06/14 19:44:45  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "aula0701.h"
#include "aula0702.h"

tipoErros
GerarStringAleatoria 
(char *caracteresValidos, unsigned comprimento, char *stringGerada){

  unsigned indiceString;
  srand((unsigned)time(NULL));

  if (comprimento == 0)
    return comprimentoInvalido;

  if (comprimento > COMPRIMENTO_MAXIMO_STRING)
    return comprimentoInvalido;

  for (indiceString = 0; indiceString < comprimento; indiceString++)
    stringGerada[indiceString] = caracteresValidos[rand()%strlen(caracteresValidos)];

  stringGerada[indiceString] = EOS;
   
  if (strlen(stringGerada) != comprimento)
    return erroAoGerarString;

  return ok;
}

tipoErros
ValidarCampoTipoString (char *string, char *caracteresValidos, unsigned minimo, unsigned maximo){
 
  unsigned indiceCaracteresValidos, indiceString;
 
  if (maximo > 1024)
    return comprimentoMaximoInvalido;

  if (minimo < 1)
    return comprimentoMinimoInvalido;

  if (minimo > maximo)
    return minimoMaiorQueMaximo;

  if (strlen (string) < minimo)
    return comprimentoMenorQueMinimo;

  if (strlen (string) > maximo)
    return comprimentoMaiorQueMaximo;

  for(indiceString = 0; 
      string[indiceString] != EOS; 
      indiceString++){
  
    /*printf("indiceString = %u\n", indiceString);*/

    for(indiceCaracteresValidos = 0; 
      caracteresValidos[indiceCaracteresValidos] != string[indiceString]; 
      indiceCaracteresValidos++){

      /*printf("inidiceCaracteresValidos = %u\n", indiceCaracteresValidos);*/

      if (caracteresValidos[indiceCaracteresValidos] == EOS)
        return caractereInvalido;}
    }
  return ok;
}

tipoErros
GerarSenhaTemporaria (unsigned comprimento, char *senha){
 
  unsigned posicaoSenha1, posicaoSenha2, posicaoSenha3, posicaoSenha4;

  if (!(senha))
    return senhaNull;

  if (comprimento < 8)
    return comprimentoMinimoSenhaInvalido;

  srand((unsigned)time(NULL));

  GerarStringAleatoria (CARACTERES_SENHA, comprimento, senha);
 
  posicaoSenha1 = rand()%comprimento;
  posicaoSenha2 = rand()%comprimento;
  posicaoSenha3 = rand()%comprimento;
  posicaoSenha4 = rand()%comprimento;

  while (posicaoSenha1 == posicaoSenha2)
    posicaoSenha2 = rand()%comprimento;
 
  while ((posicaoSenha1 == posicaoSenha3) || (posicaoSenha2 == posicaoSenha3))
    posicaoSenha3 = rand()%comprimento;

  while ((posicaoSenha1 == posicaoSenha4) || 
         (posicaoSenha2 == posicaoSenha4) || 
         (posicaoSenha3 == posicaoSenha4))
    posicaoSenha4 = rand()%comprimento;

  senha[posicaoSenha1] = CARACTERES_SENHA[rand()%NUMERO_LETRAS];
  senha[posicaoSenha2] = CARACTERES_SENHA[NUMERO_LETRAS+rand()%NUMERO_LETRAS];
  senha[posicaoSenha3] = CARACTERES_SENHA[2*NUMERO_LETRAS+rand()%NUMERO_DIGITOS];
  senha[posicaoSenha4] = CARACTERES_SENHA[2*NUMERO_LETRAS+NUMERO_DIGITOS+rand()%NUMERO_CARACTERES_ESPECIAIS];

  return ValidarCampoTipoString (senha, CARACTERES_SENHA, COMPRIMENTO_MINIMO_SENHA, COMPRIMENTO_MAXIMO_STRING);
}

/*$RCSFile$*/

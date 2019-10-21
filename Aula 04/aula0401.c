/*Unversidade Federal do Rio de Janeiro
* Escola Politecnica
* Departamento de Eletronica e de Computacao
* EEL270 - Computacao II - Turma 2015/1
* Prof. Marcelo Luiz Drumond Lanza
* Descrição:
*
* $Author: felipe.ferreira $
* $Date: 2015/05/07 00:40:07 $
* $Log: aula0401.c,v $
* Revision 1.1  2015/05/07 00:40:07  felipe.ferreira
* Initial revision
*
* Autor: Felipe Ferreira da Silva
*/

#include		"aula0401.h"

void
CalcularProdutoMatrizes (int matrizA[LINHASA][COLUNASA], 
 			 int matrizB[LINHASB][COLUNASB], 
 			 int matrizResultado[LINHASA][COLUNASB]) 
{
  unsigned linha, coluna, indice;
  
  for(linha = 0; linha < LINHASA; linha++)
    for(coluna = 0; coluna < COLUNASB; coluna++)
      matrizResultado[linha][coluna] = 0;

  for(linha = 0; linha < LINHASA; linha++)
    for(coluna = 0; coluna < COLUNASB; coluna++)
      for (indice = 0; indice < COLUNASA; indice++)
        matrizResultado[linha][coluna] += matrizA[linha][indice] * matrizB[indice][coluna];

}
/*$RCSFiles$*/

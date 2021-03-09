/* 
 * File:   arvore.c
 * Author: aluno
 *
 * Created on 20 de Abril de 2017, 17:09
 */

#include <stdio.h>
#include <stdlib.h>

#include "arvore.h"

tno *criaArvore(){
    tno *sentinela = malloc(sizeof(tno));
    sentinela->dado = -1000;
    sentinela->pai = NULL;
    sentinela ->dir = NULL;
    sentinela->esq = NULL;
    
    return sentinela;
    
}

tno *alocaNo(int dado){
    tno *no;
    no =malloc(sizeof(tno));
    if(no)
    {
        no->dado = dado;
        no->dir  = NULL;
        no->esq = NULL;
        no->pai = NULL;
        
    }
    return no;
}
insereNo(tno*r, int dado){
    tno *andador, *novo, *auxPai;
    andador = r->dir;
    if(!andador)
    {
        novo = alocaNo(dado);
        r->dir = novo;
        novo->pai = r;
    }
    else
    {
        while(andador)
        {
            auxPai=andador;
            if(dado<andador->dado)
            {
                andador=andador->esq;
            }else
                andador=andador ->dir;
        }
    }
   
}


#ifndef ARVORE_H
#define	ARVORE_H

typedef struct no
{
    int dado;
    struct no *pai;
    struct no *dir;
    struct no *esq;
}tno;

tno *criaArvore();
tno *alocaNo(int dado);
void insereNoInterativo(tno *r, int dado);
void *removeNoInterativo(tno *r, int dado);
tno *percorreNo();
#endif	/* ARVORE_H */


#include "libArvore.h"

/**
 * \author Jaicimara Weber
 * \date 01/06/2015
 * \brief Inicializa árvore
 * \return NULL
 */
Arv* inicia(void)
{
    return NULL;
}

/**
 * \author Jaicimara Weber
 * \date 01/06/2015
 * \brief Cria árvore
 * \return Arv*
 */
Arv* criaArvore(char c, Arv* al, Arv* ar)
{
    Arv* newArv = (Arv*) malloc(sizeof(Arv));
    if(newArv == NULL) exit(EXIT_FAILURE); /** Retorna msg caso de falha **/
    newArv->info = c;
    newArv->right = ar;
    newArv->left = al;
    return newArv;
}

/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   verifica se a árvore é vazia
 * \return  0 - fals0 e 1 verdadeiro
 */
int vazio (Arv* a)
{
    return (a==NULL);
}

/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   Imprime arvore binaria
 * \param   Arv* a
 */
void imprime (Arv* a)
{
    if(!vazio(a)){
        printf("%c\t", a->info); /**< exibe a raiz*/
        imprime(a->left);
        imprime(a->right);
    }
}

/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   Imprime arvore binaria em cascata
 * \param   Arv* a
 */
void imprimeCascata(Arv* a)
{
     if(!vazio(a)){
        printf("<%c", a->info); /**< exibe a raiz*/
        if(vazio(a->left))
            printf("<>");
        if(vazio(a->right))
            printf("<>");
        imprimeCascata(a->left);
        imprimeCascata(a->right);
        printf(">");
    }
}
/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   Imprime arvore binaria em ordem de esquerda, raiz e direita
 * \param   Arv* a
 */
void imprimeERD(Arv* a)
{
    if(!vazio(a)){
        printf("<");
        if(vazio(a->left))
            printf("<>");
        imprimeERD(a->left);
        printf("<%c>", a->info);
        if(vazio(a->right))
            printf("<>");
        imprimeERD(a->right);
        printf(">");
    }
}

/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   Imprime arvore binaria em ordem de esquerda, direita e raiz
 * \param   Arv* a
 */
void imprimeEDR(Arv* a)
{
    if(!vazio(a)){
        printf("<");
        if(vazio(a->left))
            printf("<>");
        imprimeEDR(a->left);

        if(vazio(a->right))
            printf("<>");
        imprimeEDR(a->right);
        printf("%c>", a->info);
    }
}

/**
 * \author  Jaicimara Weber
 * \date    01/06/2015
 * \brief   Libera o espaço alocado na memória
 * \param   Arv* a
 */
Arv* liberaArvore(Arv* a)
{
    if(!vazio(a)){
        liberaArvore(a->left);
        liberaArvore(a->right);
        free(a);
    }
    return NULL;
}

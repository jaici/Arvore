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
 * \brief Inicializa árvore
 * \return NULL
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
 * \author Jaicimara Weber
 * \date 01/06/2015
 * \brief Inicializa árvore
 * \return NULL
 */
void imprime (Arv* a)
{
    if(!vazio(a)){
        printf("%c\t", a->info); /**< exibe a raiz*/
        imprime(a->left);
        imprime(a->right);
    }
}

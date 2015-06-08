
#include "libArvore.h"

int main()
{
    Arv* teste = criaArvore('a',
                       criaArvore('b',
                                  inicia(),
                                  criaArvore('d',
                                             criaArvore('g',inicia(),inicia())
                                             ,inicia())
                                  ),
                       criaArvore('c',
                                  criaArvore('e',
                                             criaArvore('h',
                                                        criaArvore('i',inicia(),inicia())
                                                        ,inicia())
                                             ,inicia()),
                                  criaArvore('f',inicia(),inicia())
                                  )
                       );


    imprimeERD(teste);
    printf("\n\nAltura da arvore %d",alturaArvore(teste));

    printf(" \n\nRetorno Busca %d", busca(teste,'h'));
    teste = liberaArvore(teste);
    return 0;
}

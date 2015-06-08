
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

    printf("\nIMPRESSAO\n");
    imprime(teste);
    printf("\nIMPRESSAO RED\n");
    imprimeRED(teste);
    printf("\nIMPRESSAO EDR\n");
    imprimeEDR(teste);
    printf("\nIMPRESSAO ERD\n");
    imprimeERD(teste);

    printf("\n\nAltura da arvore %d",alturaArvore(teste));

    printf(" \n\nRetorno Busca %d", busca(teste,'h'));
    teste = liberaArvore(teste);
    return 0;
}

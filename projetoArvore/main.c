
#include "libArvore.h"

int main()
{
    Arv* teste = criaArvore('a',
                       criaArvore('b',
                                  inicia(),
                                  criaArvore('d',inicia(),inicia())
                                  ),
                       criaArvore('c',
                                  criaArvore('e',inicia(),inicia()),
                                  criaArvore('f',inicia(),inicia())
                                  )
                       );


    imprime(teste);
    return 0;
}

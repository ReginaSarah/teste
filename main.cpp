#include <iostream>
#include "hash.h"
#include "list.h"
#include "Divisao.h"
#include "Multiplicacao.h"
#include "No.h"
#include <time.h>

using namespace std;



void CriandoChavesAleatorios(int Vetor[], int n){
    srand(time(NULL));
    for(int i = 0; i< n; i++){
        Vetor[i] = rand() % 100;
    }
}


int main(int arc, char* argv[])
{
    int tam = 5;
	Divisao *tabelaDiv;
	tabelaDiv->create(tam);

	Multiplicacao *tabelaMult;
	tabelaMult->create(tam);

    No *auxInsere;

    for(int i = 0; i < tam; i++)
    {
        int Chaves[tam];
        int Data[tam];
        CriandoChavesAleatorios(Chaves, tam);
        CriandoChavesAleatorios(Data, tam);
        *auxInsere = tabelaDiv->insere(Chaves[i], Data[i]);
        tabelaDiv->imprime();
    }
}

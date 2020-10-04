#include <iostream>
#include "hash.h"
#include <math.h>
#include <list>
#include "list.h"
#include "Divisao.h"
#include "Multiplicacao.h"


using namespace std;

#define DIVISAO 0
#define MULTIPLICACAO 1

int numColisoes = 0;

Hash::Hash(int tamanho)
{
    //ctor
    this->m = tamanho;

}

Hash::~Hash()
{
    //dtor
}

int Hash::getTamanho()
{
    return this->m;
}

void Hash::imprime()
{
    cout << "TABELA HASH" << endl;
    for(int i = 0; i < this->m; i++)
    {
        cout << tabela[i].get(i).getInfo() << endl;
    }
}

void Hash::create(int m)
{
    lista tabela[m];
}


No Hash::insere(int chave, int data)
{
    int indice = hashFunction(chave, this->m);
    if(tabela[indice].busca(data))
    {
        numColisoes++;
        return *tabela[indice].get(indice).getProx();
    }

    tabela[indice].set(indice, data);
    return *tabela[indice].get(indice).getProx();
}

No Hash::lookup(int chave, int data)
{
    int indice = hashFunction(chave, m);

    for (int i = 0; i < m; i++)
    {
        if (tabela[i].get(indice).getInfo() == data)
            return *tabela[i].get(indice).getProx();
    }
    return *tabela[indice].get(indice).getProx();

}

void Hash::destroy()
{
    for(int i = 0; i < m; i++)
    {
        tabela[i].~lista();
    }
}



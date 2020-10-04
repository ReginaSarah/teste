#ifndef HASH_H
#define HASH_H
#include "No.h"
#include <list>
#include "list.h"

using namespace std;

class Hash
{
    public:
        Hash(int tamanho);
        virtual ~Hash();
        virtual int hashFunction(int chave, int m) = 0;
        int getTamanho();
        void imprime();
        void create(int m);

        //int hashFunction(int tipoHash, int chave, int m);
        No insere(int chave, int data);
        No lookup(int chave, int data);
        void destroy();
        //int hashDivisao(int chave, int m);
        //int hashMultiplicacao(int chave, int m);

    private:
        lista tabela[];
        int m;
};

#endif // HASH_H

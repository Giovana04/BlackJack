#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct cartas
{
    string mostrar;
    int valor;
    string naipes;
    cartas *link ;
};

cartas *inicializaLista(cartas *L) {
	return NULL;
};

cartas *PUSH(cartas *L, int x) {
	cartas *N;

	N = new cartas;
	N->valor = x;

    N->link = L;
	
	L = N;
	return (L);
}


void imprimePilha(cartas* baralho) {
	cartas *P;
	P = baralho;	
	
	printf("\n Imprime PILHA: \n");	
	while(P != NULL) {
		cout << P->valor << " ";	
		P = P->link;
	}	
}
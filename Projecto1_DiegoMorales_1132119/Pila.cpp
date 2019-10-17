#include "Pila.h"
Pila::Pila(){

}
Pila::~Pila() {

}
void Pila::Push(Nodo* Pila, int n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->digito = n;
	if (Head == nullptr) {
		Head = nuevo_nodo;
	}
	else {
		Nodo* Aux = new Nodo();
		Aux = Head;
		Head = nuevo_nodo;			
		Head->Siguiente = Aux;
	}
}
int Pila::Pop(Nodo* Pila, int n) {
	Nodo* aux = Pila;
	int num = n;
	n = aux->digito;
	Pila = aux->Siguiente;
	delete aux;

	return n;
}	
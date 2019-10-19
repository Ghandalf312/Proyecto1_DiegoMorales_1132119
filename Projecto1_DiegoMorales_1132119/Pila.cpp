#include "Pila.h"
Pila::Pila(){

}
Pila::~Pila() {

}
/*void Pila::Push(Nodo* Pila, int n) {
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
}*/

void Pila::Agregar(int n) {
	Nodo* aux = new Nodo;
	aux->digito = n;
	if (Head == nullptr)
	{
		Head = aux;
	}
	else {
		aux->Siguiente = Head;
		Head->Anterior = aux;
		Head = aux;
	}
}
int Pila::Quitar() {
	if (Head != nullptr)
	{
		int x = Head->digito;
		Nodo* aux = Head;
		Head = aux->Siguiente;
		delete aux;
		return x;
	}
	
}
void Pila::LimpiarPila() {
	while (Head != nullptr)
	{
		int x = Quitar();
	}
}
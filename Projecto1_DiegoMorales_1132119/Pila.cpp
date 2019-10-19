#include "Pila.h"
Pila::Pila(){

}
Pila::~Pila() {

}
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
bool Pila::BuscarValorPila(int n) {
	Nodo* aux = new Nodo;
	aux = Head;
	while (aux != nullptr) {
		if (aux->digito == n)
		{
			return true;
		}
		aux = aux->Siguiente;
	}
}
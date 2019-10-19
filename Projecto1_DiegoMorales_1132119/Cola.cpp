#include "Cola.h"
Cola::Cola() {

}
Cola::~Cola() {

}
void Cola::Push(int n) {
	Nodo* aux = new Nodo();
	aux->digito = n;
	if (Fin == nullptr)
	{
		Frente = aux;
		Fin = aux;
	}
	else {
		aux->Anterior = Fin;
		(aux->Anterior)->Siguiente = aux;
		Fin = aux;
	}

}
int Cola::Pop() {
	if (Frente != nullptr)
	{
	int x = Frente->digito;
	Nodo* aux = Frente;
	Frente = aux->Siguiente;
	delete aux;
	if (Frente == nullptr) { Fin = nullptr; };
	return x;

	}

}
void Cola::LimpiarCola() {
	while (Frente != nullptr)
	{
		int x = Pop();
	}
}
bool Cola::BuscarValorCola(int n) {
	Nodo* aux = new Nodo;
	aux = Frente;
	while (aux != nullptr) {
		if (aux->digito == n)
		{
			return true;
		}
		aux = aux->Siguiente;
	}
}
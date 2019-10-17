#include "Cola.h"
Cola::Cola() {

}
Cola::~Cola() {

}
void Cola::InsertarCola(Nodo* Frente, Nodo* Fin, int n) {
	Nodo* nuevo_nodo = new Nodo();
	nuevo_nodo->digito = n;
	nuevo_nodo->Siguiente = nullptr;
	if (IsEmpty(Frente))
	{
		Frente = nuevo_nodo;
	}
	else {
		(Fin->Anterior)->Siguiente = nuevo_nodo;
	}
	Fin = nuevo_nodo;
}
bool Cola::IsEmpty(Nodo* Cabeza) {
	if (Cabeza == nullptr)
	{
		return true;
	}
	else {
		return false;
	}
}
void Cola::SuprimirCola(Nodo* Frente, Nodo* Fin, int n) {
	n = Frente->digito;
	Nodo* aux = Frente->Anterior;

	if (Frente == Fin)
	{
		Frente = nullptr;
		Fin = nullptr;
	}
	else {
		Frente = aux->Siguiente;
	}
	delete aux;
}
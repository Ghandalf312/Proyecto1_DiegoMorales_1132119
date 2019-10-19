#include "Cola.h"
Cola::Cola() {

}
Cola::~Cola() {

}
/*void Cola::InsertarCola(int n) {
	Nodo* nuevo_nodo = new Nodo();
	Nodo* aux = new Nodo();
	nuevo_nodo->digito = n;
	nuevo_nodo->Siguiente = nullptr;
	aux = Fin;

	//nuevo_nodo->Anterior = nullptr;
	if (IsEmpty(Frente))
	{
		Frente = nuevo_nodo;
		Fin = nuevo_nodo;
	}
	else {
		(Fin->Anterior)->Siguiente = nuevo_nodo;
		Fin = nuevo_nodo;
		//aux = Fin;
	}
	Fin->Anterior = aux;
	Fin->Anterior = nuevo_nodo;
	//Fin = nuevo_nodo;
	//Fin->Anterior=nuevo_nodo;
	//Fin->Anterior = aux;
}*/

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

/*bool Cola::IsEmpty(Nodo* Cabeza) {
	if (Cabeza == nullptr)
	{
		return true;
	}
	else {
		return false;
	}
}*/

/*int Cola::SuprimirCola(int n) {
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
	return n;
}*/

int Cola::Pop() {
	if (Frente != nullptr)
	{
	int x = Frente->digito;
	Nodo* aux = Frente;
	Frente = aux->Siguiente;
	delete aux;
	return x;
	}
}
void Cola::LimpiarCola() {
	while (Frente != nullptr)
	{
		int x = Pop();
	}
}
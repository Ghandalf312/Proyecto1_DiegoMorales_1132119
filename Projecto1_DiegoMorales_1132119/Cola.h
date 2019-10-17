#pragma once
#include "Nodo.h"
class Cola
{
public:
	Nodo* Frente = nullptr;
	Nodo* Fin = nullptr;
public:
	Cola();
	~Cola();
	bool IsEmpty(Nodo* Cabeza);
	void InsertarCola(Nodo* Frente, Nodo* Fin, int n);
	void SuprimirCola(Nodo* Frente, Nodo* Fin, int n);
};


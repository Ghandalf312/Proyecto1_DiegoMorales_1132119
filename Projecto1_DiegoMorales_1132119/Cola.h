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
	void InsertarCola(int n);
	int SuprimirCola(int n);

	void Push(int n);
	int Pop();
	void LimpiarCola();
};


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
	void Push(int n);
	int Pop();
	void LimpiarCola();
	bool BuscarValorCola(int n);
};


#pragma once
#include "Nodo.h"

class Pila
{
public:
	Nodo* Head = nullptr;
public:
	Pila();
	~Pila();
	void Agregar(int n);
	int Quitar();
	void LimpiarPila();
	bool BuscarValorPila(int n);
};
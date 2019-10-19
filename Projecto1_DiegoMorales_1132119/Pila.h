#pragma once
#include "Nodo.h"

class Pila
{
public:
	Nodo* Head = nullptr;
public:
	Pila();
	~Pila();
	void Agregar(int n);//Apilará los elementos para luego mostrarlos en el display
	int Quitar();//Desapilará los elementos para mostrar el que necesita
	void LimpiarPila();//Al igual que la cola, borrará sus elemento hasta que su punteros sean nulos.
	bool BuscarValorPila(int n);//Buscará el valor que necesita en la pila
};
#pragma once
#include "Nodo.h"
class Cola
{
public:
	Nodo* Frente = nullptr;//Inicializar los punteros como nulo.
	Nodo* Fin = nullptr;
public:
	//Procedimientos que realizara la cola duarnte el progreso del proyecto
	Cola();
	~Cola();
	void Push(int n);//Agregara valores para "encolarlos"
	int Pop();//Desencolara los elementos
	void LimpiarCola();//Como su nombre lo dice, limpiara al cola, elimina todos los elementos hasta que sus penteros sean nulos
	bool BuscarValorCola(int n);//Buscara el valor que se necesita de la cola.
};


#pragma once
#include "Nodo.h"
class Lista
{
public:
	
	Nodo* First;
	Nodo* Last;

public:
	void Push(double valor);
	void Pop();
	void PushPos(double valor, int pos);
	bool IsEmpty();
	int Size();
};

#pragma once
#include "Nodo.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


class Pila
{
public:
	Nodo* Head = nullptr;
public:
	Pila();
	~Pila();
	void Push(Nodo *Pila, int n);
	int Pop(Nodo* Pila, int n);
};
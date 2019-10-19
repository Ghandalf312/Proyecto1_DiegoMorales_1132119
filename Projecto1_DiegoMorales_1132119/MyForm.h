#pragma once
#include "Pila.h"
#include "Cola.h"
#include "Lista.h"

namespace Projecto1DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Label^ lblUnidad;
	private: System::Windows::Forms::Label^ lblDecima;
	private: System::Windows::Forms::Label^ lblCentesima;
	private: System::Windows::Forms::Label^ lblDecena;
	private: System::Windows::Forms::RadioButton^ rbRegular;
	private: System::Windows::Forms::RadioButton^ rbDiesel;
	private: System::Windows::Forms::RadioButton^ rbSuper;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::ListBox^ listBox3;
	private: System::Windows::Forms::MaskedTextBox^ mtbPrecio;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button4;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbRegular = (gcnew System::Windows::Forms::RadioButton());
			this->rbDiesel = (gcnew System::Windows::Forms::RadioButton());
			this->rbSuper = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->mtbPrecio = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblUnidad = (gcnew System::Windows::Forms::Label());
			this->lblDecima = (gcnew System::Windows::Forms::Label());
			this->lblCentesima = (gcnew System::Windows::Forms::Label());
			this->lblDecena = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbRegular);
			this->groupBox1->Controls->Add(this->rbDiesel);
			this->groupBox1->Controls->Add(this->rbSuper);
			this->groupBox1->Location = System::Drawing::Point(461, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(210, 111);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tipo de gasolina";
			// 
			// rbRegular
			// 
			this->rbRegular->AutoSize = true;
			this->rbRegular->Location = System::Drawing::Point(22, 49);
			this->rbRegular->Name = L"rbRegular";
			this->rbRegular->Size = System::Drawing::Size(62, 17);
			this->rbRegular->TabIndex = 2;
			this->rbRegular->TabStop = true;
			this->rbRegular->Text = L"Regular";
			this->rbRegular->UseVisualStyleBackColor = true;
			// 
			// rbDiesel
			// 
			this->rbDiesel->AutoSize = true;
			this->rbDiesel->Location = System::Drawing::Point(22, 80);
			this->rbDiesel->Name = L"rbDiesel";
			this->rbDiesel->Size = System::Drawing::Size(54, 17);
			this->rbDiesel->TabIndex = 1;
			this->rbDiesel->TabStop = true;
			this->rbDiesel->Text = L"Diesel";
			this->rbDiesel->UseVisualStyleBackColor = true;
			// 
			// rbSuper
			// 
			this->rbSuper->AutoSize = true;
			this->rbSuper->Location = System::Drawing::Point(22, 20);
			this->rbSuper->Name = L"rbSuper";
			this->rbSuper->Size = System::Drawing::Size(53, 17);
			this->rbSuper->TabIndex = 0;
			this->rbSuper->TabStop = true;
			this->rbSuper->Text = L"Super";
			this->rbSuper->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(461, 130);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 32);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Agregar precio";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(461, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Borrar precio";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->mtbPrecio);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->lblUnidad);
			this->groupBox2->Controls->Add(this->lblDecima);
			this->groupBox2->Controls->Add(this->lblCentesima);
			this->groupBox2->Controls->Add(this->lblDecena);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(229, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(226, 150);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ingrese el precio";
			// 
			// mtbPrecio
			// 
			this->mtbPrecio->Location = System::Drawing::Point(55, 34);
			this->mtbPrecio->Mask = L"00.00";
			this->mtbPrecio->Name = L"mtbPrecio";
			this->mtbPrecio->Size = System::Drawing::Size(158, 20);
			this->mtbPrecio->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(101, 98);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(10, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L".";
			// 
			// lblUnidad
			// 
			this->lblUnidad->AutoSize = true;
			this->lblUnidad->Location = System::Drawing::Point(62, 98);
			this->lblUnidad->Name = L"lblUnidad";
			this->lblUnidad->Size = System::Drawing::Size(41, 13);
			this->lblUnidad->TabIndex = 5;
			this->lblUnidad->Text = L"Unidad";
			// 
			// lblDecima
			// 
			this->lblDecima->AutoSize = true;
			this->lblDecima->Location = System::Drawing::Point(116, 98);
			this->lblDecima->Name = L"lblDecima";
			this->lblDecima->Size = System::Drawing::Size(43, 13);
			this->lblDecima->TabIndex = 4;
			this->lblDecima->Text = L"Décima";
			// 
			// lblCentesima
			// 
			this->lblCentesima->AutoSize = true;
			this->lblCentesima->Location = System::Drawing::Point(157, 98);
			this->lblCentesima->Name = L"lblCentesima";
			this->lblCentesima->Size = System::Drawing::Size(56, 13);
			this->lblCentesima->TabIndex = 3;
			this->lblCentesima->Text = L"Centésima";
			// 
			// lblDecena
			// 
			this->lblDecena->AutoSize = true;
			this->lblDecena->Location = System::Drawing::Point(21, 98);
			this->lblDecena->Name = L"lblDecena";
			this->lblDecena->Size = System::Drawing::Size(45, 13);
			this->lblDecena->TabIndex = 2;
			this->lblDecena->Text = L"Decena";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Precio: ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(23, 92);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(59, 134);
			this->listBox1->TabIndex = 4;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ListBox1_SelectedIndexChanged);
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(145, 92);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(59, 134);
			this->listBox2->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(35, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Pila";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(158, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Cola";
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(229, 168);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(226, 95);
			this->listBox3->TabIndex = 11;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(461, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 32);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Borrar digito";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(11, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(212, 18);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Gasolinera Metro Plus S.A.";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(23, 232);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(181, 31);
			this->button4->TabIndex = 15;
			this->button4->Text = L"Ordenar";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(679, 278);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"\"Metro Plus S.A.\"";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Pila* MiPila = new Pila();
	Cola* MiCola = new Cola();
	Lista* MiLista = new Lista();
	bool IngresarValor = false;
	bool DioVuelta1, DioVuelta2, DioVuelta3, DioVuelta4 = false;
	bool salirse = false;

	void Burbuja(int A[], int n) {
		int aux, i, j;
		for (i = 0; i < n - 1; i++)
		{
			for (j = i + 1; j < n - 1; j++)
			{
				if (A[i] > A[j])
				{
					aux = A[i];
					A[i] = A[j];
					A[j] = aux;
				}
			}
		}
	}
	public: void MostrarPila()
	{
		int VectorPila[10] = { 11,11,11,11,11,11,11,11,11,11 };
		int i = 0;
		Nodo* Aux = new Nodo();
		Aux = MiPila->Head;
		listBox1->Items->Clear();
		while (Aux != nullptr)
		{
			VectorPila[i] = Aux->digito;
			i++;
			Aux = Aux->Siguiente;
		}
		i = 0;
		while (VectorPila[i] !=11 && i <= 9)
		{
			listBox1->Items->Add(VectorPila[i]);
			i++;
		}
	}
	public: void MostrarCola() {
		int VectorCola[10] = {11,11,11,11,11,11,11,11,11,11};
		int j = 0;
		Nodo* Aux = new Nodo();
		Aux = MiCola->Frente;
		listBox2->Items->Clear();
		while (Aux != nullptr)
		{
			VectorCola[j] = Aux->digito;
			j++;
			Aux = Aux->Siguiente;
		}
		j = 0;
		while (VectorCola[j] != 11 && j <= 9)
		{
			listBox2->Items->Add(VectorCola[j]);
			j++;
		}
	}
	public: void IngresarNumero(int w, int x, int y, int z) {
		Nodo* aux = new Nodo;
		bool Encontro1 = false;
		bool Encontro2 = false;
		bool Encontro3 = false;
		bool Encontro4 = false;

		int w1, x1, y1, z1;

		int VectorP[10] = {11,11,11,11,11,11,11,11,11,11};
		int posP = 0;
		int VectorPValidacion[10] = { 0,0,0,0,0,0,0,0,0,0 };
		int VectorC[10] = { 11,11,11,11,11,11,11,11,11,11 };
		int posC = 0;
		int VectorCValidacion[10] = { 0,0,0,0,0,0,0,0,0,0 };

		aux = MiPila->Head;
		while (aux != nullptr)
		{
			VectorP[posP] = MiPila->Quitar();
			posP++;
			aux = MiPila->Head;
		}

		aux = MiCola->Frente;
		while (aux != nullptr)
		{
			VectorC[posC] = MiCola->Pop();
			posC++;
			aux = MiCola->Frente;
		}
		for (int i = 0; i < 10;i++) {
			if (w == VectorP[i] && VectorPValidacion[i] == 0 && Encontro1==false)
			{
				VectorPValidacion[i] = 1;
				Encontro1 = true;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (x == VectorP[i] && VectorPValidacion[i] == 0 && Encontro2 == false)
			{
				VectorPValidacion[i] = 1;
				Encontro2 = true;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (y == VectorP[i] && VectorPValidacion[i] == 0 && Encontro3 == false)
			{
				VectorPValidacion[i] = 1;
				Encontro3 = true;
			}
		}
		for (int i = 0; i < 10; i++) {
			if (z == VectorP[i] && VectorPValidacion[i] == 0 && Encontro4 == false)
			{
				VectorPValidacion[i] = 1;
				Encontro4 = true;
			}
		}

		if (Encontro1 == true && Encontro2 == true && Encontro3 == true && Encontro4 == true)
		{//Encontro todos los valores 
			IngresarValor = true;

		}
		else {//No encontro uno o mas valores en la pila, procede a buscar en la cola
			for (int i = 0; i < 10; i++) {
				if (w == VectorC[i] && VectorCValidacion[i] == 0 && Encontro1 == false)
				{
					VectorCValidacion[i] = 1;
					Encontro1 = true;
				}
			}
			for (int i = 0; i < 10; i++) {
				if (x == VectorC[i] && VectorCValidacion[i] == 0 && Encontro2 == false)
				{
					VectorCValidacion[i] = 1;
					Encontro2 = true;
				}
			}
			for (int i = 0; i < 10; i++) {
				if (y == VectorC[i] && VectorCValidacion[i] == 0 && Encontro3 == false)
				{
					VectorCValidacion[i] = 1;
					Encontro3 = true;
				}
			}
			for (int i = 0; i < 10; i++) {
				if (z == VectorC[i] && VectorCValidacion[i] == 0 && Encontro4 == false)
				{
					VectorCValidacion[i] = 1;
					Encontro4 = true;
				}
			}
			if (Encontro1 == true && Encontro2 == true && Encontro3 == true && Encontro4 == true)
			{//Encontro todos los valores 
				IngresarValor = true;
			}
			else {
				if (Encontro1 == false){
					w1 = w + 1;
				}
				if (Encontro2 == false) {
					x1 = x + 1;
				}
				if (Encontro3 == false) {
					y1 = y + 1;
				}
				if (Encontro4 == false) {
					z1 = z + 1;
				}
				//Verificar que haya terminado la vuelta, es decir, que el valor haya llegado o se ha pasado de 9
					if (w1 > 9)
					{ // Si se pasa, verifica si ya dio una vuelta de los numeros que hay en la lista.
						if (DioVuelta1 == false)
						{//Si no ha pasado, incia el conteo a 0 y marca que ya dio la segunda vuelta.
							w1 = 0;
							DioVuelta1 = true;
						}
						else
						{//Si ya dio la segunda vuelta y no encontro el valor, se toma como que no esta disponible.
							salirse = true;
							for (int a = 0; a < 10; a++) { VectorCValidacion[a] = 0; VectorPValidacion[a] = 0; } // retornar todos los valores de validacion a 0 para poder ser regresados a sus respectivas estructuras de datos
						}
					}
					
					if (x1 > 9)
					{
						if (DioVuelta2 == false)
						{
							x1 = 0;
							DioVuelta2 = true;
						}
						else
						{
							salirse = true;
							for (int a = 0; a < 10; a++) { VectorCValidacion[a] = 0; VectorPValidacion[a] = 0; } // retornar todos los valores de validacion a 0 para poder ser regresados a sus respectivas estructuras de datos
						}
					}

					if (y1 > 9)
					{
						if (DioVuelta3 == false)
						{
							y1 = 0;
							DioVuelta3 = true;
						}
						else
						{
							salirse = true;
							for (int a = 0; a < 10; a++) { VectorCValidacion[a] = 0; VectorPValidacion[a] = 0; } // retornar todos los valores de validacion a 0 para poder ser regresados a sus respectivas estructuras de datos
						}
					}

					if (z1 > 9)
					{
						if (DioVuelta4 == false)
						{
							z1 = 0;
							DioVuelta4 = true;
						}
						else
						{
							salirse = true;
							for (int a = 0; a < 10; a++) { VectorCValidacion[a] = 0; VectorPValidacion[a] = 0; } // retornar todos los valores de validacion a 0 para poder ser regresados a sus respectivas estructuras de datos
							
						}
					}//Si salirse no esta activado es porque hay mas valores que todavia se pueden revisar.

				if (salirse == false)
				{
					IngresarNumero(w1, x1, y1, z1);
				}
				else
				{
					MessageBox::Show("La cantidad ingresada no puede ser insertada, intente con otra cantidad");
				}

			}
		}

		if (IngresarValor == true || salirse == true)
		{
			for (int i = 0; i < 10; i++)
			{

				if (VectorCValidacion[i] == 1)
				{
					VectorC[i] = 11;
				}

				if (VectorPValidacion[i] == 1)
				{
					VectorP[i] = 11;
				}


			}
			for (int i = 9; i >= 0; i--)
			{
				if (VectorP[i] != 11)
				{
					MiPila->Agregar(VectorP[i]);
				}
			}
			int ss;
			for (int i = 0; i < 10; i++)
			{
				if (VectorC[i] != 11)
				{
					MiCola->Push(VectorC[i]);
					ss = 1;
				}
			}
		}
	}
	

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Llenando la pila con los valores iniciales.
	MiPila->Agregar(0);
	MiPila->Agregar(1);
	MiPila->Agregar(2);
	MiPila->Agregar(3);
	MiPila->Agregar(4);
	MiPila->Agregar(5);
	MiPila->Agregar(6);
	MiPila->Agregar(7);
	MiPila->Agregar(8);
	MiPila->Agregar(9);
	MostrarPila();
	//Llenando la cola con los valores iniciales
	MiCola->Push(0);
	MiCola->Push(1);
	MiCola->Push(2);
	MiCola->Push(3);
	MiCola->Push(4);
	MiCola->Push(5);
	MiCola->Push(6);
	MiCola->Push(7);
	MiCola->Push(8);
	MiCola->Push(9);
	MostrarCola();
}

private: System::Void ListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Precio = (mtbPrecio->Text)->Replace(" ","");

	

	if (Precio->Length == 5) {
		//Obtener los 4 valores para revisar
		int w, x, y, z;
		w = int::Parse(Precio->Substring(0, 1));
		x = int::Parse(Precio->Substring(1, 1));
		y = int::Parse(Precio->Substring(3, 1));
		z = int::Parse(Precio->Substring(4, 1));
		IngresarNumero(w,x,y,z);
		if (salirse != true)//Si es diferente, los numeros seleccionados se deben agregar a la lista y se deben desplegar
		{
			MiLista->Push(double::Parse(Precio)); //Agregar los valores la lista doblemente enlazada.
			lblDecena->Text = Precio->Substring(0, 1);
			lblUnidad->Text = Precio->Substring(1, 1);
			lblDecima->Text = Precio->Substring(3, 1);
			lblCentesima->Text = Precio->Substring(4, 1);
			listBox3->Items->Add(Precio);
		}
		//No se agrego el valor a la lista porque no habian suficientes numeros
			salirse = false;
			IngresarValor = false;
		
		MostrarPila();
		MostrarCola();
	}
	else {
		MessageBox::Show("Debe ingresar correctamente los datos, conforme a la plantilla dada. (##.##)");
	}
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (listBox3->SelectedIndex == -1)
	{
		//no ha seleccionado una opcion a eliminar
		MessageBox::Show("Seleccione una opcion para poder eliminar");
	}
	else
	{
		//si selecciono una opcion
		int opcionAeliminar = listBox3->SelectedIndex;
		listBox3->Items->RemoveAt(opcionAeliminar);
		Nodo* aux = MiLista->First;
		for (int i = 0; i < listBox3->SelectedIndex; i++)
		{
			aux = aux->Siguiente;
		}
		double numero = aux->digito; 
		String^ Particion = numero.ToString();
		int a, b, c, d;
		a = int::Parse(Particion->Substring(0, 1));
		b = int::Parse(Particion->Substring(1, 1));
		c = int::Parse(Particion->Substring(3, 1));
		d = int::Parse(Particion->Substring(4, 1));

		if (MiPila->BuscarValorPila(a) != true)
		{
			MiPila->Agregar(a);
		}
		else {
			MiCola->Push(a);
		}
		if (MiPila->BuscarValorPila(b) != true)
		{
			MiPila->Agregar(b);
		}
		else {
			MiCola->Push(b);
		}
		if (MiPila->BuscarValorPila(c) != true)
		{
			MiPila->Agregar(c);
		}
		else {
			MiCola->Push(c);
		}
		if (MiPila->BuscarValorPila(d) != true)
		{
			MiPila->Agregar(d);
		}
		else {
			MiCola->Push(d);
		}
		MostrarPila();
		MostrarCola();
	}


}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Feature not available at the moment >:DDDD");
}


private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Nodo* aux; 
	int ValoresPila[10] = { 11,11,11,11,11,11,11,11,11,11 };
	int ValoresCola[10] = { 11,11,11,11,11,11,11,11,11,11 };

	int count = 0;
	aux = MiPila->Head;
	while (aux != nullptr)
	{
		ValoresPila[count] = aux->digito;
		aux = aux->Siguiente;
		count++;
	}

	count = 0;
	aux = MiCola->Frente;
	while (aux != nullptr)
	{
		ValoresCola[count] = aux->digito;
		aux = aux->Siguiente;
		count++;
	}
	Burbuja(ValoresPila,10);
	Burbuja(ValoresCola, 10);

	MiPila->LimpiarPila();
	MiCola->LimpiarCola();
	for (int i = 0; i < 10; i++)
	{
		if (ValoresPila[i] != 11) {
			MiPila->Agregar(ValoresPila[i]);
		}
		if (ValoresCola[i] != 11) {
			MiCola->Push(ValoresCola[i]);
		}
	}
	MostrarPila();
	MostrarCola();
}
};
}

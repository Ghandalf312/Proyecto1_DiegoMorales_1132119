#pragma once

namespace Projecto1DiegoMorales1132119 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox3;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblUnidad = (gcnew System::Windows::Forms::Label());
			this->lblDecima = (gcnew System::Windows::Forms::Label());
			this->lblCentesima = (gcnew System::Windows::Forms::Label());
			this->lblDecena = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox3 = (gcnew System::Windows::Forms::ListBox());
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
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(461, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(210, 32);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Borrar precio";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(461, 230);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(210, 32);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Borrar dígito";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->lblUnidad);
			this->groupBox2->Controls->Add(this->lblDecima);
			this->groupBox2->Controls->Add(this->lblCentesima);
			this->groupBox2->Controls->Add(this->lblDecena);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Location = System::Drawing::Point(229, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(226, 150);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ingrese el precio";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 98);
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
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(55, 34);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 20);
			this->textBox1->TabIndex = 1;
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
			this->listBox1->Location = System::Drawing::Point(38, 92);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(59, 134);
			this->listBox1->TabIndex = 4;
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
			this->label3->Location = System::Drawing::Point(50, 76);
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
			// button5
			// 
			this->button5->Location = System::Drawing::Point(23, 232);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 32);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Ordenar Pila";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(129, 232);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(90, 32);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Ordenar Cola";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// listBox3
			// 
			this->listBox3->FormattingEnabled = true;
			this->listBox3->Location = System::Drawing::Point(229, 168);
			this->listBox3->Name = L"listBox3";
			this->listBox3->Size = System::Drawing::Size(226, 95);
			this->listBox3->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 274);
			this->Controls->Add(this->listBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
};
}

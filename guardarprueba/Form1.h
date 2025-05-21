#pragma once
#include "Pelicula.h"


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtTitulo;
	protected:
	private: System::Windows::Forms::TextBox^ txtGenero;
	private: System::Windows::Forms::TextBox^ txtDuracion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListBox^ lstPeliculas;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnModificar;
	private: System::Windows::Forms::Button^ btnEliminar;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		System::Collections::Generic::List<Pelicula^>^ peliculas = gcnew System::Collections::Generic::List<Pelicula^>();
		//array<Pelicula^>^ MisPeliculas = gcnew array<Pelicula^>(25); //consultar array
		//int cantidadPeliculas = 0;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->txtGenero = (gcnew System::Windows::Forms::TextBox());
			this->txtDuracion = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lstPeliculas = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnModificar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtTitulo
			// 
			this->txtTitulo->Location = System::Drawing::Point(215, 113);
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(267, 22);
			this->txtTitulo->TabIndex = 0;
			// 
			// txtGenero
			// 
			this->txtGenero->Location = System::Drawing::Point(215, 141);
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->Size = System::Drawing::Size(267, 22);
			this->txtGenero->TabIndex = 1;
			// 
			// txtDuracion
			// 
			this->txtDuracion->Location = System::Drawing::Point(215, 169);
			this->txtDuracion->Name = L"txtDuracion";
			this->txtDuracion->Size = System::Drawing::Size(267, 22);
			this->txtDuracion->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(138, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Titulo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(138, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Genero";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(138, 175);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Duración";
			// 
			// lstPeliculas
			// 
			this->lstPeliculas->FormattingEnabled = true;
			this->lstPeliculas->ItemHeight = 16;
			this->lstPeliculas->Location = System::Drawing::Point(215, 210);
			this->lstPeliculas->Name = L"lstPeliculas";
			this->lstPeliculas->Size = System::Drawing::Size(267, 116);
			this->lstPeliculas->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(137, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Peliculas";
			this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(161, 373);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(75, 23);
			this->btnGuardar->TabIndex = 8;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Form1::btnGuardar_Click);
			// 
			// btnModificar
			// 
			this->btnModificar->Location = System::Drawing::Point(291, 373);
			this->btnModificar->Name = L"btnModificar";
			this->btnModificar->Size = System::Drawing::Size(75, 23);
			this->btnModificar->TabIndex = 9;
			this->btnModificar->Text = L"Modificar";
			this->btnModificar->UseVisualStyleBackColor = true;
			this->btnModificar->Click += gcnew System::EventHandler(this, &Form1::btnModificar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->Location = System::Drawing::Point(427, 373);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(75, 23);
			this->btnEliminar->TabIndex = 10;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &Form1::btnEliminar_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(680, 467);
			this->Controls->Add(this->btnEliminar);
			this->Controls->Add(this->btnModificar);
			this->Controls->Add(this->btnGuardar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->lstPeliculas);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtDuracion);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->txtTitulo);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	//if (cantidadPeliculas >= 25) {
		//MessageBox::Show("Límite de películas alcanzado.");
		//return;
	// Crear una nueva película
	Pelicula^ p = gcnew Pelicula();
	p->titulo = txtTitulo->Text;
	p->genero = txtGenero->Text;

	int dur;
	if (Int32::TryParse(txtDuracion->Text, dur)) {
		p->duracion = dur;
	}
	else {
		MessageBox::Show("Duración inválida.");
		return;
	}

	// Agregar a la lista
	peliculas->Add(p);
	lstPeliculas->Items->Add(p->ToString());

	// Limpiar los campos
	txtTitulo->Clear();
	txtGenero->Clear();
	txtDuracion->Clear();


}
private: System::Void btnModificar_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = lstPeliculas->SelectedIndex;

	if (index >= 0) {
		Pelicula^ p = peliculas[index];

		p->titulo = txtTitulo->Text;
		p->genero = txtGenero->Text;

		int dur;
		if (Int32::TryParse(txtDuracion->Text, dur)) {
			p->duracion = dur;
		}
		else {
			MessageBox::Show("Duración inválida.");
			return;
		}

		// Actualizar la visualización
		lstPeliculas->Items[index] = p->ToString();

		// Limpiar campos
		txtTitulo->Clear();
		txtGenero->Clear();
		txtDuracion->Clear();
	}
	else {
		MessageBox::Show("Selecciona una película para modificar.");
	}
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	int index = lstPeliculas->SelectedIndex;

	if (index >= 0) {
		peliculas->RemoveAt(index);
		lstPeliculas->Items->RemoveAt(index);

		// Limpiar campos
		txtTitulo->Clear();
		txtGenero->Clear();
		txtDuracion->Clear();
	}
	else {
		MessageBox::Show("Selecciona una película para eliminar.");
	}
}
};
}

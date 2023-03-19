#pragma once

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
	private: System::Windows::Forms::TextBox^ input_cnp;
	private: System::Windows::Forms::TextBox^ output_cnp;
	protected:

	private: System::Windows::Forms::Button^ calculeaza_cnp;

	private: System::Windows::Forms::Button^ sterge_input;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ afisaj_data;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->output_cnp = (gcnew System::Windows::Forms::TextBox());
			this->calculeaza_cnp = (gcnew System::Windows::Forms::Button());
			this->sterge_input = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->afisaj_data = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(68, 55);
			this->input_cnp->Multiline = true;
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(197, 33);
			this->input_cnp->TabIndex = 0;
			// 
			// output_cnp
			// 
			this->output_cnp->Location = System::Drawing::Point(68, 203);
			this->output_cnp->Multiline = true;
			this->output_cnp->Name = L"output_cnp";
			this->output_cnp->Size = System::Drawing::Size(197, 36);
			this->output_cnp->TabIndex = 1;
			// 
			// calculeaza_cnp
			// 
			this->calculeaza_cnp->Location = System::Drawing::Point(68, 132);
			this->calculeaza_cnp->Name = L"calculeaza_cnp";
			this->calculeaza_cnp->Size = System::Drawing::Size(91, 23);
			this->calculeaza_cnp->TabIndex = 2;
			this->calculeaza_cnp->Text = L"Calculeaza";
			this->calculeaza_cnp->UseVisualStyleBackColor = true;
			this->calculeaza_cnp->Click += gcnew System::EventHandler(this, &Form1::calculeaza_cnp_Click);
			// 
			// sterge_input
			// 
			this->sterge_input->Location = System::Drawing::Point(165, 132);
			this->sterge_input->Name = L"sterge_input";
			this->sterge_input->Size = System::Drawing::Size(100, 23);
			this->sterge_input->TabIndex = 3;
			this->sterge_input->Text = L"Clear";
			this->sterge_input->UseVisualStyleBackColor = true;
			this->sterge_input->Click += gcnew System::EventHandler(this, &Form1::sterge_input_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(412, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Data:";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// afisaj_data
			// 
			this->afisaj_data->Location = System::Drawing::Point(370, 77);
			this->afisaj_data->Name = L"afisaj_data";
			this->afisaj_data->Size = System::Drawing::Size(120, 23);
			this->afisaj_data->TabIndex = 5;
			this->afisaj_data->Text = L"Afiseaza data";
			this->afisaj_data->UseVisualStyleBackColor = true;
			this->afisaj_data->Click += gcnew System::EventHandler(this, &Form1::afisaj_data_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(573, 296);
			this->Controls->Add(this->afisaj_data);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->sterge_input);
			this->Controls->Add(this->calculeaza_cnp);
			this->Controls->Add(this->output_cnp);
			this->Controls->Add(this->input_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void afisaj_data_Click(System::Object^ sender, System::EventArgs^ e) 
{
	DateTime today = DateTime::Now;
	label1->Text = today.ToString("dd/MM/yyy");
}
private: System::Void sterge_input_Click(System::Object^ sender, System::EventArgs^ e) 
{
	input_cnp->Clear();
	output_cnp->Clear();
}
private: System::Void calculeaza_cnp_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (input_cnp->Text->Length == 0)
	{
		MessageBox::Show("Introduceti Cnp-ul!", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	else
	{
		String^ cnp = input_cnp->Text;

		int an = Int32::Parse(cnp->Substring(1, 2));
		int luna = Int32::Parse(cnp->Substring(3, 2));
		int zi = Int32::Parse(cnp->Substring(5, 2));

		DateTime azi = DateTime::Now;
		String^ gender;
		int varsta;
		switch (cnp[0])
		{
		case '1': varsta = azi.Year - (1900 + an); gender = "Masculin"; break;
		case '2': varsta = azi.Year - (1900 + an); gender = "Feminin"; break;
		case '3': varsta = azi.Year - (1800 + an); gender = "Masculin"; break;
		case '4': varsta = azi.Year - (1800 + an); gender = "Feminin"; break;
		case '5': varsta = azi.Year - (2000 + an); gender = "Masculin"; break;
		case '6': varsta = azi.Year - (2000 + an); gender = "Feminin"; break;
		}
		if (luna > azi.Month || (luna == azi.Month && zi > azi.Day))
		{
			varsta--;
		}
		output_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + " " + "\n" + "Varsta" + varsta.ToString() + " Gen: " + gender;
	}
}
};
}

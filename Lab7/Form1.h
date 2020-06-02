#pragma once

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Pj;
	private: System::Windows::Forms::TextBox^ Pd;


	private: System::Windows::Forms::TextBox^ Mg;

	private: System::Windows::Forms::TextBox^ Md;
	private: System::Windows::Forms::TextBox^ Sp;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;

	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Pj = (gcnew System::Windows::Forms::TextBox());
			this->Pd = (gcnew System::Windows::Forms::TextBox());
			this->Mg = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Md = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Sp = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->Pj);
			this->groupBox1->Controls->Add(this->Pd);
			this->groupBox1->Controls->Add(this->Mg);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->Md);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->Sp);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(171, 144);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дано:";
			this->groupBox1->UseWaitCursor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 120);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(109, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Плотность дерева =";
			this->label5->UseWaitCursor = true;
			// 
			// Pj
			// 
			this->Pj->Location = System::Drawing::Point(134, 65);
			this->Pj->Name = L"Pj";
			this->Pj->ReadOnly = true;
			this->Pj->Size = System::Drawing::Size(30, 20);
			this->Pj->TabIndex = 8;
			this->Pj->Text = L"1000";
			this->Pj->UseWaitCursor = true;
			this->Pj->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// Pd
			// 
			this->Pd->Location = System::Drawing::Point(135, 117);
			this->Pd->Name = L"Pd";
			this->Pd->ReadOnly = true;
			this->Pd->Size = System::Drawing::Size(30, 20);
			this->Pd->TabIndex = 9;
			this->Pd->Text = L"600";
			this->Pd->UseWaitCursor = true;
			// 
			// Mg
			// 
			this->Mg->Location = System::Drawing::Point(135, 39);
			this->Mg->Name = L"Mg";
			this->Mg->ReadOnly = true;
			this->Mg->Size = System::Drawing::Size(30, 20);
			this->Mg->TabIndex = 6;
			this->Mg->Text = L"100";
			this->Mg->UseWaitCursor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Сила притяжения =";
			this->label4->UseWaitCursor = true;
			// 
			// Md
			// 
			this->Md->Location = System::Drawing::Point(135, 13);
			this->Md->Name = L"Md";
			this->Md->ReadOnly = true;
			this->Md->Size = System::Drawing::Size(30, 20);
			this->Md->TabIndex = 5;
			this->Md->Text = L"216";
			this->Md->UseWaitCursor = true;
			this->Md->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(88, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Масса дерева =";
			this->label1->UseWaitCursor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(122, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Плотность жидкости =";
			this->label3->UseWaitCursor = true;
			// 
			// Sp
			// 
			this->Sp->Location = System::Drawing::Point(135, 91);
			this->Sp->Name = L"Sp";
			this->Sp->ReadOnly = true;
			this->Sp->Size = System::Drawing::Size(30, 20);
			this->Sp->TabIndex = 7;
			this->Sp->Text = L"10";
			this->Sp->UseWaitCursor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Масса груза =";
			this->label2->UseWaitCursor = true;
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(12, 224);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(171, 38);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Найти:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(158, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Сила Архимеда/силу тяжести";
			this->label6->UseWaitCursor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->label10);
			this->groupBox3->Controls->Add(this->label9);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->buttonStart);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(189, 81);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(370, 181);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Решение:";
			this->groupBox3->Enter += gcnew System::EventHandler(this, &Form1::groupBox3_Enter);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(14, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(86, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Сила тяжести =";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 16);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(94, 13);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Сила Архимеда =";
			this->label10->Visible = false;
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 3;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(106, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 2;
			// 
			// button1
			// 
			this->buttonStart->Location = System::Drawing::Point(6, 154);
			this->buttonStart->Name = L"button1";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"Рассчитать";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(106, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 0;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(12, 12);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(192, 17);
			this->checkBox2->TabIndex = 4;
			this->checkBox2->Text = L"Поменять массу дерева на 2016";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(12, 35);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(119, 17);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Масса груза = 100";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(12, 58);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(125, 17);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->Text = L"Масса груза = 1000";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButton2_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(568, 272);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Mg->Text = "100";
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		Mg->Text = "1000";
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Md->Text != "2016") Md->Text = "2016";
		else Md->Text = "216";
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		label10->Visible = true;
		label11->Visible = true;
		label7->Text = Convert::ToString(Convert::ToDouble(Pj->Text) * Convert::ToDouble(Sp->Text) * Convert::ToDouble(Md->Text) / Convert::ToDouble(Pd->Text));
		label8->Text = Convert::ToString((Convert::ToDouble(Md->Text) + Convert::ToDouble(Mg->Text)) * Convert::ToDouble(Sp->Text));

		if (Convert::ToDouble(label7->Text) > Convert::ToDouble(label8->Text))
			label9->Text = "Ответ: Сила Архимеда > Силы тяжести => Груз удержится";
		else label9->Text = "Ответ: Сила Архимеда < Силы тяжести => Груз утонет";
	}
	private: System::Void groupBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
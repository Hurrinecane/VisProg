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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::GroupBox^ groupBoxUSD;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::GroupBox^ groupBoxCNY;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::GroupBox^ groupBoxEUR;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ MapSize_numericUpDown;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ ContronField;
	private: System::Windows::Forms::RadioButton^ radioButtonCNY;
	private: System::Windows::Forms::RadioButton^ radioButtonEUR;
	private: System::Windows::Forms::RadioButton^ radioButtonUSD;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxCNY = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxEUR = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxUSD = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->MapSize_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->ContronField = (gcnew System::Windows::Forms::Panel());
			this->radioButtonCNY = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonEUR = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonUSD = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBoxCNY->SuspendLayout();
			this->groupBoxEUR->SuspendLayout();
			this->groupBoxUSD->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->BeginInit();
			this->ContronField->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(483, 232);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBoxCNY);
			this->tabPage1->Controls->Add(this->groupBoxEUR);
			this->tabPage1->Controls->Add(this->groupBoxUSD);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(475, 206);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Данные";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBoxCNY
			// 
			this->groupBoxCNY->Controls->Add(this->label5);
			this->groupBoxCNY->Controls->Add(this->textBox5);
			this->groupBoxCNY->Controls->Add(this->label6);
			this->groupBoxCNY->Controls->Add(this->textBox6);
			this->groupBoxCNY->Location = System::Drawing::Point(7, 93);
			this->groupBoxCNY->Name = L"groupBoxCNY";
			this->groupBoxCNY->Size = System::Drawing::Size(200, 80);
			this->groupBoxCNY->TabIndex = 5;
			this->groupBoxCNY->TabStop = false;
			this->groupBoxCNY->Text = L"CNY";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Продажа";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(65, 19);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 2;
			this->textBox5->Text = L"5";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Покупка";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(65, 45);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"4";
			// 
			// groupBoxEUR
			// 
			this->groupBoxEUR->Controls->Add(this->label3);
			this->groupBoxEUR->Controls->Add(this->textBox3);
			this->groupBoxEUR->Controls->Add(this->label4);
			this->groupBoxEUR->Controls->Add(this->textBox4);
			this->groupBoxEUR->Location = System::Drawing::Point(213, 7);
			this->groupBoxEUR->Name = L"groupBoxEUR";
			this->groupBoxEUR->Size = System::Drawing::Size(200, 80);
			this->groupBoxEUR->TabIndex = 4;
			this->groupBoxEUR->TabStop = false;
			this->groupBoxEUR->Text = L"EUR";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Продажа";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(62, 19);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"15";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Покупка";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(62, 45);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"13";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// groupBoxUSD
			// 
			this->groupBoxUSD->Controls->Add(this->label2);
			this->groupBoxUSD->Controls->Add(this->textBox2);
			this->groupBoxUSD->Controls->Add(this->label1);
			this->groupBoxUSD->Controls->Add(this->textBox1);
			this->groupBoxUSD->Location = System::Drawing::Point(7, 7);
			this->groupBoxUSD->Name = L"groupBoxUSD";
			this->groupBoxUSD->Size = System::Drawing::Size(200, 80);
			this->groupBoxUSD->TabIndex = 0;
			this->groupBoxUSD->TabStop = false;
			this->groupBoxUSD->Text = L"USD";
			this->groupBoxUSD->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Продажа";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"9";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Покупка";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(65, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"10";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer1);
			this->tabPage2->Controls->Add(this->buttonStart);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(475, 206);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Расчет";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Form1::tabPage2_Click);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(6, 6);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->label8);
			this->splitContainer1->Panel1->Controls->Add(this->MapSize_numericUpDown);
			this->splitContainer1->Panel1->Controls->Add(this->checkBox2);
			this->splitContainer1->Panel1->Controls->Add(this->checkBox1);
			this->splitContainer1->Panel1->Controls->Add(this->ContronField);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->label10);
			this->splitContainer1->Panel2->Controls->Add(this->label9);
			this->splitContainer1->Size = System::Drawing::Size(463, 165);
			this->splitContainer1->SplitterDistance = 153;
			this->splitContainer1->TabIndex = 2;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Сумма:";
			// 
			// numericUpDown1
			// 
			this->MapSize_numericUpDown->Location = System::Drawing::Point(53, 136);
			this->MapSize_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->MapSize_numericUpDown->Name = L"numericUpDown1";
			this->MapSize_numericUpDown->Size = System::Drawing::Size(97, 20);
			this->MapSize_numericUpDown->TabIndex = 3;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(9, 118);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(72, 17);
			this->checkBox2->TabIndex = 2;
			this->checkBox2->Text = L"Продажа";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(9, 95);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(69, 17);
			this->checkBox1->TabIndex = 1;
			this->checkBox1->Text = L"Покупка";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->ContronField->Controls->Add(this->radioButtonCNY);
			this->ContronField->Controls->Add(this->radioButtonEUR);
			this->ContronField->Controls->Add(this->radioButtonUSD);
			this->ContronField->Controls->Add(this->label7);
			this->ContronField->Location = System::Drawing::Point(3, 3);
			this->ContronField->Name = L"panel2";
			this->ContronField->Size = System::Drawing::Size(147, 86);
			this->ContronField->TabIndex = 0;
			// 
			// radioButtonCNY
			// 
			this->radioButtonCNY->AutoSize = true;
			this->radioButtonCNY->Location = System::Drawing::Point(6, 62);
			this->radioButtonCNY->Name = L"radioButtonCNY";
			this->radioButtonCNY->Size = System::Drawing::Size(47, 17);
			this->radioButtonCNY->TabIndex = 3;
			this->radioButtonCNY->Text = L"CNY";
			this->radioButtonCNY->UseVisualStyleBackColor = true;
			this->radioButtonCNY->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonCNY_CheckedChanged);
			// 
			// radioButtonEUR
			// 
			this->radioButtonEUR->AutoSize = true;
			this->radioButtonEUR->Location = System::Drawing::Point(6, 39);
			this->radioButtonEUR->Name = L"radioButtonEUR";
			this->radioButtonEUR->Size = System::Drawing::Size(48, 17);
			this->radioButtonEUR->TabIndex = 2;
			this->radioButtonEUR->Text = L"EUR";
			this->radioButtonEUR->UseVisualStyleBackColor = true;
			this->radioButtonEUR->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonEUR_CheckedChanged);
			// 
			// radioButtonUSD
			// 
			this->radioButtonUSD->AutoSize = true;
			this->radioButtonUSD->Checked = true;
			this->radioButtonUSD->Location = System::Drawing::Point(6, 16);
			this->radioButtonUSD->Name = L"radioButtonUSD";
			this->radioButtonUSD->Size = System::Drawing::Size(48, 17);
			this->radioButtonUSD->TabIndex = 1;
			this->radioButtonUSD->TabStop = true;
			this->radioButtonUSD->Text = L"USD";
			this->radioButtonUSD->UseVisualStyleBackColor = true;
			this->radioButtonUSD->CheckedChanged += gcnew System::EventHandler(this, &Form1::radioButtonUSD_CheckedChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Выберите валюту:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(4, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 13);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Продажа";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(4, 19);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(50, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Покупка";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// button1
			// 
			this->buttonStart->Location = System::Drawing::Point(9, 177);
			this->buttonStart->Name = L"button1";
			this->buttonStart->Size = System::Drawing::Size(463, 23);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Расчет";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 254);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->groupBoxCNY->ResumeLayout(false);
			this->groupBoxCNY->PerformLayout();
			this->groupBoxEUR->ResumeLayout(false);
			this->groupBoxEUR->PerformLayout();
			this->groupBoxUSD->ResumeLayout(false);
			this->groupBoxUSD->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->EndInit();
			this->ContronField->ResumeLayout(false);
			this->ContronField->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void buttonStart_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButtonUSD->Checked == true)
		{
			if (checkBox1->Checked) this->label9->Text = "Покупка " + Convert::ToString(MapSize_numericUpDown->Text) + " долларов будет стоить " + Convert::ToString(Convert::ToDouble(textBox1->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
			if (checkBox2->Checked) this->label10->Text = "Продажа " + Convert::ToString(MapSize_numericUpDown->Text) + " долларов будет стоить " + Convert::ToString(Convert::ToDouble(textBox2->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
		}
		else if (radioButtonEUR->Checked == true)
		{
			if (checkBox1->Checked) this->label9->Text = "Покупка " + Convert::ToString(MapSize_numericUpDown->Text) + " евро будет стоить " + Convert::ToString(Convert::ToDouble(textBox3->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
			if (checkBox2->Checked) this->label10->Text = "Продажа " + Convert::ToString(MapSize_numericUpDown->Text) + " евро будет стоить " + Convert::ToString(Convert::ToDouble(textBox4->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
		}
		else
		{
			if (checkBox1->Checked) this->label9->Text = "Покупка " + Convert::ToString(MapSize_numericUpDown->Text) + " юаней будет стоить " + Convert::ToString(Convert::ToDouble(textBox5->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
			if (checkBox2->Checked) this->label10->Text = "Продажа " + Convert::ToString(MapSize_numericUpDown->Text) + " юаней будет стоить " + Convert::ToString(Convert::ToDouble(textBox6->Text) * Convert::ToDouble(MapSize_numericUpDown->Text)) + " рублей";
		}
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButtonUSD_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButtonEUR_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButtonCNY_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}

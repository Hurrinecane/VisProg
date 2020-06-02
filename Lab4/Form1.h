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
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::NumericUpDown^ MapSize_numericUpDown;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ Cancel;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ MapField;
	private: System::Windows::Forms::Button^ buttonUp;

	private: System::ComponentModel::IContainer^ components;



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->MapSize_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->Cancel = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->MapField = (gcnew System::Windows::Forms::Panel());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->MapField->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox1->Location = System::Drawing::Point(16, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(269, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox2->Location = System::Drawing::Point(12, 95);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(269, 29);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox3->Location = System::Drawing::Point(16, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(269, 29);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox4->Location = System::Drawing::Point(16, 213);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(269, 29);
			this->textBox4->TabIndex = 3;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox5->Location = System::Drawing::Point(16, 272);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(269, 29);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->textBox6->Location = System::Drawing::Point(16, 331);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(269, 29);
			this->textBox6->TabIndex = 5;
			// 
			// numericUpDown1
			// 
			this->MapSize_numericUpDown->BackColor = System::Drawing::Color::WhiteSmoke;
			this->MapSize_numericUpDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->MapSize_numericUpDown->Location = System::Drawing::Point(210, 579);
			this->MapSize_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3000, 0, 0, 0 });
			this->MapSize_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->MapSize_numericUpDown->Name = L"numericUpDown1";
			this->MapSize_numericUpDown->Size = System::Drawing::Size(75, 29);
			this->MapSize_numericUpDown->TabIndex = 6;
			this->MapSize_numericUpDown->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->MapSize_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2018, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::MapSize_numericUpDown_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->numericUpDown2->Location = System::Drawing::Point(236, 543);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(49, 29);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 18, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Silver;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label1->Location = System::Drawing::Point(-4, 545);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Количество полных лет :";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Silver;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label2->Location = System::Drawing::Point(42, 581);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 24);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Год обучения:";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->maskedTextBox1->Location = System::Drawing::Point(16, 390);
			this->maskedTextBox1->Mask = L"CCCCCCCCCCC@LLLLLLLLLL\\.LLLL";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(269, 29);
			this->maskedTextBox1->TabIndex = 10;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->maskedTextBox2->Location = System::Drawing::Point(16, 449);
			this->maskedTextBox2->Mask = L"+7(999) 000-00-00";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(269, 29);
			this->maskedTextBox2->TabIndex = 11;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->maskedTextBox3->Location = System::Drawing::Point(16, 508);
			this->maskedTextBox3->Mask = L"00/00/0000";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(269, 29);
			this->maskedTextBox3->TabIndex = 12;
			this->maskedTextBox3->ValidatingType = System::DateTime::typeid;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Silver;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 24);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Имя:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Silver;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label4->Location = System::Drawing::Point(12, 68);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 24);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Фамилия:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Silver;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label5->Location = System::Drawing::Point(12, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 24);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Отчество:";
			this->label5->Click += gcnew System::EventHandler(this, &Form1::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Silver;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label6->Location = System::Drawing::Point(12, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(111, 24);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Факультет:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Silver;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label7->Location = System::Drawing::Point(12, 245);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 24);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Группа:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Silver;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label8->Location = System::Drawing::Point(12, 304);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(188, 24);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Адрес проживания:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Silver;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label9->Location = System::Drawing::Point(12, 363);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(68, 24);
			this->label9->TabIndex = 19;
			this->label9->Text = L"E-mail:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Silver;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label10->Location = System::Drawing::Point(12, 422);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(167, 24);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Номер телефона:";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Silver;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->label11->Location = System::Drawing::Point(12, 481);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(155, 24);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Дата рождения:";
			// 
			// button1
			// 
			this->buttonStart->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->buttonStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonStart->Location = System::Drawing::Point(162, 625);
			this->buttonStart->Name = L"button1";
			this->buttonStart->Size = System::Drawing::Size(123, 23);
			this->buttonStart->TabIndex = 22;
			this->buttonStart->Text = L"Зарегистрироваться";
			this->buttonStart->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// Cancel
			// 
			this->Cancel->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Cancel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Cancel->Location = System::Drawing::Point(81, 625);
			this->Cancel->Name = L"Cancel";
			this->Cancel->Size = System::Drawing::Size(75, 23);
			this->Cancel->TabIndex = 23;
			this->Cancel->Text = L"Отмена";
			this->Cancel->UseVisualStyleBackColor = false;
			this->Cancel->Click += gcnew System::EventHandler(this, &Form1::Cancel_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(3, 26);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(0, 16);
			this->label12->TabIndex = 0;
			this->label12->Click += gcnew System::EventHandler(this, &Form1::label12_Click);
			// 
			// panel1
			// 
			this->MapField->AutoSize = true;
			this->MapField->BackColor = System::Drawing::SystemColors::Info;
			this->MapField->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MapField->Controls->Add(this->buttonUp);
			this->MapField->Controls->Add(this->label12);
			this->MapField->Location = System::Drawing::Point(46, 245);
			this->MapField->Name = L"panel1";
			this->MapField->Size = System::Drawing::Size(225, 88);
			this->MapField->TabIndex = 25;
			this->MapField->Visible = false;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// button2
			// 
			this->buttonUp->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonUp->Location = System::Drawing::Point(145, 59);
			this->buttonUp->Name = L"button2";
			this->buttonUp->Size = System::Drawing::Size(75, 23);
			this->buttonUp->TabIndex = 1;
			this->buttonUp->Text = L"Ok";
			this->buttonUp->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(297, 660);
			this->Controls->Add(this->MapField);
			this->Controls->Add(this->Cancel);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->MapSize_numericUpDown);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form1";
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->MapField->ResumeLayout(false);
			this->MapField->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MapSize_numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Cancel_Click(System::Object^ sender, System::EventArgs^ e)
	{
		exit(0);
	}
		   void Error(int x)
		   {
			   MapField->Visible = true;
			   switch (x)
			   {
			   case 1:
				   label12->Text = "Ошибка заполнения поля:\nДата рождения";
				   break;
			   case 2:
				   label12->Text = "Ошибка заполнения поля:\nНомер телефона";
				   break;
			   case 3:
				   label12->Text = "Ошибка заполнения поля:\nE-mail";
				   break;
			   case 4:
				   label12->Text = "Ошибка заполнения поля:\nАдрес проживания";
				   break;
			   case 5:
				   label12->Text = "Ошибка заполнения поля:\nГруппа";
				   break;
			   case 6:
				   label12->Text = "Ошибка заполнения поля:\nФакультет";
				   break;
			   case 7:
				   label12->Text = "Ошибка заполнения поля:\nОтчество";
				   break;
			   case 8:
				   label12->Text = "Ошибка заполнения поля:\nФамилия";
				   break;
			   case 9:
				   label12->Text = "Ошибка заполнения поля:\nИмя";
				   break;
			   }

		   }
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if ((maskedTextBox3->Text == ""))
			Error(1);
		else
			if ((maskedTextBox2->Text == ""))
				Error(2);
			else
				if ((maskedTextBox1->Text == ""))
					Error(3);
				else
					if ((textBox6->Text == ""))
						Error(4);
					else
						if ((textBox5->Text == ""))
							Error(5);
						else
							if ((textBox4->Text == ""))
								Error(6);
							else
								if ((textBox3->Text == ""))
									Error(7);
								else
									if ((textBox2->Text == ""))
										Error(8);
									else
										if ((textBox1->Text == ""))
											Error(9);
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e)
	{

	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MapField->Visible = false;
	}
	};


}

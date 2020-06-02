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
	private: System::Windows::Forms::Button^ buttonStart;
	protected:
	private: System::Windows::Forms::Button^ buttonUp;
	private: System::Windows::Forms::Button^ buttonLeft;
	private: System::Windows::Forms::Button^ buttonRight;
	private: System::Windows::Forms::Button^ buttonDown;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;

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
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->buttonStart->Location = System::Drawing::Point(12, 12);
			this->buttonStart->Name = L"button1";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"button1";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// button2
			// 
			this->buttonUp->Location = System::Drawing::Point(12, 41);
			this->buttonUp->Name = L"button2";
			this->buttonUp->Size = System::Drawing::Size(75, 23);
			this->buttonUp->TabIndex = 1;
			this->buttonUp->Text = L"button2";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// button3
			// 
			this->buttonLeft->Location = System::Drawing::Point(12, 70);
			this->buttonLeft->Name = L"button3";
			this->buttonLeft->Size = System::Drawing::Size(75, 23);
			this->buttonLeft->TabIndex = 2;
			this->buttonLeft->Text = L"button3";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->buttonRight->Location = System::Drawing::Point(12, 99);
			this->buttonRight->Name = L"button4";
			this->buttonRight->Size = System::Drawing::Size(75, 23);
			this->buttonRight->TabIndex = 3;
			this->buttonRight->Text = L"button4";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->buttonDown->Location = System::Drawing::Point(12, 128);
			this->buttonDown->Name = L"button5";
			this->buttonDown->Size = System::Drawing::Size(75, 23);
			this->buttonDown->TabIndex = 4;
			this->buttonDown->Text = L"button5";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 157);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 186);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// textBox1
			// 
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(93, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"WPIOAD";
			// 
			// fontDialog1
			// 
			this->fontDialog1->Apply += gcnew System::EventHandler(this, &Form1::FontDialog1_Apply);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(374, 437);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->buttonStart);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/*	Разработать приложение, которое будет содержать на первой форме 7 кнопок
		(5 для работы с классом MessageBox + 1 для работы с классом ColorDialog + 1 для работы с классом FontDialog).
		Так же необходимо на главной форме разместить элемент управления TextBox, в который будут вноситься возвращаемые значения.
		При клике на каждую из кнопок должно выполняться одно из действий:
		Создать диалоговое окно с кнопками "Прервать", "Повторить" и "Пропустить" и иконкой Information,
		Создать диалоговое окно с кнопками "ОК" и "Отмена" и иконкой None,
		Создать диалоговое окно с кнопками "Повторить" и "Отмена" и иконкой Question,
		Создать диалоговое окно с кнопками "Да" и "Нет" и иконкой Stop,
		Создать диалоговое окно с кнопками "Да", "Нет" и "Отмена" и иконкой Warning,
		Создать диалоговые окна для выбора цвета (ColorDialog),
		Создать диалоговые окна для выбора шрифта (FontDialog).*/

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("hello the world", "Caption", MessageBoxButtons::AbortRetryIgnore, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::Abort);
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("hello the world", "Caption", MessageBoxButtons::RetryCancel, MessageBoxIcon::Question);
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("hello the world", "Caption", MessageBoxButtons::YesNo, MessageBoxIcon::Stop);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("hello the world", "Caption", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("hello the world", "Caption", MessageBoxButtons::OKCancel, MessageBoxIcon::None);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		ColorDialog^ MyDialog = gcnew ColorDialog;
		
		MyDialog->AllowFullOpen = false;
		
		MyDialog->ShowHelp = true;
		
		MyDialog->Color = textBox1->ForeColor.Red;
		
		if (MyDialog->ShowDialog() == ::System::Windows::Forms::DialogResult::OK)
		{
			textBox1->ForeColor = MyDialog->Color;
		}

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		fontDialog1->ShowColor = true;

		fontDialog1->Font = textBox1->Font;
		fontDialog1->Color = textBox1->ForeColor;

		if (fontDialog1->ShowDialog() != System::Windows::Forms::DialogResult::Cancel)
		{
			textBox1->Font = fontDialog1->Font;
			textBox1->ForeColor = fontDialog1->Color;
		}
	}
	private: System::Void FontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

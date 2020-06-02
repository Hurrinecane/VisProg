#pragma once
#include <iostream>

/*
Разработать приложение, которое будет содержать на первой форме 7 кнопок 
(5 для работы с классом MessageBox + 1 для работы с классом ColorDialog + 1 для работы с классом FontDialog).
Так же необходимо на главной форме разместить элемент управления TextBox, в который будут вноситься возвращаемые значения.
При клике на каждую из кнопок должно выполняться одно из действий:
Создать диалоговое окно с кнопками "Прервать", "Повторить" и "Пропустить" и иконкой Information,
Создать диалоговое окно с кнопками "ОК" и "Отмена" и иконкой None,
Создать диалоговое окно с кнопками "Повторить" и "Отмена" и иконкой Question,
Создать диалоговое окно с кнопками "Да" и "Нет" и иконкой Stop,
Создать диалоговое окно с кнопками "Да", "Нет" и "Отмена" и иконкой Warning,
Создать диалоговые окна для выбора цвета (ColorDialog),
Создать диалоговые окна для выбора шрифта (FontDialog).

*/

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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

	private: System::Windows::Forms::Button^ button_equals;

	private: System::Windows::Forms::Button^ buttonStart;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button_divide;

	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button_point;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ buttonRight;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button_CE;
	private: System::Windows::Forms::Button^ buttonUp;
	private: System::Windows::Forms::Button^ button_change_sign_;
	private: System::Windows::Forms::Button^ buttonLeft;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ buttonDown;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button_percent;
	private: System::Windows::Forms::Button^ button_multiply;
	private: System::Windows::Forms::Button^ Root;
	private: System::Windows::Forms::TextBox^ Display;
	private: System::Windows::Forms::TextBox^ Display2;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;



	private: char operation = 0;
	private: double savedValue = NULL;

	protected:



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
			this->button_equals = (gcnew System::Windows::Forms::Button());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->buttonRight = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_CE = (gcnew System::Windows::Forms::Button());
			this->buttonUp = (gcnew System::Windows::Forms::Button());
			this->button_change_sign_ = (gcnew System::Windows::Forms::Button());
			this->buttonLeft = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->buttonDown = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_multiply = (gcnew System::Windows::Forms::Button());
			this->Root = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::TextBox());
			this->Display2 = (gcnew System::Windows::Forms::TextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_equals
			// 
			this->button_equals->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_equals->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_equals->Location = System::Drawing::Point(238, 239);
			this->button_equals->Name = L"button_equals";
			this->button_equals->Size = System::Drawing::Size(50, 86);
			this->button_equals->TabIndex = 17;
			this->button_equals->Text = L"=";
			this->button_equals->UseVisualStyleBackColor = true;
			this->button_equals->Click += gcnew System::EventHandler(this, &Form1::button_equals_Click);
			// 
			// button1
			// 
			this->buttonStart->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonStart->Location = System::Drawing::Point(13, 239);
			this->buttonStart->Name = L"button1";
			this->buttonStart->Size = System::Drawing::Size(50, 40);
			this->buttonStart->TabIndex = 1;
			this->buttonStart->Text = L"1";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// button21
			// 
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(125, 101);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(50, 40);
			this->button21->TabIndex = 22;
			this->button21->Text = L"C";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button_C_Click);
			// 
			// button23
			// 
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(13, 101);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(50, 40);
			this->button23->TabIndex = 20;
			this->button23->Text = L"←";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Form1::button_backspace_Click);
			// 
			// button_divide
			// 
			this->button_divide->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_divide->Location = System::Drawing::Point(181, 147);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(50, 40);
			this->button_divide->TabIndex = 14;
			this->button_divide->Text = L"/";
			this->button_divide->UseVisualStyleBackColor = true;
			this->button_divide->Click += gcnew System::EventHandler(this, &Form1::button_divide_Click);
			// 
			// button_plus
			// 
			this->button_plus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_plus->Location = System::Drawing::Point(181, 285);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(50, 40);
			this->button_plus->TabIndex = 15;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &Form1::button_plus_Click);
			// 
			// button_point
			// 
			this->button_point->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_point->Location = System::Drawing::Point(125, 285);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(50, 40);
			this->button_point->TabIndex = 11;
			this->button_point->Text = L",";
			this->button_point->UseVisualStyleBackColor = true;
			this->button_point->Click += gcnew System::EventHandler(this, &Form1::button_point_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(125, 147);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 40);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button17
			// 
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(237, 193);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(50, 40);
			this->button17->TabIndex = 18;
			this->button17->Text = L"1/x";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button_1x_Click);
			// 
			// button4
			// 
			this->buttonRight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonRight->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonRight->Location = System::Drawing::Point(13, 193);
			this->buttonRight->Name = L"button4";
			this->buttonRight->Size = System::Drawing::Size(50, 40);
			this->buttonRight->TabIndex = 4;
			this->buttonRight->Text = L"4";
			this->buttonRight->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button_minus
			// 
			this->button_minus->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_minus->Location = System::Drawing::Point(181, 239);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(50, 40);
			this->button_minus->TabIndex = 12;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &Form1::button_minus_Click);
			// 
			// button_CE
			// 
			this->button_CE->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_CE->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_CE->Location = System::Drawing::Point(69, 101);
			this->button_CE->Name = L"button_CE";
			this->button_CE->Size = System::Drawing::Size(50, 40);
			this->button_CE->TabIndex = 21;
			this->button_CE->Text = L"CE";
			this->button_CE->UseVisualStyleBackColor = true;
			this->button_CE->Click += gcnew System::EventHandler(this, &Form1::button_CE_Click);
			// 
			// button2
			// 
			this->buttonUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonUp->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonUp->Location = System::Drawing::Point(69, 239);
			this->buttonUp->Name = L"button2";
			this->buttonUp->Size = System::Drawing::Size(50, 40);
			this->buttonUp->TabIndex = 2;
			this->buttonUp->Text = L"2";
			this->buttonUp->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// button_change_sign_
			// 
			this->button_change_sign_->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_change_sign_->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_change_sign_->Location = System::Drawing::Point(181, 101);
			this->button_change_sign_->Name = L"button_change_sign_";
			this->button_change_sign_->Size = System::Drawing::Size(50, 40);
			this->button_change_sign_->TabIndex = 23;
			this->button_change_sign_->Text = L"±";
			this->button_change_sign_->UseVisualStyleBackColor = true;
			this->button_change_sign_->Click += gcnew System::EventHandler(this, &Form1::button_change_sign_Click);
			// 
			// button3
			// 
			this->buttonLeft->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonLeft->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonLeft->Location = System::Drawing::Point(125, 239);
			this->buttonLeft->Name = L"button3";
			this->buttonLeft->Size = System::Drawing::Size(50, 40);
			this->buttonLeft->TabIndex = 3;
			this->buttonLeft->Text = L"3";
			this->buttonLeft->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(69, 147);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button5
			// 
			this->buttonDown->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDown->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonDown->Location = System::Drawing::Point(69, 193);
			this->buttonDown->Name = L"button5";
			this->buttonDown->Size = System::Drawing::Size(50, 40);
			this->buttonDown->TabIndex = 5;
			this->buttonDown->Text = L"5";
			this->buttonDown->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button0
			// 
			this->button0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button0->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(13, 285);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(106, 40);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(125, 193);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(13, 147);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 40);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button_percent
			// 
			this->button_percent->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_percent->Location = System::Drawing::Point(237, 147);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(50, 40);
			this->button_percent->TabIndex = 19;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = true;
			this->button_percent->Click += gcnew System::EventHandler(this, &Form1::button_percent_Click);
			// 
			// button_multiply
			// 
			this->button_multiply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_multiply->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button_multiply->Location = System::Drawing::Point(181, 193);
			this->button_multiply->Name = L"button_multiply";
			this->button_multiply->Size = System::Drawing::Size(50, 40);
			this->button_multiply->TabIndex = 13;
			this->button_multiply->Text = L"*";
			this->button_multiply->UseVisualStyleBackColor = true;
			this->button_multiply->Click += gcnew System::EventHandler(this, &Form1::button_multiply_Click);
			// 
			// Root
			// 
			this->Root->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Root->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Root->Location = System::Drawing::Point(237, 101);
			this->Root->Name = L"Root";
			this->Root->Size = System::Drawing::Size(50, 40);
			this->Root->TabIndex = 24;
			this->Root->Text = L"√";
			this->Root->UseVisualStyleBackColor = true;
			this->Root->Click += gcnew System::EventHandler(this, &Form1::button_root_Click);
			// 
			// Display
			// 
			this->Display->BackColor = System::Drawing::SystemColors::Window;
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Display->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Display->Location = System::Drawing::Point(13, 38);
			this->Display->MaxLength = 25;
			this->Display->Name = L"Display";
			this->Display->ReadOnly = true;
			this->Display->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Display->Size = System::Drawing::Size(274, 23);
			this->Display->TabIndex = 25;
			this->Display->Text = L"0";
			this->Display->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->Display->TextChanged += gcnew System::EventHandler(this, &Form1::Display_TextChanged);
			// 
			// Display2
			// 
			this->Display2->BackColor = System::Drawing::SystemColors::Window;
			this->Display2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Display2->Font = (gcnew System::Drawing::Font(L"Consolas", 12.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->Display2->Location = System::Drawing::Point(13, 21);
			this->Display2->MaxLength = 25;
			this->Display2->Name = L"Display2";
			this->Display2->ReadOnly = true;
			this->Display2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Display2->Size = System::Drawing::Size(274, 20);
			this->Display2->TabIndex = 27;
			this->Display2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(237, 67);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 27);
			this->button10->TabIndex = 32;
			this->button10->Text = L"M-";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::Button_Mminus_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(181, 67);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(50, 27);
			this->button11->TabIndex = 31;
			this->button11->Text = L"M+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::Button_Mplus_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(125, 67);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(50, 27);
			this->button12->TabIndex = 30;
			this->button12->Text = L"MS";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::ButtonMS_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(69, 67);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(50, 27);
			this->button13->TabIndex = 29;
			this->button13->Text = L"MR";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::Button_MR_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Consolas", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(13, 67);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(50, 27);
			this->button14->TabIndex = 28;
			this->button14->Text = L"MC";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::Button_MC_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 337);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->Display2);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->Root);
			this->Controls->Add(this->button_change_sign_);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button_CE);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button_equals);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_multiply);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->buttonDown);
			this->Controls->Add(this->buttonRight);
			this->Controls->Add(this->buttonLeft);
			this->Controls->Add(this->buttonUp);
			this->Controls->Add(this->buttonStart);
			this->Name = L"Form1";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button0_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 0;
	}
	private: System::Void buttonStart_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 1;
			else this->Display->Text = "1";
	}
	private: System::Void Start_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 2;
			else this->Display->Text = "2";
	}
	private: System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 3;
			else this->Display->Text = "3";
	}
	private: System::Void button4_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 4;
			else this->Display->Text = "4";
	}
	private: System::Void button5_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 5;
			else this->Display->Text = "5";
	}
	private: System::Void button6_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 6;
			else this->Display->Text = "6";
	}
	private: System::Void button7_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 7;
			else this->Display->Text = "7";
	}
	private: System::Void button8_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 8;
			else this->Display->Text = "8";
	}
	private: System::Void button9_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length < 25)
			if (this->Display->Text != "0") this->Display->Text += 9;
			else this->Display->Text = "9";
	}
	private: System::Void button_point_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (this->Display->Text->CompareTo(",")) this->Display->Text += ",";
	}
	private: System::Void button_plus_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			if (Display2->Text != "")
				Display2->Text = Convert::ToString(Convert::ToDouble(Display2->Text) + Convert::ToDouble(Display->Text));
			else
				Display2->Text = Display->Text;
		operation = '+';
		Display->Text = "0";
	}
	private: System::Void button_minus_Click(System::Object ^ sender, System::EventArgs ^ e) {
		//if (Display->Text != "0")
		if (Display2->Text != "")
			Display2->Text = Convert::ToString(Convert::ToDouble(Display2->Text) - Convert::ToDouble(Display->Text));
		else
			Display2->Text = Display->Text;
		operation = '-';
		Display->Text = "0";
	}
	private: System::Void button_divide_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			if (Display2->Text != "")
				Display2->Text = Convert::ToString(Convert::ToDouble(Display2->Text) / Convert::ToDouble(Display->Text));
			else
				Display2->Text = Display->Text;
		operation = '/';
		Display->Text = "0";
	}
	private: System::Void button_multiply_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			if (Display2->Text != "")
				Display2->Text = Convert::ToString(Convert::ToDouble(Display2->Text) * Convert::ToDouble(Display->Text));
			else
				Display2->Text = Display->Text;
		operation = '*';
		Display->Text = "0";
	}
	private: System::Void button_percent_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			if (Display2->Text != "")
				Display2->Text = Convert::ToString(Convert::ToDouble(Display2->Text) * Convert::ToDouble(Display->Text) / 100);
			else
				Display2->Text = Display->Text;
		operation = '%';
		Display->Text = "0";
	}
	private: System::Void button_1x_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			Display->Text = Convert::ToString(1 / Convert::ToDouble(Display->Text));
	}
	private: System::Void button_equals_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display2->Text != "")
			switch (operation)
			{
			case '+':
				Display->Text = Convert::ToString(Convert::ToDouble(Display2->Text) + Convert::ToDouble(Display->Text));
				Display2->Text = "";
				break;
			case '-':
				Display->Text = Convert::ToString(Convert::ToDouble(Display2->Text) - Convert::ToDouble(Display->Text));
				Display2->Text = "";
				break;
			case '/':
				if (Display->Text != "0")
				{
					Display->Text = Convert::ToString(Convert::ToDouble(Display2->Text) / Convert::ToDouble(Display->Text));
					Display2->Text = "";
				}
				break;
			case '*':
				Display->Text = Convert::ToString(Convert::ToDouble(Display2->Text) * Convert::ToDouble(Display->Text));
				Display2->Text = "";
				break;
			case '%':
				Display->Text = Convert::ToString(Convert::ToDouble(Display2->Text) * Convert::ToDouble(Display->Text) / 100);
				Display2->Text = "";
				break;
			}
	}
	private: System::Void button_root_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Display->Text = Convert::ToString(sqrt(Convert::ToDouble(Display->Text)));
	}
	private: System::Void button_change_sign_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text != "0")
			Display->Text = Convert::ToString(- Convert::ToDouble(Display->Text));
	}
	private: System::Void button_C_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Display->Text = "0";
		Display2->Text = "";
	}
	private: System::Void button_CE_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Display->Text = "0";
	}
	private: System::Void button_backspace_Click(System::Object ^ sender, System::EventArgs ^ e) {
		if (Display->Text->Length == 1) Display->Text = "0";
		if (Display->Text->Length > 1)  Display->Text = Display->Text->Remove(Display->Text->Length - 1);
	}
	private: System::Void Display_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Form1_Load(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Button_MC_Click(System::Object ^ sender, System::EventArgs ^ e) {
		savedValue = 0;
	}
	private: System::Void Button_MR_Click(System::Object ^ sender, System::EventArgs ^ e) {
		Display->Text = Convert::ToString(savedValue);
	}
	private: System::Void ButtonMS_Click(System::Object ^ sender, System::EventArgs ^ e) {
		savedValue = Convert::ToDouble(Display->Text);
			}
	private: System::Void Button_Mplus_Click(System::Object ^ sender, System::EventArgs ^ e) {
		savedValue = savedValue + Convert::ToDouble(Display->Text);
	}
	private: System::Void Button_Mminus_Click(System::Object ^ sender, System::EventArgs ^ e) {
		savedValue = savedValue - Convert::ToDouble(Display->Text);

	}
	};
}
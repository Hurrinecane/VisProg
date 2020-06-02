#pragma once

#include <cstdlib>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
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
	private: System::Windows::Forms::NumericUpDown^ MapSize_numericUpDown;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ MapField;
	private: System::Windows::Forms::Button^ Red;

	private: System::Windows::Forms::Button^ Blue;

	private: System::Windows::Forms::Button^ Purple;


	private: System::Windows::Forms::Panel^ ContronField;
	private: System::Windows::Forms::Label^ Timer;

	private: System::Windows::Forms::Button^ Start_button;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;




	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->MapSize_numericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->MapField = (gcnew System::Windows::Forms::Panel());
			this->Start_button = (gcnew System::Windows::Forms::Button());
			this->Red = (gcnew System::Windows::Forms::Button());
			this->Blue = (gcnew System::Windows::Forms::Button());
			this->Purple = (gcnew System::Windows::Forms::Button());
			this->ContronField = (gcnew System::Windows::Forms::Panel());
			this->Timer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->BeginInit();
			this->MapField->SuspendLayout();
			this->ContronField->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->MapSize_numericUpDown->Location = System::Drawing::Point(12, 12);
			this->MapSize_numericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->MapSize_numericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->MapSize_numericUpDown->Name = L"numericUpDown1";
			this->MapSize_numericUpDown->ReadOnly = true;
			this->MapSize_numericUpDown->Size = System::Drawing::Size(47, 20);
			this->MapSize_numericUpDown->TabIndex = 0;
			this->MapSize_numericUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->MapSize_numericUpDown->ValueChanged += gcnew System::EventHandler(this, &Form1::MapSize_numericUpDown_ValueChanged);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(67, 12);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(205, 20);
			this->progressBar1->TabIndex = 50;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// panel1
			// 
			this->MapField->BackColor = System::Drawing::Color::DarkGreen;
			this->MapField->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->MapField->Controls->Add(this->Start_button);
			this->MapField->Controls->Add(this->Red);
			this->MapField->Controls->Add(this->Blue);
			this->MapField->Controls->Add(this->Purple);
			this->MapField->Location = System::Drawing::Point(37, 21);
			this->MapField->Name = L"panel1";
			this->MapField->Size = System::Drawing::Size(164, 52);
			this->MapField->TabIndex = 2;
			this->MapField->MouseEnter += gcnew System::EventHandler(this, &Form1::Panel2);
			// 
			// Start_button
			// 
			this->Start_button->BackColor = System::Drawing::Color::SandyBrown;
			this->Start_button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Start_button->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Start_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start_button->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Start_button->ForeColor = System::Drawing::Color::DarkRed;
			this->Start_button->Location = System::Drawing::Point(0, 0);
			this->Start_button->Name = L"Start_button";
			this->Start_button->Size = System::Drawing::Size(160, 48);
			this->Start_button->TabIndex = 5;
			this->Start_button->Text = L"Íà÷àòü èãðó";
			this->Start_button->TextImageRelation = System::Windows::Forms::TextImageRelation::TextAboveImage;
			this->Start_button->UseVisualStyleBackColor = false;
			this->Start_button->Click += gcnew System::EventHandler(this, &Form1::Start_Click);
			// 
			// Red
			// 
			this->Red->BackColor = System::Drawing::Color::Red;
			this->Red->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Red->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Red->Enabled = false;
			this->Red->FlatAppearance->BorderSize = 0;
			this->Red->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Red->Location = System::Drawing::Point(-2, 3);
			this->Red->Name = L"Red";
			this->Red->Size = System::Drawing::Size(159, 10);
			this->Red->TabIndex = 4;
			this->Red->UseVisualStyleBackColor = false;
			this->Red->Visible = false;
			this->Red->Click += gcnew System::EventHandler(this, &Form1::Red_Click);
			this->Red->MouseHover += gcnew System::EventHandler(this, &Form1::RedWin);
			// 
			// Blue
			// 
			this->Blue->BackColor = System::Drawing::Color::RoyalBlue;
			this->Blue->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Blue->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Blue->FlatAppearance->BorderSize = 0;
			this->Blue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Blue->Location = System::Drawing::Point(-2, 19);
			this->Blue->Name = L"Blue";
			this->Blue->Size = System::Drawing::Size(159, 10);
			this->Blue->TabIndex = 3;
			this->Blue->UseVisualStyleBackColor = false;
			this->Blue->Click += gcnew System::EventHandler(this, &Form1::Blue_Click);
			this->Blue->MouseHover += gcnew System::EventHandler(this, &Form1::BlueWin);
			// 
			// Purple
			// 
			this->Purple->BackColor = System::Drawing::Color::Purple;
			this->Purple->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->Purple->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Purple->Enabled = false;
			this->Purple->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Purple->Location = System::Drawing::Point(-2, 35);
			this->Purple->Name = L"Purple";
			this->Purple->Size = System::Drawing::Size(159, 10);
			this->Purple->TabIndex = 0;
			this->Purple->UseVisualStyleBackColor = false;
			this->Purple->Visible = false;
			this->Purple->Click += gcnew System::EventHandler(this, &Form1::Purple_Click);
			this->Purple->MouseEnter += gcnew System::EventHandler(this, &Form1::PurpleWin);
			this->Purple->MouseHover += gcnew System::EventHandler(this, &Form1::PurpleWin);
			// 
			// panel2
			// 
			this->ContronField->BackColor = System::Drawing::Color::SandyBrown;
			this->ContronField->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ContronField->Controls->Add(this->Timer);
			this->ContronField->Controls->Add(this->MapField);
			this->ContronField->Location = System::Drawing::Point(12, 149);
			this->ContronField->Name = L"panel2";
			this->ContronField->Size = System::Drawing::Size(260, 100);
			this->ContronField->TabIndex = 3;
			// 
			// Timer
			// 
			this->Timer->BackColor = System::Drawing::Color::Black;
			this->Timer->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->Timer->ForeColor = System::Drawing::Color::DarkRed;
			this->Timer->Location = System::Drawing::Point(207, 35);
			this->Timer->Name = L"Timer";
			this->Timer->Size = System::Drawing::Size(46, 20);
			this->Timer->TabIndex = 4;
			this->Timer->Text = L"00:00";
			this->Timer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::DarkRed;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Script", 26.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 57);
			this->label1->TabIndex = 4;
			this->label1->Text = L"ÁÀÄÀÁÓÌ!!!";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LawnGreen;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Script", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::RoyalBlue;
			this->label2->Location = System::Drawing::Point(16, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 34);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Áîìáà îáåçâðåæåíà!";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ContronField);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->MapSize_numericUpDown);
			this->ForeColor = System::Drawing::Color::Transparent;
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->MapSize_numericUpDown))->EndInit();
			this->MapField->ResumeLayout(false);
			this->ContronField->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int time = 5;
		int win_wire;
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {

		switch (rand() % (int)MapSize_numericUpDown->Value)
		{
		case 0:
			win_wire = 1;
			break;
		case 1:
			win_wire = 2;
			break;
		case 2:
			win_wire = 3;
			break;
		}

		BackColor = System::Drawing::Color::SandyBrown;
		label1->Visible = false;
		label2->Visible = false;
		time = 5;
		Timer->Text = "00:05";
		Start_button->Visible = false;
		timer1->Interval = 1000;
		timer1->Start();
	}
	private: System::Void MapSize_numericUpDown_ValueChanged(System::Object^ sender, System::EventArgs^ e)
	{

		time = 5;
		timer1->Stop();
		Start_button->Visible = true;
		label1->Visible = false;
		label2->Visible = false;
		Timer->Text = "00:00";

		if (MapSize_numericUpDown->Value == 1)
		{

			Red->Enabled = false;
			Red->Visible = false;
			Blue->Enabled = true;
			Blue->Visible = true;
			Purple->Enabled = false;
			Purple->Visible = false;
		}
		if (MapSize_numericUpDown->Value == 2)
		{
			Red->Enabled = false;
			Red->Visible = false;
			Blue->Enabled = true;
			Blue->Visible = true;
			Purple->Enabled = true;
			Purple->Visible = true;
		}
		if (MapSize_numericUpDown->Value == 3)
		{
			Red->Enabled = true;
			Red->Visible = true;
			Blue->Enabled = true;
			Blue->Visible = true;
			Purple->Enabled = true;
			Purple->Visible = true;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e)
	{
		time--;
		if (time < 0)
		{
			timer1->Stop();
			time = 0;
			BackColor = System::Drawing::Color::DarkRed;
			label1->Visible = true;
			label2->Visible = false;
			Start_button->Visible = true;
			return;
		}
		Timer->Text = "00:0" + time;

	}
	private: System::Void Red_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Start_button->Visible == false)
		{
			if (win_wire == 3)
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::LawnGreen;
				label2->Visible = true;
				Start_button->Visible = true;
			}
			else
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::DarkRed;
				label1->Visible = true;
				Start_button->Visible = true;
				return;
			}
		}
	}
	private: System::Void Blue_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Start_button->Visible == false)
		{
			if (win_wire == 1)
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::LawnGreen;
				label2->Visible = true;
				Start_button->Visible = true;
			}
			else
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::DarkRed;
				label1->Visible = true;
				Start_button->Visible = true;
				return;
			}
		}
	}
	private: System::Void Purple_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Start_button->Visible == false)
		{
			if (win_wire == 2)
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::LawnGreen;
				label2->Visible = true;
				Start_button->Visible = true;
			}
			else
			{
				timer1->Stop();
				time = 0;
				BackColor = System::Drawing::Color::DarkRed;
				label1->Visible = true;
				Start_button->Visible = true;
				return;
			}
		}
	}

		   void Panel2(System::Object^ sender, System::EventArgs^ e)
		   {
			   progressBar1->Value = 0;
		   }
		   void RedWin(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (win_wire == 3) progressBar1->Value = 100;
		   }
		   void PurpleWin(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (win_wire == 2) progressBar1->Value = 100;
		   }
		   void BlueWin(System::Object^ sender, System::EventArgs^ e)
		   {
			   if (win_wire == 1) progressBar1->Value = 100;
		   }
	};
}
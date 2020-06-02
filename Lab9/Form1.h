#pragma once

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DomainUpDown^ domainUpDown2;







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->domainUpDown1 = (gcnew System::Windows::Forms::DomainUpDown());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->domainUpDown2 = (gcnew System::Windows::Forms::DomainUpDown());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(265, 237);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->domainUpDown1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(257, 211);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Âêëàäî÷êà 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(130, 7);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"Ãðóïïà";
			// 
			// domainUpDown1
			// 
			this->domainUpDown1->Items->Add(L"ÌÒÔ");
			this->domainUpDown1->Items->Add(L"ÓÍÒÈ");
			this->domainUpDown1->Items->Add(L"ÔÈÒ");
			this->domainUpDown1->Location = System::Drawing::Point(4, 7);
			this->domainUpDown1->Name = L"domainUpDown1";
			this->domainUpDown1->Size = System::Drawing::Size(120, 20);
			this->domainUpDown1->TabIndex = 0;
			this->domainUpDown1->Text = L"Ôàêóëüòåò";
			this->domainUpDown1->SelectedItemChanged += gcnew System::EventHandler(this, &Form1::domainUpDown1_SelectedItemChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->comboBox2);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->domainUpDown2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(257, 211);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Âêëàäî÷êà 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(129, 7);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->Text = L"Ãðóïïà";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox2_SelectedIndexChanged);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 33);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(120, 95);
			this->listBox1->TabIndex = 1;
			// 
			// domainUpDown2
			// 
			this->domainUpDown2->Items->Add(L"ÌÒÔ");
			this->domainUpDown2->Items->Add(L"ÓÍÒÈ");
			this->domainUpDown2->Items->Add(L"ÔÈÒ");
			this->domainUpDown2->Location = System::Drawing::Point(3, 7);
			this->domainUpDown2->Name = L"domainUpDown2";
			this->domainUpDown2->Size = System::Drawing::Size(120, 20);
			this->domainUpDown2->TabIndex = 0;
			this->domainUpDown2->Text = L"Ôàêóëüòåò";
			this->domainUpDown2->SelectedItemChanged += gcnew System::EventHandler(this, &Form1::domainUpDown2_SelectedItemChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(302, 261);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Form1";
			this->Text = L"Ôîðìî÷êà";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion	

	private: System::Void domainUpDown1_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (domainUpDown1->Text == "ÔÈÒ")
		{
			comboBox1->Items->Clear();
			comboBox1->Text = "Ãðóïïà";
			comboBox1->Items->Add(L"18-ÈÂÒ");
			comboBox1->Items->Add(L"18-ÏÐÈ");
			comboBox1->Items->Add(L"18-ÌÎÀ");
		}

		if (domainUpDown1->Text == "ÓÍÒÈ")
		{
			comboBox1->Items->Clear();
			comboBox1->Text = "Ãðóïïà";
			comboBox1->Items->Add("18-ÀÒÑ");
			comboBox1->Items->Add("18-ÌÑÈ");
			comboBox1->Items->Add("18-ÒÌ");
		}

		if (domainUpDown1->Text == "ÌÒÔ")
		{
			comboBox1->Items->Clear();
			comboBox1->Text = "Ãðóïïà";
			comboBox1->Items->Add("18-ÔÂÑ");
			comboBox1->Items->Add("18-ÁÆÕ");
			comboBox1->Items->Add("18-ÒÌèÒÌ");
		}
	}
	private: System::Void domainUpDown2_SelectedItemChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (domainUpDown2->Text == "ÔÈÒ")
		{
			comboBox2->Items->Clear();
			comboBox2->Text = "Ãðóïïà";
			listBox1->Items->Clear();
			comboBox2->Items->Add(L"18-ÈÂÒ");
			comboBox2->Items->Add(L"18-ÏÐÈ");
			comboBox2->Items->Add(L"18-ÌÎÀ");
		}

		if (domainUpDown2->Text == "ÓÍÒÈ")
		{
			comboBox2->Items->Clear();
			comboBox2->Text = "Ãðóïïà";
			listBox1->Items->Clear();
			comboBox2->Items->Add("18-ÀÒÑ");
			comboBox2->Items->Add("18-ÌÑÈ");
			comboBox2->Items->Add("18-ÒÌ");
		}

		if (domainUpDown2->Text == "ÌÒÔ")
		{
			comboBox2->Items->Clear();
			comboBox2->Text = "Ãðóïïà";
			listBox1->Items->Clear();
			comboBox2->Items->Add("18-ÔÂÑ");
			comboBox2->Items->Add("18-ÁÆÕ");
			comboBox2->Items->Add("18-ÒÌèÒÌ");
		}
	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox2->Text == "18-ÈÂÒ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"Ïðåäìåò 1");
			listBox1->Items->Add(L"Ïðåäìåò 2");
			listBox1->Items->Add(L"Ïðåäìåò 3");
		}
		if (comboBox2->Text == "18-ÏÐÈ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"Ïðåäìåò 11");
			listBox1->Items->Add(L"Ïðåäìåò 22");
			listBox1->Items->Add(L"Ïðåäìåò 33");
		}
		if (comboBox2->Text == "18-ÌÎÀ")
		{
			listBox1->Items->Clear();
			listBox1->Items->Add(L"Ïðåäìåò 111");
			listBox1->Items->Add(L"Ïðåäìåò 222");
			listBox1->Items->Add(L"Ïðåäìåò 333");
		}
		if (comboBox2->Text == "18-ÀÒÑ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"Íå Ïðåäìåò 1");
			listBox1->Items->Add(L"Íå Ïðåäìåò 2");
			listBox1->Items->Add(L"Íå Ïðåäìåò 3");
		}
		if (comboBox2->Text == "18-ÌÑÈ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"Íå Ïðåäìåò 11");
			listBox1->Items->Add(L"Íå Ïðåäìåò 22");
			listBox1->Items->Add(L"Íå Ïðåäìåò 33");
		}
		if (comboBox2->Text == "18-ÒÌ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"Íå Ïðåäìåò 111");
			listBox1->Items->Add(L"Íå Ïðåäìåò 222");
			listBox1->Items->Add(L"Íå Ïðåäìåò 333");
		}
		if (comboBox2->Text == "18-ÔÂÑ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"ÔÂÑ 1");
			listBox1->Items->Add(L"ÔÂÑ 2");
			listBox1->Items->Add(L"ÔÂÑ 3");
		}
		if (comboBox2->Text == "18-ÁÆÕ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"ÁÆÕ 11");
			listBox1->Items->Add(L"ÁÆÕ 22");
			listBox1->Items->Add(L"ÁÆÕ 33");
		}
		if (comboBox2->Text == "18-ÒÌèÒÌ")
		{
			listBox1->Items->Clear();
			listBox1->Text = "";
			listBox1->Items->Add(L"ÒÌèÒÌ");
			listBox1->Items->Add(L"ÒÌèÒÌ 222");
			listBox1->Items->Add(L"ÒÌèÒÌ 333");
		}
	}
	};
}

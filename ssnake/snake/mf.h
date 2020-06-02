#pragma once

namespace snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mf
	/// </summary>
	public ref class mf : public System::Windows::Forms::Form
	{
	public:
		mf(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up all resources being used.
		/// </summary>
		~mf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ cwidth;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel3;
	private: System::Windows::Forms::ToolStripStatusLabel^ cheight;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel5;
	private: System::Windows::Forms::ToolStripStatusLabel^ score;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel7;
	private: System::Windows::Forms::ToolStripStatusLabel^ speed;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::ToolStripStatusLabel^ lmouse;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel4;
	private: System::Windows::Forms::ToolStripStatusLabel^ ldir;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designed variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->cwidth = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel3 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->cheight = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel5 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->score = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel7 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->speed = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->lmouse = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel4 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->ldir = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &mf::tick);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::White;
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(12) {
				this->toolStripStatusLabel1,
					this->cwidth, this->toolStripStatusLabel3, this->cheight, this->toolStripStatusLabel5, this->score, this->toolStripStatusLabel7,
					this->speed, this->toolStripStatusLabel2, this->lmouse, this->toolStripStatusLabel4, this->ldir
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 371);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(620, 22);
			this->statusStrip1->TabIndex = 0;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(42, 17);
			this->toolStripStatusLabel1->Text = L"Width:";
			// 
			// cwidth
			// 
			this->cwidth->BackColor = System::Drawing::SystemColors::Control;
			this->cwidth->Name = L"cwidth";
			this->cwidth->Size = System::Drawing::Size(13, 17);
			this->cwidth->Text = L"1";
			// 
			// toolStripStatusLabel3
			// 
			this->toolStripStatusLabel3->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel3->Name = L"toolStripStatusLabel3";
			this->toolStripStatusLabel3->Size = System::Drawing::Size(46, 17);
			this->toolStripStatusLabel3->Text = L"Height:";
			// 
			// cheight
			// 
			this->cheight->BackColor = System::Drawing::SystemColors::Control;
			this->cheight->Name = L"cheight";
			this->cheight->Size = System::Drawing::Size(13, 17);
			this->cheight->Text = L"1";
			// 
			// toolStripStatusLabel5
			// 
			this->toolStripStatusLabel5->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel5->Name = L"toolStripStatusLabel5";
			this->toolStripStatusLabel5->Size = System::Drawing::Size(39, 17);
			this->toolStripStatusLabel5->Text = L"Score:";
			// 
			// score
			// 
			this->score->BackColor = System::Drawing::SystemColors::Control;
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(13, 17);
			this->score->Text = L"0";
			// 
			// toolStripStatusLabel7
			// 
			this->toolStripStatusLabel7->BackColor = System::Drawing::SystemColors::Control;
			this->toolStripStatusLabel7->Name = L"toolStripStatusLabel7";
			this->toolStripStatusLabel7->Size = System::Drawing::Size(42, 17);
			this->toolStripStatusLabel7->Text = L"Speed:";
			// 
			// speed
			// 
			this->speed->BackColor = System::Drawing::SystemColors::Control;
			this->speed->Name = L"speed";
			this->speed->Size = System::Drawing::Size(13, 17);
			this->speed->Text = L"1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(46, 17);
			this->toolStripStatusLabel2->Text = L"Mouse:";
			// 
			// lmouse
			// 
			this->lmouse->Name = L"lmouse";
			this->lmouse->Size = System::Drawing::Size(33, 17);
			this->lmouse->Text = L"False";
			// 
			// toolStripStatusLabel4
			// 
			this->toolStripStatusLabel4->Name = L"toolStripStatusLabel4";
			this->toolStripStatusLabel4->Size = System::Drawing::Size(58, 17);
			this->toolStripStatusLabel4->Text = L"Direction:";
			// 
			// ldir
			// 
			this->ldir->Name = L"ldir";
			this->ldir->Size = System::Drawing::Size(0, 17);
			// 
			// mf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(620, 393);
			this->Controls->Add(this->statusStrip1);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"mf";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Snake";
			this->Load += gcnew System::EventHandler(this, &mf::mf_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &mf::resize);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &mf::paint);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &mf::key_up);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &mf::mouse_move);
			this->Resize += gcnew System::EventHandler(this, &mf::resize_ref);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: void mf_Load(System::Object^ sender, System::EventArgs^ e);
	private: void paint(Object^ sender, PaintEventArgs^ e);
	private: void tick(Object^ sender, EventArgs^ e);
	private: void key_up(Object^ sender, KeyEventArgs^ e);
	private: void resize(Object^ sender, EventArgs^ e);
	private: void resize_ref(Object^ sender, EventArgs^ e);
	private: void mouse_move(Object^ sender, MouseEventArgs^ e);

	private: int SmartRandom(int min, int max, int multiplier);
	private: void checkCollision();
	private: void placeApple();
	private: void newGame();
	private: void gameOver();
	private: void findPath(int x, int y);

	private: Byte dir; //0 - left, 1 - up, 2 - right, 3 - down
	private: List<Point>^ snake = gcnew List<Point>();
	private: List<int>^ moves = gcnew List<int>(3);
	private: int distance = 2;
	private: int step = 10;
	private: int stp = step + distance;
	private: Pen^ pen = gcnew Pen(Color::Blue);
	private: Pen^ iPen = gcnew Pen(Color::LimeGreen);
	private: Random^ rnd = gcnew Random();
	private: Point apple;
	private: int vscore = 0;
	private: int vspeed = 1;
	private: bool game_over = false;
	private: bool mouse = false;
	private: bool filled = false;
	private: List<Point>^ path = gcnew List<Point>();

	};

	public enum class Directions {
		Left, Up, Right, Down
	};
}
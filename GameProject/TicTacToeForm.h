#pragma once

namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for TicTacToeForm
	/// </summary>
	public ref class TicTacToeForm : public System::Windows::Forms::Form
	{
	public:
		TicTacToeForm(void)
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
		~TicTacToeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnTic9;
	private: System::Windows::Forms::Button^ btnTic8;
	private: System::Windows::Forms::Button^ btnTic7;
	private: System::Windows::Forms::Button^ btnTic6;
	private: System::Windows::Forms::Button^ btnTic5;
	private: System::Windows::Forms::Button^ btnTic4;
	private: System::Windows::Forms::Button^ btnTic3;
	private: System::Windows::Forms::Button^ btnTic2;
	private: System::Windows::Forms::Button^ btnTic1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ lblPlayerO;
	private: System::Windows::Forms::Label^ lblPlayerX;
	private: System::Windows::Forms::Label^ PlayerO;

	private: System::Windows::Forms::Button^ btnNewGame;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ PLayerX;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TicTacToeForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->btnTic9 = (gcnew System::Windows::Forms::Button());
			this->btnTic8 = (gcnew System::Windows::Forms::Button());
			this->btnTic7 = (gcnew System::Windows::Forms::Button());
			this->btnTic6 = (gcnew System::Windows::Forms::Button());
			this->btnTic5 = (gcnew System::Windows::Forms::Button());
			this->btnTic4 = (gcnew System::Windows::Forms::Button());
			this->btnTic3 = (gcnew System::Windows::Forms::Button());
			this->btnTic2 = (gcnew System::Windows::Forms::Button());
			this->btnTic1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->lblPlayerO = (gcnew System::Windows::Forms::Label());
			this->lblPlayerX = (gcnew System::Windows::Forms::Label());
			this->PlayerO = (gcnew System::Windows::Forms::Label());
			this->PLayerX = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnNewGame = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label5);
			this->panel1->Location = System::Drawing::Point(18, 23);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(791, 73);
			this->panel1->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(235, 10);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(410, 63);
			this->label5->TabIndex = 3;
			this->label5->Text = L"TIC TAC TOE";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Location = System::Drawing::Point(18, 109);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(791, 304);
			this->panel2->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->Controls->Add(this->btnTic9);
			this->panel4->Controls->Add(this->btnTic8);
			this->panel4->Controls->Add(this->btnTic7);
			this->panel4->Controls->Add(this->btnTic6);
			this->panel4->Controls->Add(this->btnTic5);
			this->panel4->Controls->Add(this->btnTic4);
			this->panel4->Controls->Add(this->btnTic3);
			this->panel4->Controls->Add(this->btnTic2);
			this->panel4->Controls->Add(this->btnTic1);
			this->panel4->Location = System::Drawing::Point(8, 14);
			this->panel4->Margin = System::Windows::Forms::Padding(2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(420, 285);
			this->panel4->TabIndex = 2;
			// 
			// btnTic9
			// 
			this->btnTic9->CausesValidation = false;
			this->btnTic9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnTic9->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic9->Location = System::Drawing::Point(260, 189);
			this->btnTic9->Margin = System::Windows::Forms::Padding(2);
			this->btnTic9->Name = L"btnTic9";
			this->btnTic9->Size = System::Drawing::Size(102, 86);
			this->btnTic9->TabIndex = 8;
			this->btnTic9->UseVisualStyleBackColor = true;
			this->btnTic9->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic9_Click);
			// 
			// btnTic8
			// 
			this->btnTic8->CausesValidation = false;
			this->btnTic8->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic8->Location = System::Drawing::Point(260, 99);
			this->btnTic8->Margin = System::Windows::Forms::Padding(2);
			this->btnTic8->Name = L"btnTic8";
			this->btnTic8->Size = System::Drawing::Size(102, 86);
			this->btnTic8->TabIndex = 7;
			this->btnTic8->UseVisualStyleBackColor = true;
			this->btnTic8->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic8_Click);
			// 
			// btnTic7
			// 
			this->btnTic7->CausesValidation = false;
			this->btnTic7->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic7->Location = System::Drawing::Point(260, 8);
			this->btnTic7->Margin = System::Windows::Forms::Padding(2);
			this->btnTic7->Name = L"btnTic7";
			this->btnTic7->Size = System::Drawing::Size(102, 86);
			this->btnTic7->TabIndex = 6;
			this->btnTic7->UseVisualStyleBackColor = true;
			this->btnTic7->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic7_Click);
			// 
			// btnTic6
			// 
			this->btnTic6->CausesValidation = false;
			this->btnTic6->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic6->Location = System::Drawing::Point(154, 189);
			this->btnTic6->Margin = System::Windows::Forms::Padding(2);
			this->btnTic6->Name = L"btnTic6";
			this->btnTic6->Size = System::Drawing::Size(102, 86);
			this->btnTic6->TabIndex = 5;
			this->btnTic6->UseVisualStyleBackColor = true;
			this->btnTic6->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic6_Click);
			// 
			// btnTic5
			// 
			this->btnTic5->CausesValidation = false;
			this->btnTic5->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic5->Location = System::Drawing::Point(154, 99);
			this->btnTic5->Margin = System::Windows::Forms::Padding(2);
			this->btnTic5->Name = L"btnTic5";
			this->btnTic5->Size = System::Drawing::Size(102, 86);
			this->btnTic5->TabIndex = 4;
			this->btnTic5->UseVisualStyleBackColor = true;
			this->btnTic5->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic5_Click);
			// 
			// btnTic4
			// 
			this->btnTic4->CausesValidation = false;
			this->btnTic4->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic4->Location = System::Drawing::Point(154, 8);
			this->btnTic4->Margin = System::Windows::Forms::Padding(2);
			this->btnTic4->Name = L"btnTic4";
			this->btnTic4->Size = System::Drawing::Size(102, 86);
			this->btnTic4->TabIndex = 3;
			this->btnTic4->UseVisualStyleBackColor = true;
			this->btnTic4->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic4_Click);
			// 
			// btnTic3
			// 
			this->btnTic3->CausesValidation = false;
			this->btnTic3->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic3->Location = System::Drawing::Point(47, 189);
			this->btnTic3->Margin = System::Windows::Forms::Padding(2);
			this->btnTic3->Name = L"btnTic3";
			this->btnTic3->Size = System::Drawing::Size(103, 86);
			this->btnTic3->TabIndex = 2;
			this->btnTic3->UseVisualStyleBackColor = true;
			this->btnTic3->Click += gcnew System::EventHandler(this, &TicTacToeForm::button3_Click);
			// 
			// btnTic2
			// 
			this->btnTic2->CausesValidation = false;
			this->btnTic2->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic2->Location = System::Drawing::Point(47, 99);
			this->btnTic2->Margin = System::Windows::Forms::Padding(2);
			this->btnTic2->Name = L"btnTic2";
			this->btnTic2->Size = System::Drawing::Size(103, 86);
			this->btnTic2->TabIndex = 1;
			this->btnTic2->UseVisualStyleBackColor = true;
			this->btnTic2->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic2_Click);
			// 
			// btnTic1
			// 
			this->btnTic1->CausesValidation = false;
			this->btnTic1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTic1->Location = System::Drawing::Point(47, 8);
			this->btnTic1->Margin = System::Windows::Forms::Padding(2);
			this->btnTic1->Name = L"btnTic1";
			this->btnTic1->Size = System::Drawing::Size(103, 86);
			this->btnTic1->TabIndex = 0;
			this->btnTic1->UseVisualStyleBackColor = true;
			this->btnTic1->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnTic1_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::SteelBlue;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel6);
			this->panel3->Controls->Add(this->panel5);
			this->panel3->Location = System::Drawing::Point(439, 14);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(339, 276);
			this->panel3->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->lblPlayerO);
			this->panel6->Controls->Add(this->lblPlayerX);
			this->panel6->Controls->Add(this->PlayerO);
			this->panel6->Controls->Add(this->PLayerX);
			this->panel6->Location = System::Drawing::Point(13, 8);
			this->panel6->Margin = System::Windows::Forms::Padding(2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(311, 126);
			this->panel6->TabIndex = 3;
			this->panel6->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TicTacToeForm::panel6_Paint);
			// 
			// lblPlayerO
			// 
			this->lblPlayerO->BackColor = System::Drawing::Color::White;
			this->lblPlayerO->Font = (gcnew System::Drawing::Font(L"Castellar", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerO->Location = System::Drawing::Point(170, 80);
			this->lblPlayerO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPlayerO->Name = L"lblPlayerO";
			this->lblPlayerO->Size = System::Drawing::Size(120, 28);
			this->lblPlayerO->TabIndex = 3;
			this->lblPlayerO->Text = L"0";
			this->lblPlayerO->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblPlayerX
			// 
			this->lblPlayerX->BackColor = System::Drawing::Color::White;
			this->lblPlayerX->Font = (gcnew System::Drawing::Font(L"Castellar", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPlayerX->Location = System::Drawing::Point(170, 10);
			this->lblPlayerX->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblPlayerX->Name = L"lblPlayerX";
			this->lblPlayerX->Size = System::Drawing::Size(120, 28);
			this->lblPlayerX->TabIndex = 2;
			this->lblPlayerX->Text = L"0";
			this->lblPlayerX->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblPlayerX->Click += gcnew System::EventHandler(this, &TicTacToeForm::lblPlayerX_Click);
			// 
			// PlayerO
			// 
			this->PlayerO->AutoSize = true;
			this->PlayerO->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PlayerO->Location = System::Drawing::Point(2, 70);
			this->PlayerO->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PlayerO->Name = L"PlayerO";
			this->PlayerO->Size = System::Drawing::Size(154, 47);
			this->PlayerO->TabIndex = 1;
			this->PlayerO->Text = L"Player O";
			this->PlayerO->Click += gcnew System::EventHandler(this, &TicTacToeForm::label2_Click);
			// 
			// PLayerX
			// 
			this->PLayerX->AutoSize = true;
			this->PLayerX->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PLayerX->Location = System::Drawing::Point(2, 2);
			this->PLayerX->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->PLayerX->Name = L"PLayerX";
			this->PLayerX->Size = System::Drawing::Size(150, 47);
			this->PLayerX->TabIndex = 0;
			this->PLayerX->Text = L"Player X";
			this->PLayerX->Click += gcnew System::EventHandler(this, &TicTacToeForm::label1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->btnNewGame);
			this->panel5->Controls->Add(this->btnReset);
			this->panel5->Location = System::Drawing::Point(13, 136);
			this->panel5->Margin = System::Windows::Forms::Padding(2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(311, 128);
			this->panel5->TabIndex = 2;
			// 
			// btnNewGame
			// 
			this->btnNewGame->BackColor = System::Drawing::Color::Gray;
			this->btnNewGame->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNewGame->ForeColor = System::Drawing::Color::White;
			this->btnNewGame->Location = System::Drawing::Point(8, 69);
			this->btnNewGame->Margin = System::Windows::Forms::Padding(2);
			this->btnNewGame->Name = L"btnNewGame";
			this->btnNewGame->Size = System::Drawing::Size(290, 53);
			this->btnNewGame->TabIndex = 10;
			this->btnNewGame->Text = L"NEW GAME";
			this->btnNewGame->UseVisualStyleBackColor = false;
			this->btnNewGame->Click += gcnew System::EventHandler(this, &TicTacToeForm::btnNewGame_Click);
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::Maroon;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Castellar", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnReset->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnReset->Location = System::Drawing::Point(10, 10);
			this->btnReset->Margin = System::Windows::Forms::Padding(2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(290, 55);
			this->btnReset->TabIndex = 9;
			this->btnReset->Text = L"RESET";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &TicTacToeForm::button10_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(899, 484);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// TicTacToeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(899, 484);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"TicTacToeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TicTacToe";
			this->Load += gcnew System::EventHandler(this, &TicTacToeForm::TicTacToeForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		Boolean checker;
		int plusOne;
		Boolean checkWin;
#pragma endregion

		void Enable_False()
		{
			btnTic1->Enabled = false;
			btnTic2->Enabled = false;
			btnTic3->Enabled = false;
			btnTic4->Enabled = false;
			btnTic6->Enabled = false;
			btnTic7->Enabled = false;
			btnTic8->Enabled = false;
			btnTic9->Enabled = false;

		}
		void checkForTie()
		{

			if ((checkWin = false) &&
				(btnTic1->Text == "X" || btnTic1->Text == "O") &&
				(btnTic2->Text == "X" || btnTic2->Text == "O") &&
				(btnTic3->Text == "X" || btnTic3->Text == "O") &&
				(btnTic4->Text == "X" || btnTic4->Text == "O") &&
				(btnTic5->Text == "X" || btnTic5->Text == "O") &&
				(btnTic6->Text == "X" || btnTic6->Text == "O") &&
				(btnTic7->Text == "X" || btnTic7->Text == "O") &&
				(btnTic8->Text == "X" || btnTic8->Text == "O") &&
				(btnTic9->Text == "X" || btnTic9->Text == "O")
				) {
				// All buttons are filled, but no win condition is met, so it's a tie
				MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Enable_False();
			}

			/*void checkForTie()
			{
				if (checkWin = false) {


					MessageBox::Show("It's a tie!", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
					Enable_False();
				}*/
		}
		void score()
		{
			if (btnTic1->Text == "X" && btnTic2->Text == "X" && btnTic3->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Red;
				btnTic2->BackColor = System::Drawing::Color::Red;
				btnTic3->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				checkWin = true;
				plusOne = int::Parse(lblPlayerX->Text);
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();

			}

			if (btnTic1->Text == "X" && btnTic4->Text == "X" && btnTic7->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Red;
				btnTic4->BackColor = System::Drawing::Color::Red;
				btnTic7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic1->Text == "X" && btnTic5->Text == "X" && btnTic9->Text == "X")
			{
				btnTic1->BackColor = System::Drawing::Color::Red;
				btnTic5->BackColor = System::Drawing::Color::Red;
				btnTic9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic4->Text == "X" && btnTic5->Text == "X" && btnTic6->Text == "X")
			{
				btnTic4->BackColor = System::Drawing::Color::Red;
				btnTic5->BackColor = System::Drawing::Color::Red;
				btnTic6->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic7->Text == "X" && btnTic8->Text == "X" && btnTic9->Text == "X")
			{
				btnTic7->BackColor = System::Drawing::Color::Red;
				btnTic8->BackColor = System::Drawing::Color::Red;
				btnTic9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic3->Text == "X" && btnTic5->Text == "X" && btnTic7->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::Red;
				btnTic5->BackColor = System::Drawing::Color::Red;
				btnTic7->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic2->Text == "X" && btnTic5->Text == "X" && btnTic8->Text == "X")
			{
				btnTic2->BackColor = System::Drawing::Color::Red;
				btnTic5->BackColor = System::Drawing::Color::Red;
				btnTic8->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic3->Text == "X" && btnTic6->Text == "X" && btnTic9->Text == "X")
			{
				btnTic3->BackColor = System::Drawing::Color::Red;
				btnTic6->BackColor = System::Drawing::Color::Red;
				btnTic9->BackColor = System::Drawing::Color::Red;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			//===============================================================================================*/
			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Blue;
				btnTic2->BackColor = System::Drawing::Color::Blue;
				btnTic3->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerX->Text);
				checkWin = true;
				lblPlayerX->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic1->Text == "O" && btnTic4->Text == "O" && btnTic7->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Blue;
				btnTic4->BackColor = System::Drawing::Color::Blue;
				btnTic7->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic1->Text == "O" && btnTic5->Text == "O" && btnTic9->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Blue;
				btnTic5->BackColor = System::Drawing::Color::Blue;
				btnTic9->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic4->Text == "O" && btnTic5->Text == "O" && btnTic6->Text == "O")
			{
				btnTic4->BackColor = System::Drawing::Color::Blue;
				btnTic5->BackColor = System::Drawing::Color::Blue;
				btnTic6->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player X !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic1->Text == "O" && btnTic2->Text == "O" && btnTic3->Text == "O")
			{
				btnTic1->BackColor = System::Drawing::Color::Blue;
				btnTic2->BackColor = System::Drawing::Color::Blue;
				btnTic3->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic7->Text == "O" && btnTic8->Text == "O" && btnTic9->Text == "O")
			{
				btnTic7->BackColor = System::Drawing::Color::Blue;
				btnTic8->BackColor = System::Drawing::Color::Blue;
				btnTic9->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic3->Text == "O" && btnTic5->Text == "O" && btnTic7->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::Blue;
				btnTic5->BackColor = System::Drawing::Color::Blue;
				btnTic7->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic2->Text == "O" && btnTic5->Text == "O" && btnTic8->Text == "O")
			{
				btnTic2->BackColor = System::Drawing::Color::Blue;
				btnTic5->BackColor = System::Drawing::Color::Blue;
				btnTic8->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			if (btnTic3->Text == "O" && btnTic6->Text == "O" && btnTic9->Text == "O")
			{
				btnTic3->BackColor = System::Drawing::Color::Blue;
				btnTic6->BackColor = System::Drawing::Color::Blue;
				btnTic9->BackColor = System::Drawing::Color::Blue;
				MessageBox::Show("The winner is player O !", "Tic Tac Toe ", MessageBoxButtons::OK, MessageBoxIcon::Information);
				plusOne = int::Parse(lblPlayerO->Text);
				checkWin = true;
				lblPlayerO->Text = Convert::ToString(plusOne + 1);
				Enable_False();
				checkForTie();
			}

			//===================================================================

		}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic3->Text = "X";
			checker = true;
		}
		else
		{
			btnTic3->Text = "O";
			checker = false;
		}
		score();
		btnTic3->Enabled = false;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnTic1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false) {
			btnTic1->Text = "X";
			checker = true;
		}
		else
		{
			btnTic1->Text = "O";
			checker = false;
		}
		score();
		btnTic1->Enabled = false;
	}
	private: System::Void btnTic2_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false) {
			btnTic2->Text = "X";
			checker = true;
		}
		else
		{
			btnTic2->Text = "O";
			checker = false;
		}
		score();
		btnTic2->Enabled = false;
	}
	private: System::Void btnTic4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic4->Text = "X";
			checker = true;
		}
		else
		{
			btnTic4->Text = "O";
			checker = false;
		}
		score();
		btnTic4->Enabled = false;
	}
	private: System::Void btnTic5_Click(System::Object^ sender, System::EventArgs^ e) {

		if (checker == false) {
			btnTic5->Text = "X";
			checker = true;
		}
		else
		{
			btnTic5->Text = "O";
			checker = false;
		}
		score();
		btnTic5->Enabled = false;
	}
	private: System::Void btnTic6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic6->Text = "X";
			checker = true;
		}
		else
		{
			btnTic6->Text = "O";
			checker = false;
		}
		score();
		btnTic6->Enabled = false;
	}
	private: System::Void btnTic7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic7->Text = "X";
			checker = true;
		}
		else
		{
			btnTic7->Text = "O";
			checker = false;
		}
		score();
		btnTic7->Enabled = false;
	}
	private: System::Void btnTic8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic8->Text = "X";
			checker = true;
		}
		else
		{
			btnTic8->Text = "O";
			checker = false;
		}
		score();
		btnTic8->Enabled = false;
	}
	private: System::Void btnTic9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checker == false) {
			btnTic9->Text = "X";
			checker = true;
		}
		else
		{
			btnTic9->Text = "O";
			checker = false;
		}
		score();
		btnTic9->Enabled = false;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		btnTic1->Enabled = true;
		btnTic2->Enabled = true;
		btnTic3->Enabled = true;
		btnTic4->Enabled = true;
		btnTic5->Enabled = true;
		btnTic6->Enabled = true;
		btnTic7->Enabled = true;
		btnTic8->Enabled = true;
		btnTic9->Enabled = true;

		btnTic1->Text = "";
		btnTic2->Text = "";
		btnTic3->Text = "";
		btnTic4->Text = "";
		btnTic5->Text = "";
		btnTic6->Text = "";
		btnTic7->Text = "";
		btnTic8->Text = "";
		btnTic9->Text = "";
		btnNewGame->Enabled = true;

		btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void btnNewGame_Click(System::Object^ sender, System::EventArgs^ e) {
		btnTic1->Enabled = true;
		btnTic2->Enabled = true;
		btnTic3->Enabled = true;
		btnTic4->Enabled = true;
		btnTic5->Enabled = true;
		btnTic6->Enabled = true;
		btnTic7->Enabled = true;
		btnTic8->Enabled = true;
		btnTic9->Enabled = true;

		btnTic1->Text = "";
		btnTic2->Text = "";
		btnTic3->Text = "";
		btnTic4->Text = "";
		btnTic5->Text = "";
		btnTic6->Text = "";
		btnTic7->Text = "";
		btnTic8->Text = "";
		btnTic9->Text = "";
		lblPlayerO->Text = "0";
		lblPlayerX->Text = "0";

		btnTic1->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic2->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic3->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic4->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic5->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic6->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic7->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic8->BackColor = System::Drawing::Color::WhiteSmoke;
		btnTic9->BackColor = System::Drawing::Color::WhiteSmoke;
	}
	private: System::Void lblPlayerX_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void TicTacToeForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

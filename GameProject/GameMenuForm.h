#pragma once
#include "PlayerForm.h"
#include "TicTacToeForm.h"

namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// Summary for GameMenuForm
	/// </summary>
	public ref class GameMenuForm : public System::Windows::Forms::Form
	{
	public:
		GameMenuForm(void)
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
		~GameMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ TicTacToeBtn;
	private: System::Windows::Forms::Button^ QuizBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameMenuForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->TicTacToeBtn = (gcnew System::Windows::Forms::Button());
			this->QuizBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::IndianRed;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(106, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(372, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"THE GOOD DOCTOR";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->TicTacToeBtn, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->QuizBtn, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 369);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(582, 52);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// TicTacToeBtn
			// 
			this->TicTacToeBtn->BackColor = System::Drawing::Color::IndianRed;
			this->TicTacToeBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicTacToeBtn->Location = System::Drawing::Point(294, 3);
			this->TicTacToeBtn->Name = L"TicTacToeBtn";
			this->TicTacToeBtn->Size = System::Drawing::Size(285, 46);
			this->TicTacToeBtn->TabIndex = 1;
			this->TicTacToeBtn->Text = L"TIC TAC TOE";
			this->TicTacToeBtn->UseVisualStyleBackColor = false;
			this->TicTacToeBtn->Click += gcnew System::EventHandler(this, &GameMenuForm::TicTacToeBtn_Click);
			// 
			// QuizBtn
			// 
			this->QuizBtn->BackColor = System::Drawing::Color::IndianRed;
			this->QuizBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->QuizBtn->Location = System::Drawing::Point(3, 3);
			this->QuizBtn->Name = L"QuizBtn";
			this->QuizBtn->Size = System::Drawing::Size(285, 46);
			this->QuizBtn->TabIndex = 0;
			this->QuizBtn->Text = L"QUIZ";
			this->QuizBtn->UseVisualStyleBackColor = false;
			this->QuizBtn->Click += gcnew System::EventHandler(this, &GameMenuForm::QuizBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(606, 433);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// GameMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 433);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GameMenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"WELCOME TO THE GAME!";
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void QuizBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		PlayerForm^ player = gcnew PlayerForm();

		this->Hide();

		player->ShowDialog();
	}

	private: System::Void TicTacToeBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		TicTacToeForm^ tictactoe = gcnew TicTacToeForm();

		this->Hide();

		tictactoe->ShowDialog();
	}
	};
}
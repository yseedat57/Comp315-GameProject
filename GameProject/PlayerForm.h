#pragma once
#include "LevelOneForm.h"
#include "CertificateForm.h"

namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PlayerForm
	/// </summary>
	public ref class PlayerForm : public System::Windows::Forms::Form
	{
	public:
		PlayerForm(void)
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
		~PlayerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ ConfirmBtn;
	private: System::Windows::Forms::Button^ ClearBtn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayerForm::typeid));
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->ConfirmBtn = (gcnew System::Windows::Forms::Button());
			this->ClearBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->ForeColor = System::Drawing::Color::Black;
			this->NameLabel->Location = System::Drawing::Point(176, 106);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(233, 45);
			this->NameLabel->TabIndex = 1;
			this->NameLabel->Text = L"ENTER NAME:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Black;
			this->textBox1->Location = System::Drawing::Point(175, 180);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(234, 39);
			this->textBox1->TabIndex = 2;
			// 
			// ConfirmBtn
			// 
			this->ConfirmBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ConfirmBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmBtn->ForeColor = System::Drawing::Color::Black;
			this->ConfirmBtn->Location = System::Drawing::Point(240, 292);
			this->ConfirmBtn->Name = L"ConfirmBtn";
			this->ConfirmBtn->Size = System::Drawing::Size(116, 34);
			this->ConfirmBtn->TabIndex = 3;
			this->ConfirmBtn->Text = L"CONFIRM";
			this->ConfirmBtn->UseVisualStyleBackColor = true;
			this->ConfirmBtn->Click += gcnew System::EventHandler(this, &PlayerForm::ConfirmBtn_Click);
			// 
			// ClearBtn
			// 
			this->ClearBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ClearBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ClearBtn->ForeColor = System::Drawing::Color::Black;
			this->ClearBtn->Location = System::Drawing::Point(240, 364);
			this->ClearBtn->Name = L"ClearBtn";
			this->ClearBtn->Size = System::Drawing::Size(116, 34);
			this->ClearBtn->TabIndex = 4;
			this->ClearBtn->Text = L"CLEAR";
			this->ClearBtn->UseVisualStyleBackColor = true;
			this->ClearBtn->Click += gcnew System::EventHandler(this, &PlayerForm::ClearBtn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(587, 497);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// PlayerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(587, 497);
			this->Controls->Add(this->ClearBtn);
			this->Controls->Add(this->ConfirmBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PlayerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"PLEASE ENTER NAME";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ConfirmBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		CertificateForm^ form2 = gcnew CertificateForm(textBox1->Text);
		LevelOneForm^ lvlOne = gcnew LevelOneForm(textBox1->Text);
		this->Hide();
		lvlOne->ShowDialog();
		//form2->ShowDialog();
		
	}

	private: System::Void ClearBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Clear the text field
		textBox1->Clear();
	}
	};
}
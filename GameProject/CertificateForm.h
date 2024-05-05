#pragma once
#include <iostream>
#include <sstream>


namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CertificateForm
	/// </summary>
	public ref class CertificateForm : public System::Windows::Forms::Form
	{
	public:
		CertificateForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		CertificateForm(String^ data)
		{
			InitializeComponent();
			label1->Text = data;
			//
			//TODO: Add the constructor code here
			//
		}

		CertificateForm(int score)
		{
			InitializeComponent();
			this->label1->Text = score.ToString();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CertificateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CertificateForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::White;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(701, 452);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::GhostWhite;
			this->label1->Font = (gcnew System::Drawing::Font(L"Edwardian Script ITC", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(257, 201);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(182, 47);
			this->label1->TabIndex = 1;
			this->label1->Text = L"User Name";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CertificateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"CertificateForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"                                                                                 "
				L"              CERTIFICATE";
			this->Load += gcnew System::EventHandler(this, &CertificateForm::CertificateForm_Load);
			this->Leave += gcnew System::EventHandler(this, &CertificateForm::CertificateForm_Leave);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void CertificateForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// link user name to this label so it can be displayed
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		// Takes user to the main menu link the main menu to this button
	}
	private: System::Void CertificateForm_Leave(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
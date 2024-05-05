#pragma once
#include "CertificateForm.h"
#include "QuizGame.h"
#include <iostream>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <sstream>


namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::IO;

	extern int arr[10];
	/// <summary>
	/// Summary for LevelThreeForm
	/// </summary>
	public ref class LevelThreeForm : public System::Windows::Forms::Form
	{
	public:
		int randomscenario = 0;
		int finalrandom = 0;
		String^ username;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
		   int score;
		   int totScore = 0;
		   int level2score = 0;
		   int level1score = 0;

	public:


		LevelThreeForm(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		}
		LevelThreeForm(String^ data)
		{
			InitializeComponent();
			int temp = 0;
			
			String^ file = "User.txt";
			StreamWriter^ writer = File::AppendText(file);
			writer->WriteLine(data + "#");
			writer->Close();
			//
			//TODO: Add the constructor code here
			//
		}
		

		LevelThreeForm(int score)
		{
			InitializeComponent();
			this->label1->Text = score.ToString();
			
			//
			//TODO: Add the constructor code here
			//
		}
		LevelThreeForm(int level1score, int level2score)
		{
			InitializeComponent();
			
			this->level1score = level1score;
			this->level2score = level2score;
			//
			//TODO: Add the constructor code here
			//
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LevelThreeForm()
		{
			if (components)
			{
				delete components;
			}
		}



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelThreeForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(736, 456);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(8, 8);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(716, 159);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(659, 403);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(64, 38);
			this->button10->TabIndex = 20;
			this->button10->Text = L"Finish Quiz";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &LevelThreeForm::button10_Click_1);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(659, 403);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 38);
			this->button9->TabIndex = 33;
			this->button9->Text = L"Next Page";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &LevelThreeForm::button9_Click_1);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(659, 403);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(64, 38);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Next Page";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &LevelThreeForm::button5_Click_1);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(659, 403);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(64, 38);
			this->button8->TabIndex = 32;
			this->button8->Text = L"Next Page";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &LevelThreeForm::button8_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(659, 403);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(64, 38);
			this->button7->TabIndex = 31;
			this->button7->Text = L"Next Page";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &LevelThreeForm::button7_Click_1);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(659, 403);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(64, 38);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Next Page";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &LevelThreeForm::button6_Click_1);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(659, 403);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(64, 38);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Next Page";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &LevelThreeForm::button4_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(659, 403);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 38);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Next Page";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &LevelThreeForm::button3_Click_1);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(659, 403);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(64, 38);
			this->button2->TabIndex = 26;
			this->button2->Text = L"Next Page";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &LevelThreeForm::button2_Click_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 181);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 19);
			this->label1->TabIndex = 25;
			this->label1->Text = L"label1";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(15, 418);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(106, 23);
			this->radioButton5->TabIndex = 24;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Black;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton4->ForeColor = System::Drawing::Color::White;
			this->radioButton4->Location = System::Drawing::Point(15, 370);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(106, 23);
			this->radioButton4->TabIndex = 23;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Black;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton3->ForeColor = System::Drawing::Color::White;
			this->radioButton3->Location = System::Drawing::Point(15, 317);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(106, 23);
			this->radioButton3->TabIndex = 22;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Black;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(15, 270);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(106, 23);
			this->radioButton2->TabIndex = 21;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Black;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::White;
			this->radioButton1->Location = System::Drawing::Point(15, 220);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(106, 23);
			this->radioButton1->TabIndex = 19;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(659, 403);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(64, 38);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Next Page";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LevelThreeForm::button1_Click_1);
			// 
			// LevelThreeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->ClientSize = System::Drawing::Size(736, 456);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"LevelThreeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LEVEL THREE: Multiple Choice";
			this->Load += gcnew System::EventHandler(this, &LevelThreeForm::LevelThreeForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: int getScore() {
		int sum = 0;

		for (int i = 0; i < 10; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	private: System::Void LevelThreeForm_Load(System::Object^ sender, System::EventArgs^ e) {

		int x;
		x = static_cast<int>(time(0));
		srand(x);
		randomscenario = 1 + rand() % 5;
		finalrandom = randomscenario;
		switch (randomscenario) {
		case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
			this->label1->Text = L"1. What are common symptoms of breast cancer?";
			this->radioButton1->Text = L"a. Persistent breast lump";
			this->radioButton2->Text = L"b. Nipple discharge";
			this->radioButton3->Text = L"c. Skin changes";
			this->radioButton4->Text = L"d. All of the above";
			this->radioButton5->Text = L"e. None of the above";
			break;
		case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
			this->label1->Text = L"1. What are common early signs of dementia?";
			this->radioButton1->Text = L"a. Forgetfulness";
			this->radioButton2->Text = L"b. Difficulty finding words";
			this->radioButton3->Text = L"c. Confusion";
			this->radioButton4->Text = L"d. All of the above";
			this->radioButton5->Text = L"e. None of the above";
			break;
		case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
			this->label1->Text = L"1. What are common symptoms of diabetes?";
			this->radioButton1->Text = L"a. Excessive thirst";
			this->radioButton2->Text = L"b. Frequent urination";
			this->radioButton3->Text = L"c. Unexplained weight loss";
			this->radioButton4->Text = L"d. All of the above";
			this->radioButton5->Text = L"e. None of the above";
			break;
		case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
			this->label1->Text = L"1. How is HIV transmitted?";
			this->radioButton1->Text = L"a. Unprotected sexual intercourse";
			this->radioButton2->Text = L"b. Contaminated blood transfusions";
			this->radioButton3->Text = L"c. Sharing needles or syringes";
			this->radioButton4->Text = L"d. All of the above";
			this->radioButton5->Text = L"e. None of the above";
			break;
		case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
			this->label1->Text = L"1. What causes Down syndrome?";
			this->radioButton1->Text = L"a. Genetic mutation";
			this->radioButton2->Text = L"b. None of these";
			this->radioButton3->Text = L"c. Environmental factors";
			this->radioButton4->Text = L"d. Chromosome abnormality";
			this->radioButton5->Text = L"e. All of the above";
			break;
		default: this->richTextBox1->Text = L""; break;
		}


	}


	private: System::Void button10_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton3->Checked == true)
			{
				arr[9] = 2;
			}
			else {
				arr[9] = 0;
			}
			//MessageBox::Show("arr[9]: " + arr[9]); //USED TO TEST IF SCORES WERE ACCURATE

			score = getScore();
			//MessageBox::Show("Calculated Score: " + score); //USED TO TEST IF SCORES WERE ACCURATE


			if (score >= 10) {
				totScore = level1score + level2score + score;
				MessageBox::Show("Congradulations your level 3 score is " + score + " out of 20. You passed this level, you're one step closer!");
				MessageBox::Show("Congradulations on completing the quiz your total score is " + totScore + " out of 46.");
				//code used to link varaible
				//CertificateForm^ certificate = gcnew CertificateForm();
				LevelThreeForm^ form1 = gcnew LevelThreeForm();
				int temp = 0;

				String^ file = "User.txt";
				StreamWriter^ writer = File::AppendText(file);
				writer->Write(totScore);
				writer->Close();
				form1->Close();
				form1->Hide();
				//certificate->ShowDialog();
			}
			else {
				MessageBox::Show("We regret to inform you that your score is  " + score + " out of 20. You are not qualified enough to be a doctor.");
			}
		}

	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton4->Checked == true)
			{
				arr[0] = 2;
			}
			else {
				arr[0] = 0;
			}
			//MessageBox::Show("arr[0]: " + arr[0]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"2. What diagnostic method is commonly used to detect breast cancer?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Ultrasound";
					this->radioButton3->Text = L"c. Biopsy";
					this->radioButton4->Text = L"d. Mammography";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"2. Which genetic mutations are associated with an increased risk of breast cancer?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. BRCA2";
					this->radioButton3->Text = L"c. PALB2";
					this->radioButton4->Text = L"d. BRCA1";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"2. Which area of the brain is primarily affected by dementia?";
					this->radioButton1->Text = L"a. Temporal lobe";
					this->radioButton2->Text = L"b. Frontal lobe";
					this->radioButton3->Text = L"c. Hippocampus";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"2. What is the most common type of dementia?";
					this->radioButton1->Text = L"a. Alzheimer's disease";
					this->radioButton2->Text = L"b. Vascular dementia";
					this->radioButton3->Text = L"c. Lewy body dementia";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"2. Which type of diabetes is characterized by insulin resistance?";
					this->radioButton1->Text = L"a. Type 2 diabetes";
					this->radioButton2->Text = L"b. Type 1 diabetes";
					this->radioButton3->Text = L"c. Gestational diabetes";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"2. What is the primary role of insulin in the body?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. To regulate metabolism";
					this->radioButton3->Text = L"c. To promote glucose uptake by cells";
					this->radioButton4->Text = L"d. To lower blood sugar levels";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"2. What is the primary target of HIV in the body?";
					this->radioButton1->Text = L"a. T-cells";
					this->radioButton2->Text = L"b. B-cells";
					this->radioButton3->Text = L"c. Red blood cells";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"2. What diagnostic tests are used to detect HIV infection?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Western blot";
					this->radioButton3->Text = L"c. PCR";
					this->radioButton4->Text = L"d. ELISA";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"2. How many chromosomes are typically present in individuals with Down syndrome?";
					this->radioButton1->Text = L"a. 47";
					this->radioButton2->Text = L"b. 46";
					this->radioButton3->Text = L"c. 45";
					this->radioButton4->Text = L"d. 48";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"2. What is the most common physical characteristic of Down syndrome?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Rounded face";
					this->radioButton3->Text = L"c. Protruding tongue";
					this->radioButton4->Text = L"d. Almond-shaped eyes";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button2->Visible = true;
			this->button1->Visible = false;
		}




	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton1->Checked == true)
			{
				arr[1] = 2;
			}
			else {
				arr[1] = 0;
			}
			//MessageBox::Show("arr[1]: " + arr[1]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"3. What is the recommended screening age for mammograms?";
					this->radioButton1->Text = L"a. 30 years old";
					this->radioButton2->Text = L"b. 40 years old";
					this->radioButton3->Text = L"c. 50 years old";
					this->radioButton4->Text = L"d. 60 years old";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"3. What is the most common type of breast cancer?";
					this->radioButton1->Text = L"a. Ductal carcinoma in situ (DCIS)";
					this->radioButton2->Text = L"b. Invasive ductal carcinoma";
					this->radioButton3->Text = L"c. Lobular carcinoma in situ (LCIS)";
					this->radioButton4->Text = L"d. Invasive lobular carcinoma";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"3. What is the purpose of cognitive tests in diagnosing dementia?";
					this->radioButton1->Text = L"a. To measure brain activity";
					this->radioButton2->Text = L"b. To assess memory and thinking abilities";
					this->radioButton3->Text = L"c. To identify genetic mutations";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"3. What lifestyle factors may reduce the risk of developing dementia?";
					this->radioButton1->Text = L"a. Regular exercise";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. Mental stimulation";
					this->radioButton4->Text = L"d. Healthy diet";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L" 3. What diagnostic test is used to measure blood sugar levels over time?";
					this->radioButton1->Text = L"a. Fasting blood glucose test";
					this->radioButton2->Text = L"b. Hemoglobin A1c test";
					this->radioButton3->Text = L"c. Oral glucose tolerance test";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"3. What is the recommended target range for blood sugar levels in diabetes management?";
					this->radioButton1->Text = L"a. 70-100 mg/dL";
					this->radioButton2->Text = L"b. 140-180 mg/dL";
					this->radioButton3->Text = L"c. 100-140 mg/dL";
					this->radioButton4->Text = L"d. 180-240 mg/dL";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"3. What is the significance of CD4 cell count in HIV/AIDS management?";
					this->radioButton1->Text = L"a. It reflects the status of the immune system";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. It guides treatment decisions";
					this->radioButton4->Text = L"d. It predicts disease progression";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"3. What is the goal of antiretroviral therapy (ART) in HIV/AIDS treatment?";
					this->radioButton1->Text = L"a. To suppress viral replication";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. To prevent opportunistic infections";
					this->radioButton4->Text = L"d. To restore immune function";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"3. What type of genetic testing is used to diagnose Down syndrome?";
					this->radioButton1->Text = L"a. Genetic sequencing";
					this->radioButton2->Text = L"b. Karyotyping";
					this->radioButton3->Text = L"c. PCR";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"3. What is the prevalence of Down syndrome in the population?";
					this->radioButton1->Text = L"a. 1 in 500";
					this->radioButton2->Text = L"b. 1 in 1,000";
					this->radioButton3->Text = L"c. 1 in 2,000";
					this->radioButton4->Text = L"d. 1 in 5,000";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button3->Visible = true;
			this->button2->Visible = false;

		}


	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton2->Checked == true)
			{
				arr[2] = 2;
			}
			else {
				arr[2] = 0;
			}
			//MessageBox::Show("arr[2]: " + arr[2]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"4. What lifestyle factors may contribute to an increased risk of breast cancer?";
					this->radioButton1->Text = L"a. Obesity";
					this->radioButton2->Text = L"b. Alcohol consumption";
					this->radioButton3->Text = L"c. Lack of physical activity";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"4. Which hormone receptor status indicates a poorer prognosis in breast cancer?";
					this->radioButton1->Text = L"a. Estrogen receptor-positive";
					this->radioButton2->Text = L"b. Progesterone receptor-positive";
					this->radioButton3->Text = L"c. HER2-positive";
					this->radioButton4->Text = L"d. Triple-negative";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"4. Which neurotransmitter deficiency is associated with dementia?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Dopamine";
					this->radioButton3->Text = L"c. Serotonin";
					this->radioButton4->Text = L"d. Acetylcholine";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"4. What is the role of brain imaging in diagnosing dementia?";
					this->radioButton1->Text = L"a. To detect structural abnormalities";
					this->radioButton2->Text = L"b. To assess blood flow";
					this->radioButton3->Text = L"c. To identify beta-amyloid plaques";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"4. What lifestyle modifications can help manage diabetes?";
					this->radioButton1->Text = L"a. Regular exercise";
					this->radioButton2->Text = L"b. Healthy diet";
					this->radioButton3->Text = L"c. Weight loss";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"4. What is the purpose of carbohydrate counting in diabetes management?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. To control calorie intake";
					this->radioButton3->Text = L"c. To minimize insulin doses";
					this->radioButton4->Text = L"d. To regulate blood sugar levels";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"4. What is the most common route of HIV transmission globally?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Mother-to-child transmission";
					this->radioButton3->Text = L"c. Sharing needles";
					this->radioButton4->Text = L"d. Sexual intercourse";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"4. What is the term for the stage of HIV infection where the virus is detectable but there are no symptoms?";
					this->radioButton1->Text = L"a. Acute HIV infection";
					this->radioButton2->Text = L"b. Latent HIV infection";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. Asymptomatic HIV infection";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"4. What is the term for the developmental delay commonly seen in individuals with Down syndrome?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Autism spectrum disorder";
					this->radioButton3->Text = L"c. Attention deficit hyperactivity disorder";
					this->radioButton4->Text = L"d. Intellectual disability";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"4. What is the role of early intervention programs in managing Down syndrome?";
					this->radioButton1->Text = L"a. To promote developmental milestones";
					this->radioButton2->Text = L"b. To address speech and language delays";
					this->radioButton3->Text = L"c. To provide support for families";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button4->Visible = true;
			this->button3->Visible = false;
		}



	}
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton4->Checked == true)
			{
				arr[3] = 2;
			}
			else {
				arr[3] = 0;
			}
			//MessageBox::Show("arr[3]: " + arr[3]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"5. What is the purpose of staging breast cancer?";
					this->radioButton1->Text = L"a. To determine tumor size";
					this->radioButton2->Text = L"b. To assess lymph node involvement";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. To identify distant metastasis";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"5. What treatment option involves the removal of the entire breast?";
					this->radioButton1->Text = L"a. Lumpectomy";
					this->radioButton2->Text = L"b. Chemotherapy";
					this->radioButton3->Text = L"c. Mastectomy";
					this->radioButton4->Text = L"d. Radiation therapy";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"5. What is the typical age of onset for dementia?";
					this->radioButton1->Text = L"a. 40-50 years old";
					this->radioButton2->Text = L"b. 50-60 years old";
					this->radioButton3->Text = L"c. 60-70 years old";
					this->radioButton4->Text = L"d. 70-80 years old";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"5. What is the difference between dementia and normal aging?";
					this->radioButton1->Text = L"a. Dementia is a normal part of aging";
					this->radioButton2->Text = L"b. Normal aging does not affect daily functioning";
					this->radioButton3->Text = L"c. Dementia involves significant cognitive decline";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"5. What is the term for dangerously low blood sugar levels in diabetes?";
					this->radioButton1->Text = L"a. Hyperglycemia";
					this->radioButton2->Text = L"b. Ketoacidosis";
					this->radioButton3->Text = L"c. Hypoglycemia";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"5. What are potential complications of uncontrolled diabetes?";
					this->radioButton1->Text = L"a. Cardiovascular disease";
					this->radioButton2->Text = L"b. Kidney damage";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. Neuropathy";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"5. What is the significance of viral load testing in HIV/AIDS management?";
					this->radioButton1->Text = L"a. It measures the amount of HIV in the blood";
					this->radioButton2->Text = L"b. It assesses treatment response";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. It predicts disease progression";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"5. What is the term for the opportunistic infections and cancers that occur in advanced HIV/AIDS?";
					this->radioButton1->Text = L"a. Co-infections";
					this->radioButton2->Text = L"b. HIV-associated diseases";
					this->radioButton3->Text = L"c. AIDS-defining illnesses";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"5. What medical condition is commonly associated with Down syndrome?";
					this->radioButton1->Text = L"a. Congenital heart defects";
					this->radioButton2->Text = L"b. Thyroid disorders";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. Hearing loss";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"5. What is the life expectancy of individuals with Down syndrome?";
					this->radioButton1->Text = L"a. 30-40 years";
					this->radioButton2->Text = L"b. 40-50 years";
					this->radioButton3->Text = L"c. 50-60 years";
					this->radioButton4->Text = L"d. 60-70 years";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button5->Visible = true;
			this->button4->Visible = false;
		}


	}
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton2->Checked == true)
			{
				arr[5] = 2;
			}
			else {
				arr[5] = 0;
			}
			//MessageBox::Show("arr[5]: " + arr[5]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"7. What is the main goal of chemotherapy in breast cancer treatment?";
					this->radioButton1->Text = L"a. To kill cancer cells throughout the body";
					this->radioButton2->Text = L"b. To reduce tumor size before surgery";
					this->radioButton3->Text = L"c. To prevent recurrence after surgery";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"7. What is the recommended frequency for breast self-exams?";
					this->radioButton1->Text = L"a. Monthly";
					this->radioButton2->Text = L"b. Weekly";
					this->radioButton3->Text = L"c. Quarterly";
					this->radioButton4->Text = L"d. Yearly";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"7. What is the primary goal of dementia care?";
					this->radioButton1->Text = L"a. To improve quality of life";
					this->radioButton2->Text = L"b. To slow disease progression";
					this->radioButton3->Text = L"c. To cure the disease";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"7. What is the significance of Lewy body dementia in dementia progression?";
					this->radioButton1->Text = L"a. It involves hallucinations and motor symptoms";
					this->radioButton2->Text = L"b. It affects primarily younger individuals";
					this->radioButton3->Text = L"c. It responds well to treatment";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"7. What is the purpose of insulin therapy in type 1 diabetes?";
					this->radioButton1->Text = L"a. To replace deficient insulin";
					this->radioButton2->Text = L"b. To improve insulin sensitivity";
					this->radioButton3->Text = L"c. To stimulate insulin production";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"7. What is the impact of diabetes on cardiovascular health?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Elevated blood pressure";
					this->radioButton3->Text = L"c. Abnormal cholesterol levels";
					this->radioButton4->Text = L"d. Increased risk of heart disease";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"7. What is the impact of HIV/AIDS on life expectancy without treatment?";
					this->radioButton1->Text = L"a. Reduced by several years";
					this->radioButton2->Text = L"b. Similar to the general population";
					this->radioButton3->Text = L"c. Increased due to improved healthcare";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"7. What is the significance of rapid HIV testing?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. It is highly accurate";
					this->radioButton3->Text = L"c. It allows for immediate linkage to care";
					this->radioButton4->Text = L"d. It provides results within minutes";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"7. What is the significance of regular medical check-ups for individuals with Down syndrome?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. To assess developmental progress";
					this->radioButton3->Text = L"c. To address specific medical needs";
					this->radioButton4->Text = L"d. To monitor for health conditions";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"7. What is the impact of Down syndrome on language development?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Limited vocabulary";
					this->radioButton3->Text = L"c. Difficulty with grammar";
					this->radioButton4->Text = L"d. Delayed speech";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button7->Visible = true;
			this->button6->Visible = false;
		}


	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton3->Checked == true)
			{
				arr[4] = 2;
			}
			else {
				arr[4] = 0;
			}
			//MessageBox::Show("arr[4]: " + arr[4]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"6. What is the role of radiation therapy in breast cancer treatment?";
					this->radioButton1->Text = L"a. To shrink tumors before surgery";
					this->radioButton2->Text = L"b. To kill remaining cancer cells after surgery";
					this->radioButton3->Text = L"c. To target cancer cells that have spread";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"6. What is the purpose of hormone therapy in breast cancer treatment?";
					this->radioButton1->Text = L"a. To block estrogen receptors";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. To prevent hormone-related tumor growth";
					this->radioButton4->Text = L"d. To suppress hormone production";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"6. What is the impact of dementia on daily activities?";
					this->radioButton1->Text = L"a. Difficulty with self-care tasks";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. Inability to manage finances";
					this->radioButton4->Text = L"d. Impaired communication";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"6. What is the term for sudden worsening of symptoms in dementia?";
					this->radioButton1->Text = L"a. Delirium";
					this->radioButton2->Text = L"b. Sundowning";
					this->radioButton3->Text = L"c. Agitation";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"6. What is the difference between type 1 and type 2 diabetes?";
					this->radioButton1->Text = L"a. Type 1 diabetes is autoimmune";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. Type 1 diabetes requires insulin therapy";
					this->radioButton4->Text = L"d. Type 2 diabetes is insulin-resistant";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"6. What is the recommended frequency for monitoring blood sugar levels in diabetes?";
					this->radioButton1->Text = L"a. Weekly";
					this->radioButton2->Text = L"b. Daily";
					this->radioButton3->Text = L"c. Annually";
					this->radioButton4->Text = L"d. Monthly";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"6. What is the primary mode of HIV transmission in infants?";
					this->radioButton1->Text = L"a. Through breastfeeding";
					this->radioButton2->Text = L"b. During childbirth";
					this->radioButton3->Text = L"c. Through placental transfer";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"6. What is the significance of pre-exposure prophylaxis (PrEP) in HIV prevention?";
					this->radioButton1->Text = L"a. It prevents HIV acquisition";
					this->radioButton2->Text = L"b. It reduces the risk of HIV transmission";
					this->radioButton3->Text = L"c. It is effective when taken after exposure to HIV";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"6. What is the importance of inclusion and acceptance in supporting individuals with Down syndrome?";
					this->radioButton1->Text = L"a. To promote social integration";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. To enhance self-esteem";
					this->radioButton4->Text = L"d. To reduce stigma and discrimination";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"6. What educational support is available for individuals with Down syndrome?";
					this->radioButton1->Text = L"a. Special education programs";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. Speech therapy";
					this->radioButton4->Text = L"d. Individualized education plans (IEPs)";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button6->Visible = true;
			this->button5->Visible = false;
		}


	}
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton1->Checked == true)
			{
				arr[6] = 2;
			}
			else {
				arr[6] = 0;
			}
			//MessageBox::Show("arr[6]: " + arr[6]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"8. What is the significance of HER2 status in breast cancer?";
					this->radioButton1->Text = L"a. It indicates an aggressive form of cancer";
					this->radioButton2->Text = L"b. It predicts response to targeted therapy";
					this->radioButton3->Text = L"c. It influences treatment decisions";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"8. What is the term for breast cancer that has spread to distant organs?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Invasive breast cancer";
					this->radioButton3->Text = L"c. Stage IV breast cancer";
					this->radioButton4->Text = L"d. Metastatic breast cancer";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"8. What is the impact of dementia on caregiver burden?";
					this->radioButton1->Text = L"a. Increased stress and anxiety";
					this->radioButton2->Text = L"b. Financial strain";
					this->radioButton3->Text = L"c. Social isolation";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"8. What is the role of medication in managing dementia symptoms?";
					this->radioButton1->Text = L"a. To improve memory";
					this->radioButton2->Text = L"b. All listed";
					this->radioButton3->Text = L"c. To slow disease progression";
					this->radioButton4->Text = L"d. To alleviate behavioral symptoms";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"8. What is the significance of the hemoglobin A1c test in diabetes management?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. It measures short-term fluctuations in blood sugar";
					this->radioButton3->Text = L"c. It assesses insulin resistance";
					this->radioButton4->Text = L"d. It provides an average of blood sugar levels over 2-3 months";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"8. What is the importance of regular foot care in diabetes?";
					this->radioButton1->Text = L"a. To prevent diabetic neuropathy";
					this->radioButton2->Text = L"b. To avoid foot ulcers and infections";
					this->radioButton3->Text = L"c. To improve circulation";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"8. What is the purpose of viral suppression in HIV/AIDS management?";
					this->radioButton1->Text = L"a. To prevent transmission to others";
					this->radioButton2->Text = L"b. To reduce the risk of opportunistic infections";
					this->radioButton3->Text = L"c. To prolong life expectancy";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"8. What is the impact of HIV/AIDS on the immune system?";
					this->radioButton1->Text = L"a. All of the below";
					this->radioButton2->Text = L"b. Increased production of antibodies";
					this->radioButton3->Text = L"c. Enhanced response to infections";
					this->radioButton4->Text = L"d. Progressive weakening of immune function";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"8. What is the importance of parental support and advocacy for individuals with Down syndrome?";
					this->radioButton1->Text = L"a. To navigate healthcare systems";
					this->radioButton2->Text = L"b. To access educational resources";
					this->radioButton3->Text = L"c. To promote independence";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"8. What is the role of occupational therapy in managing Down syndrome?";
					this->radioButton1->Text = L"a. To improve fine motor skills";
					this->radioButton2->Text = L"b. To enhance activities of daily living";
					this->radioButton3->Text = L"c. To promote sensory integration";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button8->Visible = true;
			this->button7->Visible = false;
		}


	}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton4->Checked == true)
			{
				arr[7] = 2;
			}
			else {
				arr[7] = 0;
			}
			//MessageBox::Show("arr[7]: " + arr[7]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"9. What is the purpose of targeted therapy in breast cancer treatment?";
					this->radioButton1->Text = L"a. None of the below";
					this->radioButton2->Text = L"b. To minimize side effects";
					this->radioButton3->Text = L"c. To improve survival rates";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. To specifically attack cancer cells";
					break;
				case 2:this->label1->Text = L"9. What is the role of genetic testing in breast cancer management?";
					this->radioButton1->Text = L"a. To assess the risk of hereditary breast cancer";
					this->radioButton2->Text = L"b. To guide treatment decisions";
					this->radioButton3->Text = L"c. To inform family members of potential risks";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"9. What is the importance of creating a safe environment for individuals with dementia?";
					this->radioButton1->Text = L"a. To prevent accidents and injuries";
					this->radioButton2->Text = L"b. To reduce agitation and confusion";
					this->radioButton3->Text = L"c. To promote independence";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				case 2:this->label1->Text = L"9. What is the impact of dementia on life expectancy?";
					this->radioButton1->Text = L"a. None of the below";
					this->radioButton2->Text = L"b. It has no significant impact on life expectancy";
					this->radioButton3->Text = L"c. It increases life expectancy";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. It reduces life expectancy by several years";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"9. What is the role of oral medications in type 2 diabetes management?";
					this->radioButton1->Text = L"a. To increase insulin production";
					this->radioButton2->Text = L"b. None listed";
					this->radioButton3->Text = L"c. To stimulate glucose uptake by cells";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. To decrease insulin resistance";
					break;
				case 2:this->label1->Text = L"9. What is the impact of diabetes on kidney function?";
					this->radioButton1->Text = L"a. Increased risk of kidney disease";
					this->radioButton2->Text = L"b. Impaired filtration of waste products";
					this->radioButton3->Text = L"c. Elevated protein levels in urine";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"9. What is the role of post-exposure prophylaxis (PEP) in HIV prevention?";
					this->radioButton1->Text = L"a. None of the below";
					this->radioButton2->Text = L"b. To treat acute HIV infection";
					this->radioButton3->Text = L"c. To prevent HIV acquisition during high-risk activities";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. To prevent HIV transmission after potential exposure";
					break;
				case 2:this->label1->Text = L"9. What is the impact of HIV/AIDS on mental health?";
					this->radioButton1->Text = L"a. Increased risk of depression and anxiety";
					this->radioButton2->Text = L"b. Impaired cognitive function";
					this->radioButton3->Text = L"c. Social stigma and discrimination";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"9. What is the impact of Down syndrome on social development?";
					this->radioButton1->Text = L"a. Difficulty with social cues";
					this->radioButton2->Text = L"b. Challenges with peer relationships";
					this->radioButton3->Text = L"c. Limited social interactions";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				case 2:this->label1->Text = L"9. What is the importance of community support groups for families of individuals with Down syndrome?";
					this->radioButton1->Text = L"a. To share experiences and resources";
					this->radioButton2->Text = L"b. To provide emotional support";
					this->radioButton3->Text = L"c. To advocate for awareness and inclusion";
					this->radioButton4->Text = L"d. None of the above";
					this->radioButton5->Text = L"e. All of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button9->Visible = true;
			this->button8->Visible = false;
		}


	}
	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e) {

		int counter = 0;
		if ((this->radioButton1->Checked == false) && (this->radioButton2->Checked == false) && (this->radioButton3->Checked == false) && (this->radioButton4->Checked == false) && (this->radioButton5->Checked == false))
		{
			MessageBox::Show("Warning, You are not allowed to proceed to the next question without selecting an answer!");
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;
		}
		else
		{
			counter = 1;
		}

		if (counter == 1)
		{
			if (this->radioButton5->Checked == true)
			{
				arr[8] = 2;
			}
			else {
				arr[8] = 0;
			}
			//MessageBox::Show("arr[8]: " + arr[8]); //USED TO TEST IF SCORES WERE ACCURATE
			this->radioButton1->Checked = false;
			this->radioButton2->Checked = false;
			this->radioButton3->Checked = false;
			this->radioButton4->Checked = false;
			this->radioButton5->Checked = false;

			int x;
			x = static_cast<int>(time(0));
			srand(x);
			int newscenario = 1 + rand() % 2;
			switch (finalrandom) {
			case 1: this->richTextBox1->Text = L"A highly aggressive form of breast cancer, characterized by rapid tumor growth and metastasis to distant organs. Patients present with palpable breast lumps, nipple discharge, and skin changes. Diagnostic methods include mammography, biopsy, and imaging scans to determine the extent of metastasis. Risk factors include family history, genetic mutations (BRCA1, BRCA2), and hormone imbalance. Treatment modalities include surgery, chemotherapy, radiation therapy, targeted therapy, and hormone therapy. Despite advancements, prognosis remains guarded, emphasizing the need for early detection and comprehensive treatment approaches.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"10. What is the primary goal of breast cancer treatment?";
					this->radioButton1->Text = L"a. To cure the disease";
					this->radioButton2->Text = L"b. To prolong survival";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. To improve quality of life";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"10. What is the importance of follow-up care after breast cancer treatment?";
					this->radioButton1->Text = L"a. To monitor for recurrence";
					this->radioButton2->Text = L"b. To manage side effects";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. To address psychosocial needs";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}

				break;
			case 2: this->richTextBox1->Text = L"Dementia, a progressive neurological disorder, characterized by cognitive decline, memory loss, and impaired daily functioning. Patients exhibit difficulties in communication, reasoning, and problem-solving. Diagnosis involves comprehensive neurological assessments, cognitive tests, and brain imaging studies. Risk factors include aging, family history, and certain genetic mutations. Management focuses on symptom alleviation, supportive care, and lifestyle modifications. Despite ongoing research, there is currently no cure for dementia.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"10. What is the term for progressive loss of language skills in dementia?";
					this->radioButton1->Text = L"a. Apraxia";
					this->radioButton2->Text = L"b. Dysphagia";
					this->radioButton3->Text = L"c. Aphasia";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"10. What is the importance of early diagnosis in dementia?";
					this->radioButton1->Text = L"a. To initiate appropriate treatment";
					this->radioButton2->Text = L"b. To plan for future care needs";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. To address safety concerns";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 3: this->richTextBox1->Text = L"Diabetes, a chronic metabolic disorder characterized by high blood sugar levels due to insufficient insulin production or ineffective insulin use by the body. Patients experience symptoms such as excessive thirst, frequent urination, and unexplained weight loss. Diagnosis involves blood tests to measure glucose levels and assess insulin function. Risk factors include obesity, sedentary lifestyle, and family history. Management focuses on lifestyle modifications, medication (such as insulin therapy), and regular monitoring of blood sugar levels. Complications of uncontrolled diabetes include cardiovascular disease, kidney damage, and neuropathy.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"10. What is the importance of regular eye exams in diabetes?";
					this->radioButton1->Text = L"a. To assess visual acuity";
					this->radioButton2->Text = L"b. To monitor for cataracts and glaucoma";
					this->radioButton3->Text = L"c. To detect diabetic retinopathy";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"10. What is the significance of postprandial blood sugar levels in diabetes management?";
					this->radioButton1->Text = L"a. They measure long-term blood sugar control";
					this->radioButton2->Text = L"b. They indicate fasting glucose levels";
					this->radioButton3->Text = L"c. They reflect glucose control after meals";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 4: this->richTextBox1->Text = L"HIV/AIDS, a viral infection caused by the human immunodeficiency virus (HIV), leading to acquired immunodeficiency syndrome (AIDS). HIV attacks the immune system, specifically targeting CD4 cells, weakening the body's ability to fight infections and diseases. Transmission occurs through unprotected sexual intercourse, contaminated blood transfusions, and sharing of needles. Diagnosis involves blood tests to detect HIV antibodies or viral RNA. Treatment involves antiretroviral therapy (ART) to suppress viral replication and prevent disease progression. Despite advancements, HIV/AIDS remains a global health challenge with no cure.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"10. What is the significance of HIV testing and counseling?";
					this->radioButton1->Text = L"a. It encourages early diagnosis and treatment";
					this->radioButton2->Text = L"b. It provides emotional support and education";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. It reduces the risk of HIV transmission";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"10. What is the impact of HIV/AIDS on global health?";
					this->radioButton1->Text = L"a. It is a leading cause of morbidity and mortality";
					this->radioButton2->Text = L"b. It disproportionately affects vulnerable populations";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. It strains healthcare systems";
					this->radioButton5->Text = L" e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			case 5: this->richTextBox1->Text = L"Down syndrome, a genetic disorder caused by the presence of an extra copy of chromosome 21, resulting in developmental delays and intellectual disabilities. Individuals with Down syndrome often exhibit characteristic physical features such as almond-shaped eyes, a flat facial profile, and a protruding tongue. Diagnosis is typically made shortly after birth through genetic testing such as karyotyping. Management involves early intervention programs, educational support, and medical care tailored to address associated health conditions such as heart defects and thyroid disorders. Despite challenges, individuals with Down syndrome lead fulfilling lives and contribute positively to their communities.";
				switch (newscenario)
				{
				case 1:this->label1->Text = L"10. What is the significance of early detection of health issues in individuals with Down syndrome?";
					this->radioButton1->Text = L"a. To prevent complications";
					this->radioButton2->Text = L"b. To improve treatment outcomes";
					this->radioButton3->Text = L"c. All listed";
					this->radioButton4->Text = L"d. To enhance quality of life";
					this->radioButton5->Text = L"e. None of the above";
					break;
				case 2:this->label1->Text = L"10. What is the impact of Down syndrome on cognitive abilities?";
					this->radioButton1->Text = L"a. Severe cognitive impairment";
					this->radioButton2->Text = L"b. Normal cognitive function";
					this->radioButton3->Text = L"c. Mild to moderate intellectual disability";
					this->radioButton4->Text = L"d. All of the above";
					this->radioButton5->Text = L"e. None of the above";
					break;
				default: this->richTextBox1->Text = L""; break;
				}
				break;
			default: this->richTextBox1->Text = L""; break;
			}

			this->button10->Visible = true;
			this->button9->Visible = false;
		}


	}
	};
}
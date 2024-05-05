#pragma once
#include <vector>
#include <random>
#include <algorithm>
#include <numeric>
#include "LevelTwoForm.h"

namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class LevelOneForm : public System::Windows::Forms::Form {
	public:
		LevelOneForm(void)
		{

			InitializeComponent();
			InitializeQuestionsAndAnswers();
			ShuffleQuestions();
			ShowQuestion();
		}

	protected:
		~LevelOneForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ scoreLabel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ nextLevelButton;
	private: System::Windows::Forms::Button^ restartButton;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		Button^ nextLevelButtonOpenLevelThreeForm;
		System::ComponentModel::Container^ components;
		int currentQuestionIndex = 0;
		int score = 0;
		cli::array<String^>^ questions;
		cli::array<bool>^ answers;


		void InitializeQuestionsAndAnswers()
		{
			questions = gcnew cli::array<String^>{
				"Sterilization is essential for all surgical instruments, regardless of the procedure's perceived complexity, to prevent infections.",
					"Anesthesia is used to ensure that patients remain unconscious and pain-free during surgery.",
					"A laparotomy is a type of surgery that involves making a large incision in the abdominal wall.",
					"Surgical scrubs, masks, and gloves are optional depending on the type of surgery being performed.",
					"It is safe to perform surgeries without a pre-operative check-up.",
					"Robotic surgery allows for greater precision and smaller incisions compared to traditional surgery.",
					"Post-operative care is crucial for the detection of complications and ensuring a smooth recovery.",
					"Surgeons can operate outside of their specialty if they deem it necessary.",
					"Minimally invasive surgery typically results in quicker recovery times than open surgery.",
					"Antibiotics are administered before certain surgeries to prevent post-operative infections.",
					"Handwashing is required only after the surgery is completed.",
					"Surgical instruments can be reused between surgeries without sterilization if they appear clean.",
					"Operating rooms are equipped with special ventilation systems to reduce the risk of airborne infections.",
					"Surgeons and surgical staff do not need to wear hair covers if they keep their hair short.",
					"Double gloving during surgery is an unnecessary precaution.",
					"All personnel in the operating room must wear masks at all times during a surgery.",
					"It is acceptable for surgeons to wear their surgical scrubs outside the hospital.",
					"Footwear in the operating room does not need to be specialized as long as it is clean.",
					"The use of antibiotics is a substitute for adhering to strict hygiene protocols in surgery.",
					"Surgical sites need to be cleaned with antiseptics before incision.",
					"The temperature in an operating room is kept higher than normal room temperature to promote sterility.",
					"Surgical lights should be adjustable and focusable to ensure optimal visibility during procedures.",
					"All electronic equipment in the operating room must be grounded to prevent electrical shocks.",
					"An operating room can be set up in any sequence as long as all necessary equipment is available.",
					"Mobile phones are allowed in the operating room as long as they are set to silent mode.",
					"Only the surgical team and necessary medical staff are allowed inside the operating room during a procedure.",
					"Operating rooms need to have both primary and backup power supplies.",
					"Sterile instruments are placed directly on the operating table before the surgery starts.",
					"The humidity level in an operating room does not affect surgical outcomes.",
					"The operating room must have a facility for immediate disposal of medical waste."
			};
			answers = gcnew cli::array <bool> {
				true, true, true, false, false, true, true, false, true, true,
					false, false, true, false, false, true, false, false, false, true,
					false, true, true, false, false, true, true, false, false, true
			};
		}

		void ShuffleQuestions()
		{
			// Shuffle questions and answers together using the same indices
			Random^ rnd = gcnew Random();
			for (int i = 0; i < questions->Length; i++)
			{
				int randomIndex = rnd->Next(i, questions->Length);
				String^ tempQuestion = questions[i];
				bool tempAnswer = answers[i];
				questions[i] = questions[randomIndex];
				answers[i] = answers[randomIndex];
				questions[randomIndex] = tempQuestion;
				answers[randomIndex] = tempAnswer;
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelOneForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->scoreLabel = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->nextLevelButton = (gcnew System::Windows::Forms::Button());
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->nextLevelButtonOpenLevelThreeForm = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(12, 159);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(950, 403);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &LevelOneForm::pictureBox1_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(200, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(619, 70);
			this->label1->TabIndex = 3;
			this->label1->Text = L"TRUE OR FALSE\?";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Click += gcnew System::EventHandler(this, &LevelOneForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(109, 239);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(763, 104);
			this->label2->TabIndex = 2;
			this->label2->Text = L"QUESTION";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// scoreLabel
			// 
			this->scoreLabel->BackColor = System::Drawing::Color::Transparent;
			this->scoreLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->scoreLabel->ForeColor = System::Drawing::Color::Azure;
			this->scoreLabel->Location = System::Drawing::Point(333, 108);
			this->scoreLabel->Name = L"scoreLabel";
			this->scoreLabel->Size = System::Drawing::Size(351, 34);
			this->scoreLabel->TabIndex = 4;
			this->scoreLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Green;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->button1->Location = System::Drawing::Point(208, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(272, 103);
			this->button1->TabIndex = 1;
			this->button1->Text = L"TRUE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &LevelOneForm::TrueButton_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(486, 376);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(251, 103);
			this->button2->TabIndex = 0;
			this->button2->Text = L"FALSE";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &LevelOneForm::FalseButton_Click);
			// 
			// nextLevelButton
			// 
			this->nextLevelButton->BackColor = System::Drawing::Color::Green;
			this->nextLevelButton->ForeColor = System::Drawing::Color::Black;
			this->nextLevelButton->Location = System::Drawing::Point(812, 500);
			this->nextLevelButton->Name = L"nextLevelButton";
			this->nextLevelButton->Size = System::Drawing::Size(150, 50);
			this->nextLevelButton->TabIndex = 0;
			this->nextLevelButton->Text = L"NEXT LEVEL";
			this->nextLevelButton->UseVisualStyleBackColor = false;
			this->nextLevelButton->Visible = false;
			this->nextLevelButton->Click += gcnew System::EventHandler(this, &LevelOneForm::NextLevelButton_Click);
			// 
			// restartButton
			// 
			this->restartButton->BackColor = System::Drawing::Color::Red;
			this->restartButton->ForeColor = System::Drawing::Color::Black;
			this->restartButton->Location = System::Drawing::Point(12, 499);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(150, 50);
			this->restartButton->TabIndex = 1;
			this->restartButton->Text = L"RESTART";
			this->restartButton->UseVisualStyleBackColor = false;
			this->restartButton->Visible = false;
			this->restartButton->Click += gcnew System::EventHandler(this, &LevelOneForm::RestartButton_Click);
			// 
			// nextLevelButtonOpenLevelThreeForm
			// 
			this->nextLevelButtonOpenLevelThreeForm->Location = System::Drawing::Point(0, 0);
			this->nextLevelButtonOpenLevelThreeForm->Name = L"nextLevelButtonOpenLevelThreeForm";
			this->nextLevelButtonOpenLevelThreeForm->Size = System::Drawing::Size(75, 23);
			this->nextLevelButtonOpenLevelThreeForm->TabIndex = 0;
			// 
			// LevelOneForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(974, 561);
			this->Controls->Add(this->nextLevelButton);
			this->Controls->Add(this->restartButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->scoreLabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->DoubleBuffered = true;
			this->Name = L"LevelOneForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LEVEL ONE: TRUE AND FALSE";
			this->Load += gcnew System::EventHandler(this, &LevelOneForm::LevelOneForm_Load_1);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}

		void ShowQuestion()
		{
			if (currentQuestionIndex < 10)  //ensures it uses the limited number of questions
			{
				label2->Text = questions[currentQuestionIndex];
			}
			else
			{
				// Finalize quiz and display score and message based on the score
				label2->Text = "Quiz Completed!";
				scoreLabel->Text = "Your Score: " + score.ToString() + "/10";
				button1->Enabled = false;
				button2->Enabled = false;

				// Change the image and message based on the score
				if (score >= 5)
				{
					label2->Text = "Well Done! You can proceed to the next level!";
					nextLevelButton->Visible = true;
				}
				else
				{
					label2->Text = "Try Again!";
					restartButton->Visible = true;
				}

			}
		}


		void TrueButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			CheckAnswer(true);
		}

		void FalseButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			CheckAnswer(false);
		}

		void CheckAnswer(bool userAnswer)
		{
			if (answers[currentQuestionIndex] == userAnswer) score++;
			currentQuestionIndex++;
			ShowQuestion();
		}

		void LevelOneForm::NextLevelButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			MessageBox::Show("Loading Next Level...");
			this->Hide();
			LevelTwoForm^ lvlTwo = gcnew LevelTwoForm(score);
			lvlTwo->ShowDialog();
		}


		void RestartButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Restart the game
			this->score = 0;
			this->currentQuestionIndex = 0;
			ShuffleQuestions();  // Optional: Shuffle questions again for a fresh start
			ShowQuestion();      // Show the first question again
			button1->Enabled = true;
			button2->Enabled = true;
			restartButton->Visible = false;
			nextLevelButton->Visible = false;
		}

#pragma endregion
	private: System::Void LevelOneForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void scoreLabel_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LevelOneForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
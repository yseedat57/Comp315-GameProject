#pragma once
#include "LevelThreeForm.h"

namespace GameProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for CertificateForm
    /// </summary>
    public ref class LevelTwoForm : public System::Windows::Forms::Form
    {
        int level1score;
        String^ username;
    public:
        LevelTwoForm(void)
        {
            InitializeComponent();
            InitializeQuiz();
        }
        LevelTwoForm(int level1score,String^ data)
        {
            InitializeComponent();
           
            this->level1score = level1score;
            this->username = data;
            //
            //TODO: Add the constructor code here
            //
        }

    protected:
        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        ~LevelTwoForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        System::Windows::Forms::TextBox^ Title;
        System::Windows::Forms::Panel^ panel1;
        System::Windows::Forms::PictureBox^ heart;
        System::Windows::Forms::RichTextBox^ QuestionBox;
        System::Windows::Forms::TextBox^ answerBox;
        System::Windows::Forms::Button^ submitButton;
        System::Windows::Forms::Button^ nextLevelButton; // Next Level Button
        System::Windows::Forms::Button^ retryButton;     // Retry Button
        List<String^>^ questions;
        List<String^>^ answers;
        int currentQuestionIndex;
        int correctAnswer;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::PictureBox^ pictureBox1;
           System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           /// <summary>
           /// Required method for Designer support - do not modify
           /// the contents of this method with the code editor.
           /// </summary>
           void InitializeComponent(void)
           {
               System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LevelTwoForm::typeid));
               this->QuestionBox = (gcnew System::Windows::Forms::RichTextBox());
               this->answerBox = (gcnew System::Windows::Forms::TextBox());
               this->submitButton = (gcnew System::Windows::Forms::Button());
               this->panel2 = (gcnew System::Windows::Forms::Panel());
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->nextLevelButton = (gcnew System::Windows::Forms::Button());
               this->retryButton = (gcnew System::Windows::Forms::Button());
               this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
               this->panel2->SuspendLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
               this->SuspendLayout();
               // 
               // QuestionBox
               // 
               this->QuestionBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->QuestionBox->BackColor = System::Drawing::Color::DimGray;
               this->QuestionBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->QuestionBox->ForeColor = System::Drawing::Color::Black;
               this->QuestionBox->Location = System::Drawing::Point(3, 3);
               this->QuestionBox->Name = L"QuestionBox";
               this->QuestionBox->ReadOnly = true;
               this->QuestionBox->Size = System::Drawing::Size(416, 111);
               this->QuestionBox->TabIndex = 3;
               this->QuestionBox->Text = L"Question";
               // 
               // answerBox
               // 
               this->answerBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->answerBox->BackColor = System::Drawing::Color::DimGray;
               this->answerBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->answerBox->ForeColor = System::Drawing::Color::Black;
               this->answerBox->Location = System::Drawing::Point(56, 143);
               this->answerBox->Name = L"answerBox";
               this->answerBox->Size = System::Drawing::Size(314, 35);
               this->answerBox->TabIndex = 4;
               // 
               // submitButton
               // 
               this->submitButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
               this->submitButton->BackColor = System::Drawing::Color::DimGray;
               this->submitButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->submitButton->ForeColor = System::Drawing::Color::Black;
               this->submitButton->Location = System::Drawing::Point(201, 200);
               this->submitButton->Name = L"submitButton";
               this->submitButton->Size = System::Drawing::Size(96, 45);
               this->submitButton->TabIndex = 5;
               this->submitButton->Text = L"Submit";
               this->submitButton->UseVisualStyleBackColor = false;
               this->submitButton->Click += gcnew System::EventHandler(this, &LevelTwoForm::submitButton_Click);
               // 
               // panel2
               // 
               this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                   | System::Windows::Forms::AnchorStyles::Right));
               this->panel2->BackColor = System::Drawing::Color::White;
               this->panel2->Controls->Add(this->QuestionBox);
               this->panel2->Controls->Add(this->answerBox);
               this->panel2->Controls->Add(this->submitButton);
               this->panel2->Location = System::Drawing::Point(99, 204);
               this->panel2->Name = L"panel2";
               this->panel2->Size = System::Drawing::Size(423, 248);
               this->panel2->TabIndex = 6;
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->BackColor = System::Drawing::Color::White;
               this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(0)));
               this->label1->ForeColor = System::Drawing::Color::Black;
               this->label1->Location = System::Drawing::Point(29, 9);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(505, 65);
               this->label1->TabIndex = 7;
               this->label1->Text = L"FILL IN THE ANSWER";
               // 
               // nextLevelButton
               // 
               this->nextLevelButton->BackColor = System::Drawing::Color::DarkGreen;
               this->nextLevelButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
               this->nextLevelButton->ForeColor = System::Drawing::Color::White;
               this->nextLevelButton->Location = System::Drawing::Point(412, 460);
               this->nextLevelButton->Name = L"nextLevelButton";
               this->nextLevelButton->Size = System::Drawing::Size(200, 40);
               this->nextLevelButton->TabIndex = 8;
               this->nextLevelButton->Text = L"Next Level";
               this->nextLevelButton->UseVisualStyleBackColor = false;
               this->nextLevelButton->Visible = false;
               this->nextLevelButton->Click += gcnew System::EventHandler(this, &LevelTwoForm::nextLevelButton_Click);
               // 
               // retryButton
               // 
               this->retryButton->BackColor = System::Drawing::Color::DarkRed;
               this->retryButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
               this->retryButton->ForeColor = System::Drawing::Color::White;
               this->retryButton->Location = System::Drawing::Point(10, 460);
               this->retryButton->Name = L"retryButton";
               this->retryButton->Size = System::Drawing::Size(200, 40);
               this->retryButton->TabIndex = 9;
               this->retryButton->Text = L"Try Again";
               this->retryButton->UseVisualStyleBackColor = false;
               this->retryButton->Visible = false;
               this->retryButton->Click += gcnew System::EventHandler(this, &LevelTwoForm::retryButton_Click);
               // 
               // pictureBox1
               // 
               this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
               this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
               this->pictureBox1->Location = System::Drawing::Point(0, 0);
               this->pictureBox1->Name = L"pictureBox1";
               this->pictureBox1->Size = System::Drawing::Size(622, 503);
               this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
               this->pictureBox1->TabIndex = 10;
               this->pictureBox1->TabStop = false;
               // 
               // LevelTwoForm
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(66)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
                   static_cast<System::Int32>(static_cast<System::Byte>(17)));
               this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
               this->ClientSize = System::Drawing::Size(622, 503);
               this->Controls->Add(this->label1);
               this->Controls->Add(this->panel2);
               this->Controls->Add(this->nextLevelButton);
               this->Controls->Add(this->retryButton);
               this->Controls->Add(this->pictureBox1);
               this->Name = L"LevelTwoForm";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
               this->Text = L"LEVEL TWO: Type word answers starting with a \"CAPITAL\" case letter";
               this->Load += gcnew System::EventHandler(this, &LevelTwoForm::LevelTwoForm_Load);
               this->panel2->ResumeLayout(false);
               this->panel2->PerformLayout();
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:
        void InitializeQuiz()
        {
            questions = gcnew List<String^>();
            answers = gcnew List<String^>();
            correctAnswer = 0;

            // Add questions
            questions->Add("The human heart has ___ chambers.");
            questions->Add("Your heart pumps ___ gallons of blood a day.");
            questions->Add("The heart beats ___ times per day.");
            questions->Add("There are ___ miles of blood vessels in your body.");
            questions->Add("The heart starts beating ___ weeks into fetal development");
            questions->Add("The first ever heart transplant was performed in ___ (Country).");
            questions->Add("The biggest artery in the human body is the ___");
            questions->Add("Which part of the body doesn't change in size from birth?");
            questions->Add("What connects muscles to bones?");
            questions->Add("Which system sends electrical impulses?");
            questions->Add("What is the bodies support and protection system?");
            questions->Add("What is the process of obtaining energy through food?");
            questions->Add("Which organ stores bile?");
            questions->Add("What part of the body does not feel pain?");
            questions->Add("Which organ is part of both the respitory and digestive system?");
            questions->Add("What is the protein that gives skin it's color?");

            // Add Answers
            answers->Add("4");
            answers->Add("2000");
            answers->Add("100000");
            answers->Add("60000");
            answers->Add("4");
            answers->Add("South Africa");
            answers->Add("Aorta");
            answers->Add("Eyes");
            answers->Add("Tendon");
            answers->Add("Nervous system");
            answers->Add("Skeletal system");
            answers->Add("Metabolism");
            answers->Add("Gallbladder");
            answers->Add("Brain");
            answers->Add("Pharynx");
            answers->Add("Melanin");

            currentQuestionIndex = -1;
            
        }

        void RestartQuiz()
        {
            correctAnswer = 0;
            currentQuestionIndex = -1;
            NextQuestion(); // Start the quiz over
            answerBox->Enabled = true;
            submitButton->Enabled = true;
            retryButton->Visible = false;
            nextLevelButton->Visible = false;
        }

        void NextQuestion()
        {
            currentQuestionIndex++; // Increment the question index
            if (currentQuestionIndex < questions->Count)
            {
                QuestionBox->Text = questions[currentQuestionIndex]; // Display the next question
                answerBox->Clear(); // Clear any previous answer
            }
            else
            {
                answerBox->Enabled = false;
                submitButton->Enabled = false;

                if (correctAnswer >= 8)
                {
                    MessageBox::Show("Congratulations! You scored " + correctAnswer + ". You can proceed to the next level.");
                    retryButton->Visible = false;
                    nextLevelButton->Visible = true;
                }
                else
                {
                    MessageBox::Show("You scored " + correctAnswer + ". Unfortunately, you need to score at least 8 to proceed. Please try again.");
                    nextLevelButton->Visible = false;
                    retryButton->Visible = true;
                }
            }
        }

        void SubmitAnswer()
        {
            String^ userAnswer = answerBox->Text->Trim();
            if (userAnswer->Equals(answers[currentQuestionIndex], StringComparison::InvariantCultureIgnoreCase))
            {
                MessageBox::Show("Correct!");
                correctAnswer++;
            }
            else
            {
                MessageBox::Show("Incorrect. The correct answer is: " + answers[currentQuestionIndex]);
            }
            NextQuestion(); // Load the next question or handle quiz completion
        }

        void submitButton_Click(System::Object^ sender, System::EventArgs^ e) {
            SubmitAnswer();
        }

        void nextLevelButton_Click(System::Object^ sender, System::EventArgs^ e) {
            MessageBox::Show("Loading next level...");
            this->Hide();
            LevelThreeForm^ lvlThree = gcnew LevelThreeForm(level1score,correctAnswer,username);
            lvlThree->ShowDialog();
        }

        void retryButton_Click(System::Object^ sender, System::EventArgs^ e) {
            RestartQuiz();
        }
    private: System::Void LevelTwoForm_Load(System::Object^ sender, System::EventArgs^ e) {
        InitializeQuiz();
        NextQuestion(); // Load the first question
    }
    };
}
#pragma once




namespace GameProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for LeaderForm
	/// </summary>
	public ref class LeaderForm : public System::Windows::Forms::Form
	{
	public:
		LeaderForm(void)
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
		~LeaderForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LeaderForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(-3, -2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(603, 409);
			this->panel1->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->Location = System::Drawing::Point(65, 81);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(469, 229);
			this->dataGridView1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Noto Serif", 26.25F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(170, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(262, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Leaderboard:";
			this->label1->Click += gcnew System::EventHandler(this, &LeaderForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(603, 406);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// LeaderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(598, 402);
			this->Controls->Add(this->panel1);
			this->Name = L"LeaderForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Leaderboard";
			this->Load += gcnew System::EventHandler(this, &LeaderForm::Leaderboard_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		ref class User {
		public:
			int rank;
			System::String^ name;
			int score;

		};

		cli::array <User^>^ fillArray(String^ file) {
			int i = 0;




			StreamReader^ tin = File::OpenText(file);
			int count = 1;
			String^ line;
			while ((line = tin->ReadLine()) != nullptr) {
				count++;
			}
			int maxlines = count - 1;
			cli::array< User^ >^ user = gcnew cli::array< User^ >(maxlines);
			StreamReader^ din = File::OpenText(file);

			while ((line = din->ReadLine()) != nullptr) {
				cli::array<String^>^ columns = line->Split('#');
				user[i] = gcnew User;
				user[i]->name = columns[0];
				user[i]->score = System::Convert::ToInt32(columns[1]);
				i++;
			}
			int temp;
			String^ stemp;
			bool swapped;
			for (int i = 0; i < maxlines - 1; i++) {
				swapped = false;
				for (int j = 0; j < maxlines - i - 1; j++) {
					if ((user[j]->score) < (user[j + 1]->score)) {
						temp = user[j + 1]->score;
						user[j + 1]->score = user[j]->score;
						user[j]->score = temp;
						stemp = user[j + 1]->name;
						user[j + 1]->name = user[j]->name;
						user[j]->name = stemp;
						swapped = true;
					}


				}
			}

			for (int i = 0; i < maxlines; i++) {
				user[i]->rank = i + 1;
			}

			return user;
		}

#pragma endregion
	private: System::Void Leaderboard_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Parent = pictureBox1;
		String^ file = "User.txt";
		cli::array<User^>^ users;
		users= fillArray(file);

		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Add("rank", "Rank");
		dataGridView1->Columns->Add("name", "Name");
		dataGridView1->Columns->Add("score", "Score");

		for (int i = 0; i < users->Length; ++i) {
			dataGridView1->Rows->Add(users[i]->rank, users[i]->name, users[i]->score);
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
	


}


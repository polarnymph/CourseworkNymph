#pragma once
#include "ForXml.h"

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FormForArtist1
	/// </summary>
	public ref class FormForArtist1 : public System::Windows::Forms::Form
	{
	public:
		FormForArtist1(String^ nameOfArtist, String^ typeOfArtist, String^ path)
		{
			NameOfArtist = nameOfArtist;
			Path = path;
			TypeOfArtist = typeOfArtist;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::Label^ NameLabel;
	public:

	private: System::Windows::Forms::Label^ DiscriptionLabel;
	public:

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: String^ NameOfArtist;
	private: String^ Path;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: String^ TypeOfArtist;
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~FormForArtist1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormForArtist1::typeid));
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->DiscriptionLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->BackColor = System::Drawing::Color::White;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Unbounded", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameLabel->Location = System::Drawing::Point(60, 126);
			this->NameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(247, 51);
			this->NameLabel->TabIndex = 0;
			this->NameLabel->Text = L"NameLabel";
			// 
			// DiscriptionLabel
			// 
			this->DiscriptionLabel->AutoSize = true;
			this->DiscriptionLabel->Font = (gcnew System::Drawing::Font(L"Unbounded Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->DiscriptionLabel->Location = System::Drawing::Point(63, 190);
			this->DiscriptionLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->DiscriptionLabel->MaximumSize = System::Drawing::Size(984, 252);
			this->DiscriptionLabel->Name = L"DiscriptionLabel";
			this->DiscriptionLabel->Size = System::Drawing::Size(201, 31);
			this->DiscriptionLabel->TabIndex = 1;
			this->DiscriptionLabel->Text = L"DiscriptionLabel";
			this->DiscriptionLabel->Click += gcnew System::EventHandler(this, &FormForArtist1::DiscriptionLabel_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(69, 398);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->MaximumSize = System::Drawing::Size(984, 252);
			this->pictureBox1->MinimumSize = System::Drawing::Size(984, 252);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(984, 252);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, -1);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1262, 674);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unbounded", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(40, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(89, 42);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ќазад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormForArtist1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(451, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Unbounded", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(470, 34);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(242, 58);
			this->label2->TabIndex = 6;
			this->label2->Text = L"ƒ≈я“≈Ћ№";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Coworking", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(727, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(298, 40);
			this->label3->TabIndex = 7;
			this->label3->Text = L"»— ”——“¬ј";
			// 
			// FormForArtist1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->DiscriptionLabel);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->pictureBox2);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"FormForArtist1";
			this->Text = L"FormForArtist1";
			this->Load += gcnew System::EventHandler(this, &FormForArtist1::FormForArtist1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormForArtist1_Load(System::Object^ sender, System::EventArgs^ e) {
		DiscriptionLabel->Text = GetDiscriptionByAttribute(TypeOfArtist, NameOfArtist, Path + "\\Art.xml");
		NameLabel->Text = NameOfArtist;

		pictureBox1->Image = Image::FromFile(GetImageByAttribute(TypeOfArtist, NameOfArtist, Path + "\\Art.xml"));
	}
	private: System::Void DiscriptionLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}

#include "painting.h"
#using <System.dll>
#using <System.Configuration.dll>

#pragma once

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Configuration;

	/// <summary>
	/// Сводка для page1
	/// </summary>
	public ref class page1 : public System::Windows::Forms::Form
	{
	public:
		page1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~page1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
	private: System::Windows::Forms::Label^ PathLabel;
	private: System::Windows::Forms::Button^ PathButton;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(page1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->PathLabel = (gcnew System::Windows::Forms::Label());
			this->PathButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unbounded", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button1->Location = System::Drawing::Point(91, 376);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(387, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ФОТОГРАФИЯ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &page1::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Unbounded", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button2->Location = System::Drawing::Point(600, 461);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(387, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"СКУЛЬПТУРА";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &page1::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Unbounded", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button3->Location = System::Drawing::Point(600, 376);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(387, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"ЖИВОПИСЬ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &page1::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Unbounded", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button4->Location = System::Drawing::Point(91, 461);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(387, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"СТРИТ-АРТ";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &page1::button4_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Unbounded", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(199, 304);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(723, 43);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Выберите интересующий вид искусства";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Click += gcnew System::EventHandler(this, &page1::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1262, 674);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Unbounded", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(40, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(821, 72);
			this->label1->TabIndex = 8;
			this->label1->Text = L"СОВРЕМЕННЫЕ ДЕЯТЕЛИ \r\n";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Coworking", 42, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(418, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(578, 70);
			this->label4->TabIndex = 9;
			this->label4->Text = L"ИСКУССТВА \r\n";
			this->label4->Click += gcnew System::EventHandler(this, &page1::label4_Click);
			// 
			// PathLabel
			// 
			this->PathLabel->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->PathLabel->AutoSize = true;
			this->PathLabel->Font = (gcnew System::Drawing::Font(L"Unbounded Light", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PathLabel->Location = System::Drawing::Point(355, 589);
			this->PathLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PathLabel->Name = L"PathLabel";
			this->PathLabel->Size = System::Drawing::Size(60, 26);
			this->PathLabel->TabIndex = 10;
			this->PathLabel->Text = L"Путь";
			// 
			// PathButton
			// 
			this->PathButton->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->PathButton->BackColor = System::Drawing::Color::White;
			this->PathButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PathButton->Font = (gcnew System::Drawing::Font(L"Unbounded Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PathButton->ForeColor = System::Drawing::Color::Black;
			this->PathButton->Location = System::Drawing::Point(91, 577);
			this->PathButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PathButton->Name = L"PathButton";
			this->PathButton->Size = System::Drawing::Size(242, 47);
			this->PathButton->TabIndex = 11;
			this->PathButton->Text = L"Выбрать путь";
			this->PathButton->UseVisualStyleBackColor = false;
			this->PathButton->Click += gcnew System::EventHandler(this, &page1::PathButton_Click);
			// 
			// page1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1261, 673);
			this->Controls->Add(this->PathButton);
			this->Controls->Add(this->PathLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"page1";
			this->Text = L"Начальное окно";
			this->Load += gcnew System::EventHandler(this, &page1::page1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: String^ Path;
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*photo1^ About = gcnew photo1;
		About->Show();*/
		painting^ About = gcnew painting("Photographe", Path);
		About->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//sculpture^ About = gcnew sculpture;
		//About->Show();
		painting^ About = gcnew painting("Sculptor", Path);
		About->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		painting^ About = gcnew painting("Artist", Path);
		About->Show();
}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//streetart^ About = gcnew streetart;
		//About->Show();
		painting^ About = gcnew painting("Street", Path);
		About->Show();
}

		   bool IsSettingsSet() {
			   auto appSettings = ConfigurationManager::AppSettings;
			   return (appSettings[L"Path"] != nullptr);
		   }


private: System::Void PathButton_Click(System::Object^ sender, System::EventArgs^ e) {
	folderBrowserDialog1->ShowDialog();

	Path = folderBrowserDialog1->SelectedPath;
	PathLabel->Text = Path;

	System::Configuration::Configuration^ configFile = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	auto settings = configFile->AppSettings->Settings;
	if (IsSettingsSet())
		settings[L"Path"]->Value = Path;
	else
		settings->Add(L"Path", Path);

	configFile->Save(ConfigurationSaveMode::Modified);
	ConfigurationManager::RefreshSection(configFile->AppSettings->SectionInformation->Name);
}


private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void page1_Load(System::Object^ sender, System::EventArgs^ e) {
	System::Configuration::Configuration^ configFile = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	auto appSettings = ConfigurationManager::AppSettings;
	if (IsSettingsSet()) {
		Path = appSettings[L"Path"]->ToString();
	}
	PathLabel->Text = Path;
}
};
}

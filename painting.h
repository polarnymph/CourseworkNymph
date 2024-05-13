
#pragma once
#include "FormForArtist1.h"

//#define XML_UNICODE

namespace mart {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Xml;
	/// <summary>
	/// Сводка для painting
	/// </summary>
	public ref class painting : public System::Windows::Forms::Form
	{
	
	public:
		painting(String^ typeOfArtist, String^ path)
		{
			TypeOfArtist = typeOfArtist;
			Path = path;
			InitializeComponent();
			//LoadData();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~painting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: String^ TypeOfArtist;
	private: String^ Path;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(painting::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Unbounded", 8.999999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(37, 38);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->MaximumSize = System::Drawing::Size(93, 38);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 38);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &painting::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Unbounded", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(469, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(248, 58);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ДЕЯТЕЛИ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Unbounded", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(59, 127);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1150, 398);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->Click += gcnew System::EventHandler(this, &painting::dataGridView1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1262, 672);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(215)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Coworking", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(734, 36);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(298, 40);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ИСКУССТВА";
			this->label2->Click += gcnew System::EventHandler(this, &painting::label2_Click);
			// 
			// painting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1261, 673);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"painting";
			this->Text = L"Живопись";
			this->Load += gcnew System::EventHandler(this, &painting::painting_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: DataTable^ Table;
	private: System::Void painting_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		String^ PathOfFile = Path + "\\Art.xml";
		/*isSelect = false;
		ChangeButton->Enabled = false;
		DeleteButton->Enabled = false;*/
		Table = gcnew DataTable();
		
		if (IO::File::Exists(PathOfFile) == false) {
			//XmlDocument^ doc = gcnew XmlDocument();
			//XmlDeclaration^ declaration = doc->CreateXmlDeclaration("1.0", "utf-8", nullptr);
			//doc->AppendChild(declaration);

			//XmlElement^ tasksElement = doc->CreateElement("Tasks");
			//doc->AppendChild(tasksElement);

			//XmlElement^ emptyElement = doc->CreateElement("empty");
			//emptyElement->SetAttribute("id", "0");
			//tasksElement->AppendChild(emptyElement);

			//array<String^>^ nodeNames = { "Название", "Примечание", "Приоритет", "Статус" };
			//for each (String ^ nodeName in nodeNames)
			//{
			//	XmlElement^ childElement = doc->CreateElement(nodeName);
			//	emptyElement->AppendChild(childElement);
			//}
			//doc->Save("table.xml");
			//String^ applicationPath = Process::GetCurrentProcess()->MainModule->FileName;
			//Process::Start(applicationPath);
			//Process::GetCurrentProcess()->Kill();
		}
		else {
			DataSet^ Set = gcnew DataSet();
			XmlDocument^ doc = gcnew XmlDocument();
			doc->Load(PathOfFile);
			Set->ReadXml(PathOfFile);
			String^ StringXML = Set->GetXml();
			
			if (TypeOfArtist == "Artist") dataGridView1->DataMember = ("Artist");
			else if (TypeOfArtist == "Photographe") dataGridView1->DataMember = ("Photographe");
			else if (TypeOfArtist == "Sculptor") dataGridView1->DataMember = ("Sculptor");
			else if (TypeOfArtist == "Street") dataGridView1->DataMember = ("Street");
			
			//dataGridView1->DataMember = ("Artist");
			dataGridView1->DataSource = Set;
			
		}
		dataGridView1->ReadOnly = true;
		dataGridView1->Columns[1]->Visible = false;
		dataGridView1->Columns[2]->Visible = false;

		dataGridView1->ClearSelection();
		/*isSelect = false;
		ChangeButton->Enabled = false;
		DeleteButton->Enabled = false;*/

		dataGridView1->Refresh();
	}
private: System::Void dataGridView1_Click(System::Object^ sender, System::EventArgs^ e) {


	Object^ cellValue = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[dataGridView1->CurrentCell->ColumnIndex]->Value;

	if (cellValue != nullptr && cellValue != "") {
		Object^ cellValue1 = dataGridView1->Rows[dataGridView1->CurrentCell->RowIndex]->Cells[0]->Value;
		FormForArtist1^ a = gcnew FormForArtist1(cellValue1->ToString(), TypeOfArtist, Path);
		a->Show();
	}

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

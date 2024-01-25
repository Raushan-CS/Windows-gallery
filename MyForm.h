#pragma once

namespace ImageViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ ofd;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ofd = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1058, 703);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Location = System::Drawing::Point(9, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1046, 550);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 605);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1058, 98);
			this->panel2->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(457, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 15);
			this->textBox1->TabIndex = 9;
			this->textBox1->Text = L"Zoom";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button8->Location = System::Drawing::Point(255, 22);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 51);
			this->button8->TabIndex = 8;
			this->button8->Text = L">";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button5->Location = System::Drawing::Point(178, 22);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 51);
			this->button5->TabIndex = 7;
			this->button5->Text = L"<";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button7->Location = System::Drawing::Point(528, 22);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(53, 48);
			this->button7->TabIndex = 6;
			this->button7->Text = L"-";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button6->Location = System::Drawing::Point(603, 22);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(53, 48);
			this->button6->TabIndex = 5;
			this->button6->Text = L"+";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button4->Location = System::Drawing::Point(681, 22);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"=";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(794, 22);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Close";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(923, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Open";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button1->Location = System::Drawing::Point(12, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Restart All";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// ofd
			// 
			this->ofd->Filter = L"\"JPEG|*.jpg|All Files|*.*\"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1058, 703);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(1076, 637);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		array<String^>^ files;
		String^ path;
		int currentIndex;
		const int zoomLevel = 100;
		int zooms = 0;
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (currentIndex != files->Length)
		{
			currentIndex++;
		}
		pictureBox1->ImageLocation = files[currentIndex];

	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->ImageLocation = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		pictureBox1->ImageLocation = ofd->FileName;
		path = System::IO::Path::GetDirectoryName(ofd->FileName);
		files = System::IO::Directory::GetFiles(path);

		for (int i = 0; i < files->Length; i++) {
			if (files[i] == ofd->FileName)
			{
				currentIndex = i;
				break;
			}
		}
		}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (currentIndex != 0)
	{
		currentIndex--;
	}
	pictureBox1->ImageLocation = files[currentIndex];
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top -= zoomLevel / 2;
	pictureBox1->Left -= zoomLevel / 2;
	pictureBox1->Height += zoomLevel;
	pictureBox1->Width += zoomLevel;
	zooms++;
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	pictureBox1->Top += zoomLevel / 2;
	pictureBox1->Left += zoomLevel / 2;
	pictureBox1->Height -= zoomLevel;
	pictureBox1->Width -= zoomLevel;
	zooms--;
}

private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int newZoom = zooms;
	if (zooms > 0)
	{
		for (int i = 0; i < newZoom; i++)
		{
			button7->PerformClick();
		}
	}
	if (zooms < 0)
	{
		for (int i = 0; i > newZoom; i--)
		{
			button6->PerformClick();
		}
	}
	zooms = 0;
}
};
}

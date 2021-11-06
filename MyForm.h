#pragma once
#include "Forgot_Password.h"
#include "Register_Form.h"
#include "MainHub.h"

namespace GUIpractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

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

			//hide password text in text field and replace with asteriks for security reasons
			textBoxPWORD->PasswordChar = '*';
			//max password characters in text field
			textBoxPWORD->MaxLength = 25;
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
	private: System::Windows::Forms::Button^ buttonLogin;
	private: System::Windows::Forms::Button^ buttonForPas;
	protected:

	protected:

	private: System::Windows::Forms::Label^ labelUNAME;
	private: System::Windows::Forms::Label^ labelPWORD;
	private: System::Windows::Forms::TextBox^ textBoxUNAME;
	private: System::Windows::Forms::TextBox^ textBoxPWORD;
	private: System::Windows::Forms::Button^ buttonRegi;







	protected:




















	protected:


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
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->buttonForPas = (gcnew System::Windows::Forms::Button());
			this->labelUNAME = (gcnew System::Windows::Forms::Label());
			this->labelPWORD = (gcnew System::Windows::Forms::Label());
			this->textBoxUNAME = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPWORD = (gcnew System::Windows::Forms::TextBox());
			this->buttonRegi = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(32, 156);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(89, 25);
			this->buttonLogin->TabIndex = 0;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &MyForm::buttonLogin_Click);
			// 
			// buttonForPas
			// 
			this->buttonForPas->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonForPas->Location = System::Drawing::Point(32, 187);
			this->buttonForPas->Name = L"buttonForPas";
			this->buttonForPas->Size = System::Drawing::Size(186, 32);
			this->buttonForPas->TabIndex = 1;
			this->buttonForPas->Text = L"Forgot Password";
			this->buttonForPas->UseVisualStyleBackColor = true;
			this->buttonForPas->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// labelUNAME
			// 
			this->labelUNAME->AutoSize = true;
			this->labelUNAME->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUNAME->Location = System::Drawing::Point(28, 54);
			this->labelUNAME->Name = L"labelUNAME";
			this->labelUNAME->Size = System::Drawing::Size(83, 20);
			this->labelUNAME->TabIndex = 2;
			this->labelUNAME->Text = L"Username";
			this->labelUNAME->Click += gcnew System::EventHandler(this, &MyForm::Label1_Click);
			// 
			// labelPWORD
			// 
			this->labelPWORD->AutoSize = true;
			this->labelPWORD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelPWORD->Location = System::Drawing::Point(28, 100);
			this->labelPWORD->Name = L"labelPWORD";
			this->labelPWORD->Size = System::Drawing::Size(78, 20);
			this->labelPWORD->TabIndex = 3;
			this->labelPWORD->Text = L"Password";
			this->labelPWORD->Click += gcnew System::EventHandler(this, &MyForm::Label2_Click);
			// 
			// textBoxUNAME
			// 
			this->textBoxUNAME->Location = System::Drawing::Point(32, 77);
			this->textBoxUNAME->Name = L"textBoxUNAME";
			this->textBoxUNAME->Size = System::Drawing::Size(127, 20);
			this->textBoxUNAME->TabIndex = 4;
			this->textBoxUNAME->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// textBoxPWORD
			// 
			this->textBoxPWORD->Location = System::Drawing::Point(32, 123);
			this->textBoxPWORD->Name = L"textBoxPWORD";
			this->textBoxPWORD->Size = System::Drawing::Size(127, 20);
			this->textBoxPWORD->TabIndex = 5;
			this->textBoxPWORD->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxPWORD_TextChanged);
			// 
			// buttonRegi
			// 
			this->buttonRegi->Location = System::Drawing::Point(129, 156);
			this->buttonRegi->Name = L"buttonRegi";
			this->buttonRegi->Size = System::Drawing::Size(89, 25);
			this->buttonRegi->TabIndex = 6;
			this->buttonRegi->Text = L"Register";
			this->buttonRegi->UseVisualStyleBackColor = true;
			this->buttonRegi->Click += gcnew System::EventHandler(this, &MyForm::ButtonRegi_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(315, 359);
			this->Controls->Add(this->buttonRegi);
			this->Controls->Add(this->textBoxPWORD);
			this->Controls->Add(this->textBoxUNAME);
			this->Controls->Add(this->labelPWORD);
			this->Controls->Add(this->labelUNAME);
			this->Controls->Add(this->buttonForPas);
			this->Controls->Add(this->buttonLogin);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



	private: System::Void Button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}


private: System::Void Button10_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void CheckedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); //hide current form
	//declare new form and display
	Forgot_Password^ forgotPWordForm = gcnew Forgot_Password;
	forgotPWordForm->ShowDialog();
	
	


}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ButtonRegi_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide(); //hide current form
	Register_Form^ rform = gcnew Register_Form();
	rform->ShowDialog(); //open register form
}
private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	//connection to db upon click
	
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();
	//create query for login credential verification
	SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM app_user WHERE user_name='"+this->textBoxUNAME->Text+"' AND user_password='"+this->textBoxPWORD->Text+"';", con);
	cmd->ExecuteNonQuery();
	SqlDataReader^ rd = cmd->ExecuteReader();
	/* 
	//reads values from a database column as 64bit signed int
	while (rd->Read())
		__int64 id = rd->GetInt64(0);
	rd->Close(); 
	*/
	//upon successful verification do the following
	if (rd->HasRows) {
		MessageBox::Show("Login Successful");
		//System::String^ newguid = 
		this->Hide(); //hide current form
		MainHub^ mainHubForm = gcnew MainHub;
		mainHubForm->ShowDialog();
		//con->Close();
	}
	else {
		MessageBox::Show("Error. Login Attempt Failed");
		con->Close();
	}
}
private: System::Void textBoxPWORD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


}
};
}
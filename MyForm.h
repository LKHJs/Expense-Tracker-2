#pragma once
#include "Forgot_Password.h"
#include "Register_Form.h"
#include "MainHub.h"
#include <regex>

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
	private:
		String^ username;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxPIN;



		   // Create table to be used
		DataTable^ table = gcnew DataTable();

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
			//hide password text in textfield and replace with asteriks for security reasons
			textBoxPWORD->PasswordChar = '*';
			//max password characters in text field
			textBoxPWORD->MaxLength = 25;

			//hide identity pin text in textfield and replace with asteriks for security reasons
			textBoxPIN->PasswordChar = '*';
			//max pin characters in text field
			textBoxPIN->MaxLength = 4;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxPIN = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(32, 204);
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
			this->buttonForPas->Location = System::Drawing::Point(32, 235);
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
			this->buttonRegi->Location = System::Drawing::Point(127, 204);
			this->buttonRegi->Name = L"buttonRegi";
			this->buttonRegi->Size = System::Drawing::Size(89, 25);
			this->buttonRegi->TabIndex = 6;
			this->buttonRegi->Text = L"Register";
			this->buttonRegi->UseVisualStyleBackColor = true;
			this->buttonRegi->Click += gcnew System::EventHandler(this, &MyForm::ButtonRegi_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(28, 151);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 20);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Identity Pin";
			// 
			// textBoxPIN
			// 
			this->textBoxPIN->Location = System::Drawing::Point(32, 174);
			this->textBoxPIN->Name = L"textBoxPIN";
			this->textBoxPIN->Size = System::Drawing::Size(127, 20);
			this->textBoxPIN->TabIndex = 8;
			this->textBoxPIN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxPIN_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(315, 359);
			this->Controls->Add(this->textBoxPIN);
			this->Controls->Add(this->label1);
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

// Opens Forgot Password Page
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Forgot_Password^ forgotPWordForm = gcnew Forgot_Password; //declare new form and display
	this->Hide(); // Hides current form
	forgotPWordForm->ShowDialog();	// Opens next form
	this->Show();	// If next form is closed. Opens previous form. (This form.)
}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
// Opens Registration Page
private: System::Void ButtonRegi_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Register_Form^ rform = gcnew Register_Form(); // Creates form to be open next
	this->Hide(); // Hides current form
	rform->ShowDialog(); // Opens next form
	this->Show(); // If next form is closed. Opens previous form. (This form.)
}
// Opens User's Menu Page. (Page for users that are logged in)
private: System::Void buttonLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	//execute connection query with credentials and open connection to database server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	//create query for login credential verification
	SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM app_user WHERE user_name=(@user_name) AND user_password=(@user_password) AND identity_pin=(@identity_pin)", con);

	//make sure username is not empty
	if (String::IsNullOrEmpty(textBoxUNAME->Text))
	{
		MessageBox::Show("Error. Username field cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//con->Close();
	}
	//make sure password field is not empty
	else if (String::IsNullOrEmpty(textBoxPWORD->Text))
	{
		MessageBox::Show("Error. Password field cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//con->Close();
	}
	//make sure pin field is not empty
	else if (String::IsNullOrEmpty(textBoxPIN->Text))
	{
		MessageBox::Show("Error. Identity Pin field cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		//con->Close();
	}

	/******passing sql query values by parameter because concatenated sql queries are vulnerable to sql injection attacks******/
	cmd->Parameters->AddWithValue("@user_name", textBoxUNAME->Text);
	cmd->Parameters->AddWithValue("@user_password", textBoxPWORD->Text);
	cmd->Parameters->AddWithValue("@identity_pin", textBoxPIN->Text);

	cmd->ExecuteNonQuery(); //execute command
	SqlDataReader^ rd = cmd->ExecuteReader(); 
	
	
	//if SqlDataReader contains one or more rows login was successful
	if (rd->HasRows) {
		MessageBox::Show("Login Successful");
		MainHub^ mainHubForm = gcnew MainHub(textBoxUNAME->Text); // Creates form to be open next
		this->Hide(); //hide current form
		mainHubForm->ShowDialog(); // Opens next form
		
		this->Show();// If next form is closed. Opens previous form. (This form.)
		rd->Close();
		con->Close();

		//for security clearing crendtial textboxes incase a return to the login screen occurs after successful login
		textBoxUNAME->Clear();
		textBoxPWORD->Clear();
		textBoxPIN->Clear();
	}
	else {
		MessageBox::Show("One or More Credentials Incorrect.\n\n Login Attempt Failed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		rd->Close();
		con->Close();

		//clearing credential textboxes
		textBoxUNAME->Clear();
		textBoxPWORD->Clear();
		textBoxPIN->Clear();
	}

	//clearing credential textboxes
	textBoxUNAME->Clear();
	textBoxPWORD->Clear();
	textBoxPIN->Clear();

	rd->Close();
	con->Close();
}

private: System::Void textBoxPWORD_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void textBoxPIN_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Textbox accepts numbers only
	if (e->KeyChar == '.') {
		if (this->textBoxPIN->Text->Contains(".") && !this->textBoxPIN->SelectedText->Contains("."))
			e->Handled = true;
	}
	
	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}

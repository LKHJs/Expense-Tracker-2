#pragma once

namespace GUIpractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Register_Form
	/// </summary>
	public ref class Register_Form : public System::Windows::Forms::Form
	{
	public:
		
		Register_Form()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//max pin characters in text field
			textBox5->MaxLength = 4;
			textBox6->MaxLength = 4;
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Register_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_User_name;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_Password;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label_Re_Pass;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button_Create;
	private: System::Windows::Forms::Button^ button_Cancel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;


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
			this->label_User_name = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label_Password = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label_Re_Pass = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button_Create = (gcnew System::Windows::Forms::Button());
			this->button_Cancel = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label_User_name
			// 
			this->label_User_name->AutoSize = true;
			this->label_User_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_User_name->Location = System::Drawing::Point(13, 9);
			this->label_User_name->Name = L"label_User_name";
			this->label_User_name->Size = System::Drawing::Size(87, 20);
			this->label_User_name->TabIndex = 0;
			this->label_User_name->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(17, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(170, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Register_Form::textBox1_TextChanged);
			// 
			// label_Password
			// 
			this->label_Password->AutoSize = true;
			this->label_Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Password->Location = System::Drawing::Point(13, 55);
			this->label_Password->Name = L"label_Password";
			this->label_Password->Size = System::Drawing::Size(82, 20);
			this->label_Password->TabIndex = 2;
			this->label_Password->Text = L"Password:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(17, 78);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label_Re_Pass
			// 
			this->label_Re_Pass->AutoSize = true;
			this->label_Re_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Re_Pass->Location = System::Drawing::Point(12, 101);
			this->label_Re_Pass->Name = L"label_Re_Pass";
			this->label_Re_Pass->Size = System::Drawing::Size(151, 20);
			this->label_Re_Pass->TabIndex = 4;
			this->label_Re_Pass->Text = L"Re-Enter Password:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(17, 124);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(170, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Register_Form::TextBox3_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Security Question:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(17, 197);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Register_Form::textBox4_TextChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Name of your First pet\?", L"Name of the first school you attended\?",
					L"Mothers maiden name\?"
			});
			this->comboBox1->Location = System::Drawing::Point(17, 170);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// button_Create
			// 
			this->button_Create->Location = System::Drawing::Point(16, 311);
			this->button_Create->Name = L"button_Create";
			this->button_Create->Size = System::Drawing::Size(83, 34);
			this->button_Create->TabIndex = 9;
			this->button_Create->Text = L"Create";
			this->button_Create->UseVisualStyleBackColor = true;
			this->button_Create->Click += gcnew System::EventHandler(this, &Register_Form::button_Create_Click);
			// 
			// button_Cancel
			// 
			this->button_Cancel->Location = System::Drawing::Point(105, 312);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(80, 33);
			this->button_Cancel->TabIndex = 10;
			this->button_Cancel->Text = L"Cancel";
			this->button_Cancel->UseVisualStyleBackColor = true;
			this->button_Cancel->Click += gcnew System::EventHandler(this, &Register_Form::Button_Cancle_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"4 Digit Identity Pin";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(16, 243);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(170, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Register_Form::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register_Form::textBox5_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(13, 263);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(100, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Re-Enter Pin";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(17, 286);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(170, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Register_Form::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Register_Form::textBox6_KeyPress);
			// 
			// Register_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 357);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button_Cancel);
			this->Controls->Add(this->button_Create);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label_Re_Pass);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label_Password);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_User_name);
			this->Name = L"Register_Form";
			this->Text = L"Register_Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TextBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void Button_Cancle_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
;

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button_Create_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		//make sure username textfield is not empty 
		if (String::IsNullOrEmpty(textBox1->Text))
		{
			MessageBox::Show("Error. Username cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
		}
		//make sure password textfield is not empty 
		else if (String::IsNullOrEmpty(textBox2->Text))
		{
			MessageBox::Show("Error. Password cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			
		}
		//make sure security answer textfield is not empty 
		else if (String::IsNullOrEmpty(textBox4->Text))
		{
			MessageBox::Show("Error. Security answer cannot be empty.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

		//checking if passwords match
		else if (textBox3->Text != textBox2->Text) {
			MessageBox::Show("Error. Passwords don't match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		//checking if pins match
		else if (textBox6->Text != textBox5->Text) {
			MessageBox::Show("Error. 4 digit Identity Pins do not match.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		else {
			//sql command to check if username exists
			SqlCommand^ uniqueUSRCHECK = gcnew SqlCommand("SELECT * FROM app_user WHERE user_name=(@user_name);", con);
			uniqueUSRCHECK->Parameters->AddWithValue("@user_name", textBox1->Text);
			SqlDataReader^ usrCheck = uniqueUSRCHECK->ExecuteReader();
			//if username exists = error
			if (usrCheck->HasRows) {
				MessageBox::Show("Username Already Exists!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				usrCheck->Close();
				con->Close();
			}
			//otherwise proceed with connection and query calls
			else {
				usrCheck->Close(); //close previous datareader from usercheck
				if (this->textBox2->Text == this->textBox3->Text)
				{
					SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO app_user(user_name,user_password,identity_pin,security_answer)VALUES(@user_name,@user_password,@identity_pin,@security_answer)", con);

					cmd->Parameters->AddWithValue("@user_name", textBox1->Text);
					cmd->Parameters->AddWithValue("@user_password", textBox2->Text);
					cmd->Parameters->AddWithValue("@identity_pin", textBox5->Text);
					cmd->Parameters->AddWithValue("@security_answer", textBox4->Text);

					SqlDataReader^ rd = cmd->ExecuteReader();
					//if registration is successful
					if (rd->RecordsAffected) {
						MessageBox::Show("Registration Successful!");
						//transition back to login form
						Form::Close();
						rd->Close();
						con->Close();
					}
					else {
						//if query or connection fail
						MessageBox::Show("Error. Query Connection Failed");
						rd->Close();
						con->Close();
					}
				}

			}
		}

		
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Textbox accepts numbers only
	if (e->KeyChar == '.') {
		if (this->textBox5->Text->Contains(".") && !this->textBox5->SelectedText->Contains("."))
			e->Handled = true;
	}

	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
private: System::Void textBox6_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	//Textbox accepts numbers only
	if (e->KeyChar == '.') {
		if (this->textBox6->Text->Contains(".") && !this->textBox6->SelectedText->Contains("."))
			e->Handled = true;
	}

	// Accept only digits ".", "-" and the Backspace character
	else if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08) {
		e->Handled = true;
	}
}
};
}

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
			this->SuspendLayout();
			// 
			// label_User_name
			// 
			this->label_User_name->AutoSize = true;
			this->label_User_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_User_name->Location = System::Drawing::Point(12, 28);
			this->label_User_name->Name = L"label_User_name";
			this->label_User_name->Size = System::Drawing::Size(87, 20);
			this->label_User_name->TabIndex = 0;
			this->label_User_name->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(16, 51);
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
			this->label_Password->Location = System::Drawing::Point(12, 74);
			this->label_Password->Name = L"label_Password";
			this->label_Password->Size = System::Drawing::Size(82, 20);
			this->label_Password->TabIndex = 2;
			this->label_Password->Text = L"Password:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(16, 97);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(170, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label_Re_Pass
			// 
			this->label_Re_Pass->AutoSize = true;
			this->label_Re_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Re_Pass->Location = System::Drawing::Point(12, 120);
			this->label_Re_Pass->Name = L"label_Re_Pass";
			this->label_Re_Pass->Size = System::Drawing::Size(151, 20);
			this->label_Re_Pass->TabIndex = 4;
			this->label_Re_Pass->Text = L"Re-Enter Password:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(16, 143);
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
			this->label1->Location = System::Drawing::Point(12, 166);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Security Question:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(16, 216);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(170, 20);
			this->textBox4->TabIndex = 7;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Name of your First pet\?", L"Name of the first school you attended\?",
					L"Mothers maiden name\?"
			});
			this->comboBox1->Location = System::Drawing::Point(16, 189);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// button_Create
			// 
			this->button_Create->Location = System::Drawing::Point(16, 242);
			this->button_Create->Name = L"button_Create";
			this->button_Create->Size = System::Drawing::Size(83, 34);
			this->button_Create->TabIndex = 9;
			this->button_Create->Text = L"Create";
			this->button_Create->UseVisualStyleBackColor = true;
			this->button_Create->Click += gcnew System::EventHandler(this, &Register_Form::button_Create_Click);
			// 
			// button_Cancel
			// 
			this->button_Cancel->Location = System::Drawing::Point(106, 243);
			this->button_Cancel->Name = L"button_Cancel";
			this->button_Cancel->Size = System::Drawing::Size(80, 33);
			this->button_Cancel->TabIndex = 10;
			this->button_Cancel->Text = L"Cancel";
			this->button_Cancel->UseVisualStyleBackColor = true;
			this->button_Cancel->Click += gcnew System::EventHandler(this, &Register_Form::Button_Cancle_Click);
			// 
			// Register_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(317, 357);
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


		//check if username exists
		SqlCommand^ uniqueUSRCHECK = gcnew SqlCommand("SELECT * FROM app_user WHERE user_name='" + this->textBox1->Text + "';", con);
		SqlDataReader^ usrCheck = uniqueUSRCHECK->ExecuteReader();
		if (usrCheck->HasRows) {
			MessageBox::Show("Username Already exists! Please Try Again.");
			usrCheck->Close();
			con->Close();
		}
		//otherwise proceed with connection and query calls
		else {
			if (this->textBox2->Text == this->textBox3->Text)
			{
				usrCheck->Close(); //close previous datareader from usercheck
				SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO app_user(user_name,user_password,security_answer)VALUES(@user_name,@user_password,@security_answer)", con);
				cmd->Parameters->AddWithValue("@user_name", textBox1->Text);
				cmd->Parameters->AddWithValue("@user_password", textBox2->Text);
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
					con->Close();
				}
			}
			else
			{
				MessageBox::Show("Passwords don't match!");
			}
		}
}
};
}

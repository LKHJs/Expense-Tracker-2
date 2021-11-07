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
	/// Summary for Forgot_Password
	/// </summary>
	public ref class Forgot_Password : public System::Windows::Forms::Form
	{
	public:
		Forgot_Password(void)
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
		~Forgot_Password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_User_Name;
	protected:
	private: System::Windows::Forms::TextBox^ textBox_User_Name;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label_answer;
	private: System::Windows::Forms::TextBox^ textBox_answer;
	private: System::Windows::Forms::Label^ label_Pass;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label_Re_Pass;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

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
			this->label_User_Name = (gcnew System::Windows::Forms::Label());
			this->textBox_User_Name = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->textBox_answer = (gcnew System::Windows::Forms::TextBox());
			this->label_Pass = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label_Re_Pass = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label_User_Name
			// 
			this->label_User_Name->AutoSize = true;
			this->label_User_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_User_Name->Location = System::Drawing::Point(8, 35);
			this->label_User_Name->Name = L"label_User_Name";
			this->label_User_Name->Size = System::Drawing::Size(83, 20);
			this->label_User_Name->TabIndex = 0;
			this->label_User_Name->Text = L"Username";
			this->label_User_Name->Click += gcnew System::EventHandler(this, &Forgot_Password::Label_User_Name_Click);
			// 
			// textBox_User_Name
			// 
			this->textBox_User_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBox_User_Name->Location = System::Drawing::Point(12, 58);
			this->textBox_User_Name->Multiline = true;
			this->textBox_User_Name->Name = L"textBox_User_Name";
			this->textBox_User_Name->Size = System::Drawing::Size(182, 20);
			this->textBox_User_Name->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(8, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(311, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Please select security question associated \r\nwith your account.";
			this->label1->Click += gcnew System::EventHandler(this, &Forgot_Password::Label1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Name of first pet\?", L"Name of first school you attended\?",
					L"Mothers maiden name\?"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 124);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(183, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Forgot_Password::ComboBox1_SelectedIndexChanged);
			// 
			// label_answer
			// 
			this->label_answer->AutoSize = true;
			this->label_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_answer->Location = System::Drawing::Point(9, 151);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(141, 20);
			this->label_answer->TabIndex = 4;
			this->label_answer->Text = L"Enter your answer:";
			// 
			// textBox_answer
			// 
			this->textBox_answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox_answer->Location = System::Drawing::Point(13, 174);
			this->textBox_answer->Name = L"textBox_answer";
			this->textBox_answer->Size = System::Drawing::Size(182, 22);
			this->textBox_answer->TabIndex = 5;
			// 
			// label_Pass
			// 
			this->label_Pass->AutoSize = true;
			this->label_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Pass->Location = System::Drawing::Point(8, 199);
			this->label_Pass->Name = L"label_Pass";
			this->label_Pass->Size = System::Drawing::Size(192, 20);
			this->label_Pass->TabIndex = 6;
			this->label_Pass->Text = L"Enter your new Password:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(183, 22);
			this->textBox1->TabIndex = 7;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Forgot_Password::textBox1_TextChanged);
			// 
			// label_Re_Pass
			// 
			this->label_Re_Pass->AutoSize = true;
			this->label_Re_Pass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Re_Pass->Location = System::Drawing::Point(9, 247);
			this->label_Re_Pass->Name = L"label_Re_Pass";
			this->label_Re_Pass->Size = System::Drawing::Size(217, 20);
			this->label_Re_Pass->TabIndex = 8;
			this->label_Re_Pass->Text = L"Re-Enter your new password:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(12, 270);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 22);
			this->textBox2->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Forgot_Password::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(118, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Forgot_Password::Button2_Click);
			// 
			// Forgot_Password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(345, 367);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label_Re_Pass);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label_Pass);
			this->Controls->Add(this->textBox_answer);
			this->Controls->Add(this->label_answer);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_User_Name);
			this->Controls->Add(this->label_User_Name);
			this->Name = L"Forgot_Password";
			this->Text = L"Forgot_Password";
			this->Load += gcnew System::EventHandler(this, &Forgot_Password::Forgot_Password_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Forgot_Password_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Form::Close();
}
private: System::Void Label_User_Name_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();
	//check if username exists
	if (SqlCommand^ uniqueUSRCHECK = gcnew SqlCommand("SELECT * FROM app_user WHERE user_name='" + this->textBox1->Text + "';", con)) {
		MessageBox::Show("Username Does not exist! Please Try Again.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		con->Close();
	}
	else if (SqlCommand^ uniqueUSRCHECK = gcnew SqlCommand("SELECT * FROM app_user WHERE security_answer='" + this->textBox_answer->Text + "';", con)) {
		MessageBox::Show("Answer does not match the answer associated with the account.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		con->Close();
	}
	else {
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO app_user(user_password)VALUES(@user_password)", con);
		cmd->Parameters->AddWithValue("@user_password", textBox1->Text);
		cmd->ExecuteNonQuery();
		SqlDataReader^ rd = cmd->ExecuteReader();
		if (rd->RecordsAffected) {
			MessageBox::Show("Password Changed Succsessfully", "Success", MessageBoxButtons::OK);
			Form::Close();
			rd->Close();
			con->Close();
		}
		else {
			MessageBox::Show("Error. Query Connection Failed");
			con->Close();
		}
	}
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

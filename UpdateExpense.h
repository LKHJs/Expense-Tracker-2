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
	/// Summary for UpdateExpense
	/// </summary>
	public ref class UpdateExpense : public System::Windows::Forms::Form
	{
	public:
		UpdateExpense(void)
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
		~UpdateExpense()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox_Name;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_Amount;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_Amount = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(121, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Expense Name:";
			this->label1->Click += gcnew System::EventHandler(this, &UpdateExpense::Label1_Click);
			// 
			// textBox_Name
			// 
			this->textBox_Name->Location = System::Drawing::Point(16, 60);
			this->textBox_Name->Name = L"textBox_Name";
			this->textBox_Name->Size = System::Drawing::Size(196, 20);
			this->textBox_Name->TabIndex = 1;
			this->textBox_Name->TextChanged += gcnew System::EventHandler(this, &UpdateExpense::TextBox_Name_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(135, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Expense Amount:";
			// 
			// textBox_Amount
			// 
			this->textBox_Amount->Location = System::Drawing::Point(16, 111);
			this->textBox_Amount->Name = L"textBox_Amount";
			this->textBox_Amount->Size = System::Drawing::Size(196, 20);
			this->textBox_Amount->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 134);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Category:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date Updated:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(16, 208);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(196, 20);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"DD/MM/YYYY";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(16, 243);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(110, 39);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &UpdateExpense::Button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(132, 243);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 39);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Cancle";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &UpdateExpense::Button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"General", L"Transportation", L"Personal", L"Buisness" });
			this->comboBox1->Location = System::Drawing::Point(16, 157);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(196, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"None";
			// 
			// UpdateExpense
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(348, 407);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox_Amount);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox_Name);
			this->Controls->Add(this->label1);
			this->Name = L"UpdateExpense";
			this->Text = L"UpdateExpense";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox_Name_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Form::Close();
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();
		//////////////Insert data into table///////////////
		SqlCommand^ cmd = gcnew SqlCommand("INSERT INTO expense(expense_name,expense_amount,expense_attribute,expense_date)VALUES(@expense_name,@expense_amount,@expense_attribute,@expense_date)", con);
		cmd->Parameters->AddWithValue("@expense_name", textBox_Name->Text);
		cmd->Parameters->AddWithValue("@expense_amount", textBox_Amount->Text);
		cmd->Parameters->AddWithValue("@expense_attribute", comboBox1->SelectedText);
		//converting expense date to sql readable date
		DateTime expenseDate = DateTime::Parse(this->textBox2->Text);
		cmd->Parameters->AddWithValue("@expense_date", expenseDate);

		cmd->ExecuteNonQuery();
		SqlDataReader^ rd = cmd->ExecuteReader();
		//if registration is successful
		if (rd->RecordsAffected) {
			MessageBox::Show("Expense Updated!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			//transition back to login form
			Form::Close();
			rd->Close();
			con->Close();
		}
		else {
			//if query or connection fail
			MessageBox::Show("Error. Query Connection Failed", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			rd->Close();
			con->Close();
		}
	}
	};
}
#pragma once
#include "Add_Expense.h"
#include "DeleteExpense.h"
#include "UpdateExpense.h"

namespace GUIpractice {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainHub
	/// </summary>
	public ref class MainHub : public System::Windows::Forms::Form
	{
	private:
		String^ username;
		// Create table to be used
		DataTable^ table = gcnew DataTable();


	public:
		MainHub(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		MainHub(String ^user)
		{
			InitializeComponent();
			username = user;
			dataGridView1->DataSource = 0;
			// Connects to server
			SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
			con->Open();
			// Gets desired data for table
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT expense_name, expense_amount, expense_attribute, expense_date FROM [expTrackerApp].[dbo].[expense2] WHERE user_name='" + username + "'", con);
			// Fills table with desired data
			adapter->Fill(table);
			dataGridView1->DataSource = table;
			// Closes connection
			con->Close();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainHub()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ addExpButton;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ deleteExp;

	private: System::Windows::Forms::Button^ updateExp;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addExpButton = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->deleteExp = (gcnew System::Windows::Forms::Button());
			this->updateExp = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 43);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(585, 277);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainHub::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(260, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Recent Expenses";
			this->label1->Click += gcnew System::EventHandler(this, &MainHub::label1_Click);
			// 
			// addExpButton
			// 
			this->addExpButton->Location = System::Drawing::Point(608, 43);
			this->addExpButton->Name = L"addExpButton";
			this->addExpButton->Size = System::Drawing::Size(128, 28);
			this->addExpButton->TabIndex = 2;
			this->addExpButton->Text = L"Add Expense";
			this->addExpButton->UseVisualStyleBackColor = true;
			this->addExpButton->Click += gcnew System::EventHandler(this, &MainHub::addExpButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(250, 327);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Show Expenses";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainHub::button2_Click);
			// 
			// deleteExp
			// 
			this->deleteExp->Location = System::Drawing::Point(608, 72);
			this->deleteExp->Name = L"deleteExp";
			this->deleteExp->Size = System::Drawing::Size(128, 28);
			this->deleteExp->TabIndex = 4;
			this->deleteExp->Text = L"Delete Expense";
			this->deleteExp->UseVisualStyleBackColor = true;
			this->deleteExp->Click += gcnew System::EventHandler(this, &MainHub::deleteExp_Click);
			// 
			// updateExp
			// 
			this->updateExp->Location = System::Drawing::Point(608, 101);
			this->updateExp->Name = L"updateExp";
			this->updateExp->Size = System::Drawing::Size(128, 32);
			this->updateExp->TabIndex = 5;
			this->updateExp->Text = L"Update Expense";
			this->updateExp->UseVisualStyleBackColor = true;
			this->updateExp->Click += gcnew System::EventHandler(this, &MainHub::updateExp_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(608, 160);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(162, 111);
			this->panel1->TabIndex = 6;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(3, 81);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(144, 21);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Sort by Weekdays";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MainHub::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(3, 58);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(145, 21);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Sort by Weekends";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MainHub::radioButton3_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(3, 35);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(148, 21);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Sort by Last Month";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainHub::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(3, 12);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(145, 21);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Sort by Last Week";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainHub::radioButton1_CheckedChanged);
			// 
			// MainHub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(773, 412);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->updateExp);
			this->Controls->Add(this->deleteExp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->addExpButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainHub";
			this->Text = L"MainHub";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MainHub_Load(System::Object^ sender, System::EventArgs^ e) {
			
			dataGridView1->DataSource = table;
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void addExpButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Add_Expense^ addExpForm = gcnew Add_Expense(username); // Creates next form.
		this->Hide(); // Hides current form.
		addExpForm->ShowDialog(); // Displays next form
		table->Clear();
		dataGridView1->DataSource = 0;
		// Updates Table after change.
		// Connects to server
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		// Gets desired data for table
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name='" + username + "'", con);
		
		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
		this->Show(); // Displays current form.
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	
}

	   //Delete Expense BUtton Click Event Handler 
private: System::Void deleteExp_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteExpense^ delExpFrm = gcnew DeleteExpense;
	delExpFrm->ShowDialog();
}

	   //Update Expense BUtton Click Event Handler 
private: System::Void updateExp_Click(System::Object^ sender, System::EventArgs^ e) {
	UpdateExpense^ updExpFrm = gcnew UpdateExpense(username);
	this->Hide();
	updExpFrm->ShowDialog();
	// Updates Table after change.
	table->Clear();
	dataGridView1->DataSource = 0;
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();
	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT expense_name, expense_amount, expense_attribute, expense_date FROM [expTrackerApp].[dbo].[expense2] WHERE user_name='" + username + "'", con);
	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
	this->Show(); // Displays current form.
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

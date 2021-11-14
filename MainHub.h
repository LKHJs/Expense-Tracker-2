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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 43);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(596, 276);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainHub::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(235, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Recent Expenses";
			this->label1->Click += gcnew System::EventHandler(this, &MainHub::label1_Click);
			// 
			// addExpButton
			// 
			this->addExpButton->Location = System::Drawing::Point(620, 43);
			this->addExpButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->addExpButton->Name = L"addExpButton";
			this->addExpButton->Size = System::Drawing::Size(128, 28);
			this->addExpButton->TabIndex = 2;
			this->addExpButton->Text = L"Add Expense";
			this->addExpButton->UseVisualStyleBackColor = true;
			this->addExpButton->Click += gcnew System::EventHandler(this, &MainHub::addExpButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 327);
			this->button2->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 28);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Show Expenses";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainHub::button2_Click);
			// 
			// deleteExp
			// 
			this->deleteExp->Location = System::Drawing::Point(620, 98);
			this->deleteExp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->deleteExp->Name = L"deleteExp";
			this->deleteExp->Size = System::Drawing::Size(128, 28);
			this->deleteExp->TabIndex = 4;
			this->deleteExp->Text = L"Delete Expense";
			this->deleteExp->UseVisualStyleBackColor = true;
			this->deleteExp->Click += gcnew System::EventHandler(this, &MainHub::deleteExp_Click);
			// 
			// updateExp
			// 
			this->updateExp->Location = System::Drawing::Point(620, 156);
			this->updateExp->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->updateExp->Name = L"updateExp";
			this->updateExp->Size = System::Drawing::Size(128, 32);
			this->updateExp->TabIndex = 5;
			this->updateExp->Text = L"Update Expense";
			this->updateExp->UseVisualStyleBackColor = true;
			this->updateExp->Click += gcnew System::EventHandler(this, &MainHub::updateExp_Click);
			// 
			// MainHub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 485);
			this->Controls->Add(this->updateExp);
			this->Controls->Add(this->deleteExp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->addExpButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"MainHub";
			this->Text = L"MainHub";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
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
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT expense_name, expense_amount, expense_attribute, expense_date FROM [expTrackerApp].[dbo].[expense2] WHERE user_name='" + username + "'", con);
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
	updExpFrm->ShowDialog();
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
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

};
}

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
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name)", con);
			adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
			
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
	private: System::Windows::Forms::RadioButton^ sort6Months;

	private: System::Windows::Forms::RadioButton^ sort3Months;



	private: System::Windows::Forms::RadioButton^ sortLastMonth;

	private: System::Windows::Forms::RadioButton^ sortLastWeek;


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
			this->sort6Months = (gcnew System::Windows::Forms::RadioButton());
			this->sort3Months = (gcnew System::Windows::Forms::RadioButton());
			this->sortLastMonth = (gcnew System::Windows::Forms::RadioButton());
			this->sortLastWeek = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 35);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(439, 225);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainHub::dataGridView1_CellContentClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 18);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Recent Expenses";
			this->label1->Click += gcnew System::EventHandler(this, &MainHub::label1_Click);
			// 
			// addExpButton
			// 
			this->addExpButton->Location = System::Drawing::Point(456, 35);
			this->addExpButton->Margin = System::Windows::Forms::Padding(2);
			this->addExpButton->Name = L"addExpButton";
			this->addExpButton->Size = System::Drawing::Size(96, 23);
			this->addExpButton->TabIndex = 2;
			this->addExpButton->Text = L"Add Expense";
			this->addExpButton->UseVisualStyleBackColor = true;
			this->addExpButton->Click += gcnew System::EventHandler(this, &MainHub::addExpButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 266);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Refresh";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainHub::button2_Click);
			// 
			// deleteExp
			// 
			this->deleteExp->Location = System::Drawing::Point(456, 58);
			this->deleteExp->Margin = System::Windows::Forms::Padding(2);
			this->deleteExp->Name = L"deleteExp";
			this->deleteExp->Size = System::Drawing::Size(96, 23);
			this->deleteExp->TabIndex = 4;
			this->deleteExp->Text = L"Delete Expense";
			this->deleteExp->UseVisualStyleBackColor = true;
			this->deleteExp->Click += gcnew System::EventHandler(this, &MainHub::deleteExp_Click);
			// 
			// updateExp
			// 
			this->updateExp->Location = System::Drawing::Point(456, 82);
			this->updateExp->Margin = System::Windows::Forms::Padding(2);
			this->updateExp->Name = L"updateExp";
			this->updateExp->Size = System::Drawing::Size(96, 26);
			this->updateExp->TabIndex = 5;
			this->updateExp->Text = L"Update Expense";
			this->updateExp->UseVisualStyleBackColor = true;
			this->updateExp->Click += gcnew System::EventHandler(this, &MainHub::updateExp_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->sort6Months);
			this->panel1->Controls->Add(this->sort3Months);
			this->panel1->Controls->Add(this->sortLastMonth);
			this->panel1->Controls->Add(this->sortLastWeek);
			this->panel1->Location = System::Drawing::Point(456, 130);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(132, 90);
			this->panel1->TabIndex = 6;
			// 
			// sort6Months
			// 
			this->sort6Months->AutoSize = true;
			this->sort6Months->Location = System::Drawing::Point(2, 66);
			this->sort6Months->Margin = System::Windows::Forms::Padding(2);
			this->sort6Months->Name = L"sort6Months";
			this->sort6Months->Size = System::Drawing::Size(128, 17);
			this->sort6Months->TabIndex = 3;
			this->sort6Months->TabStop = true;
			this->sort6Months->Text = L"Sort by Last 6 Months";
			this->sort6Months->UseVisualStyleBackColor = true;
			this->sort6Months->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sort6Months_CheckedChanged);
			// 
			// sort3Months
			// 
			this->sort3Months->AllowDrop = true;
			this->sort3Months->AutoSize = true;
			this->sort3Months->Location = System::Drawing::Point(2, 47);
			this->sort3Months->Margin = System::Windows::Forms::Padding(2);
			this->sort3Months->Name = L"sort3Months";
			this->sort3Months->Size = System::Drawing::Size(128, 17);
			this->sort3Months->TabIndex = 2;
			this->sort3Months->TabStop = true;
			this->sort3Months->Text = L"Sort by Last 3 Months";
			this->sort3Months->UseVisualStyleBackColor = true;
			this->sort3Months->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sort3Months_CheckedChanged);
			// 
			// sortLastMonth
			// 
			this->sortLastMonth->AutoSize = true;
			this->sortLastMonth->Location = System::Drawing::Point(2, 28);
			this->sortLastMonth->Margin = System::Windows::Forms::Padding(2);
			this->sortLastMonth->Name = L"sortLastMonth";
			this->sortLastMonth->Size = System::Drawing::Size(114, 17);
			this->sortLastMonth->TabIndex = 1;
			this->sortLastMonth->TabStop = true;
			this->sortLastMonth->Text = L"Sort by Last Month";
			this->sortLastMonth->UseVisualStyleBackColor = true;
			this->sortLastMonth->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sortLastMonth_CheckedChanged);
			// 
			// sortLastWeek
			// 
			this->sortLastWeek->AutoSize = true;
			this->sortLastWeek->Location = System::Drawing::Point(2, 10);
			this->sortLastWeek->Margin = System::Windows::Forms::Padding(2);
			this->sortLastWeek->Name = L"sortLastWeek";
			this->sortLastWeek->Size = System::Drawing::Size(113, 17);
			this->sortLastWeek->TabIndex = 0;
			this->sortLastWeek->TabStop = true;
			this->sortLastWeek->Text = L"Sort by Last Week";
			this->sortLastWeek->UseVisualStyleBackColor = true;
			this->sortLastWeek->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sortLastWeek_CheckedChanged);
			// 
			// MainHub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(589, 335);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->updateExp);
			this->Controls->Add(this->deleteExp);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->addExpButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
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
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name)", con);
		adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
	
		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
		this->Show(); // Displays current form.
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name)", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
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
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name)", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
	this->Show(); // Displays current form.
}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sortLastMonth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY DATEPART(month, expense_date) DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
private: System::Void sort6Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void sort3Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY DATEPART(quarter, expense_date) DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
private: System::Void sortLastWeek_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY DATEPART(week, expense_date) DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
};
}

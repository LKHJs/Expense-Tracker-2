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
	private: System::Windows::Forms::RadioButton^ sortCurrMonth;
	private: System::Windows::Forms::ComboBox^ comboBox1;

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
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT expense_name, expense_amount, expense_attribute, expense_date FROM expense2 WHERE user_name='" + username + "' ORDER BY expense_date DESC", con);
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
			this->sortCurrMonth = (gcnew System::Windows::Forms::RadioButton());
			this->sort6Months = (gcnew System::Windows::Forms::RadioButton());
			this->sort3Months = (gcnew System::Windows::Forms::RadioButton());
			this->sortLastMonth = (gcnew System::Windows::Forms::RadioButton());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
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
			this->dataGridView1->Size = System::Drawing::Size(439, 268);
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
			this->addExpButton->Location = System::Drawing::Point(456, 59);
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
			this->button2->Location = System::Drawing::Point(181, 308);
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
			this->deleteExp->Location = System::Drawing::Point(456, 95);
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
			this->updateExp->Location = System::Drawing::Point(456, 133);
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
			this->panel1->Controls->Add(this->sortCurrMonth);
			this->panel1->Controls->Add(this->sort6Months);
			this->panel1->Controls->Add(this->sort3Months);
			this->panel1->Controls->Add(this->sortLastMonth);
			this->panel1->Location = System::Drawing::Point(456, 176);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(132, 84);
			this->panel1->TabIndex = 6;
			// 
			// sortCurrMonth
			// 
			this->sortCurrMonth->AutoSize = true;
			this->sortCurrMonth->Location = System::Drawing::Point(2, 3);
			this->sortCurrMonth->Name = L"sortCurrMonth";
			this->sortCurrMonth->Size = System::Drawing::Size(128, 17);
			this->sortCurrMonth->TabIndex = 4;
			this->sortCurrMonth->TabStop = true;
			this->sortCurrMonth->Text = L"Sort by Current Month";
			this->sortCurrMonth->UseVisualStyleBackColor = true;
			this->sortCurrMonth->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sortCurrMonth_CheckedChanged);
			// 
			// sort6Months
			// 
			this->sort6Months->AutoSize = true;
			this->sort6Months->Location = System::Drawing::Point(2, 65);
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
			this->sort3Months->Location = System::Drawing::Point(2, 44);
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
			this->sortLastMonth->Location = System::Drawing::Point(2, 23);
			this->sortLastMonth->Margin = System::Windows::Forms::Padding(2);
			this->sortLastMonth->Name = L"sortLastMonth";
			this->sortLastMonth->Size = System::Drawing::Size(114, 17);
			this->sortLastMonth->TabIndex = 1;
			this->sortLastMonth->TabStop = true;
			this->sortLastMonth->Text = L"Sort by Last Month";
			this->sortLastMonth->UseVisualStyleBackColor = true;
			this->sortLastMonth->CheckedChanged += gcnew System::EventHandler(this, &MainHub::sortLastMonth_CheckedChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Personal", L"General", L"Transportation", L"Business" });
			this->comboBox1->Location = System::Drawing::Point(456, 265);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(130, 21);
			this->comboBox1->TabIndex = 7;
			this->comboBox1->Text = L"Sort by Category";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainHub::comboBox1_SelectedIndexChanged);
			// 
			// MainHub
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 351);
			this->Controls->Add(this->comboBox1);
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
		//this->Hide(); // Hides current form.
		addExpForm->ShowDialog(); // Displays next form
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
		   //refresh button 
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Updates Table after change.
	table->Clear();
	dataGridView1->DataSource = 0;
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
}

	   //Delete Expense BUtton Click Event Handler 
private: System::Void deleteExp_Click(System::Object^ sender, System::EventArgs^ e) {
	DeleteExpense^ delExpFrm = gcnew DeleteExpense(username);
	this->Hide();
	delExpFrm->ShowDialog();
	// Updates Table after change.
	table->Clear();
	dataGridView1->DataSource = 0;
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
	this->Show(); // Displays current form.
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
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) ORDER BY expense_date DESC", con);
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
	   //sorting by the last month
private: System::Void sortLastMonth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_date >= DATEADD(month,-1,DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0)) AND expense_date < DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
	   //sorting by last 6 months
private: System::Void sort6Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_date >= DATEADD(month,-6,DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0)) AND expense_date < DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
	   //sorting by last 3 motnhs
private: System::Void sort3Months_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	// Updates Table after change.
	// Connects to server
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_date >= DATEADD(month,-3,DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0)) AND expense_date < DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
private: System::Void sortCurrMonth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	table->Clear();
	dataGridView1->DataSource = 0;
	
	SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
	con->Open();

	// Gets desired data for table
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_date >= DATEADD(month,-1,DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0)) AND expense_date >= DATEADD(month,DATEDIFF(month,0,CURRENT_TIMESTAMP),0) ORDER BY expense_date DESC", con);
	adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);

	// Fills table with desired data
	adapter->Fill(table);
	dataGridView1->DataSource = table;
	// Closes connection
	con->Close();
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	/*sorting by personal*/
	if (comboBox1->SelectedItem == "Personal") {
		table->Clear();
		dataGridView1->DataSource = 0;
		// Updates Table after change.
		// Connects to server
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		// Gets desired data for table
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_attribute = (@expense_attribute) ORDER BY expense_date DESC", con);
		adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
		adapter->SelectCommand->Parameters->AddWithValue("@expense_attribute", comboBox1->SelectedItem);

		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
	}

	/*sorting by Business*/
	if (comboBox1->SelectedItem == "Business") {
		table->Clear();
		dataGridView1->DataSource = 0;
		// Updates Table after change.
		// Connects to server
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		// Gets desired data for table
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_attribute = (@expense_attribute) ORDER BY expense_date DESC", con);
		adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
		adapter->SelectCommand->Parameters->AddWithValue("@expense_attribute", comboBox1->SelectedItem);

		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
	}

	/*sorting by General*/
	if (comboBox1->SelectedItem == "General") {
		table->Clear();
		dataGridView1->DataSource = 0;
		// Updates Table after change.
		// Connects to server
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		// Gets desired data for table
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_attribute = (@expense_attribute) ORDER BY expense_date DESC", con);
		adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
		adapter->SelectCommand->Parameters->AddWithValue("@expense_attribute", comboBox1->SelectedItem);

		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
	}

	/*sorting by Transportation*/
	if (comboBox1->SelectedItem == "Transportation") {
		table->Clear();
		dataGridView1->DataSource = 0;
		// Updates Table after change.
		// Connects to server
		SqlConnection^ con = gcnew  SqlConnection("Data Source=72.180.160.215,1433;Initial Catalog=expTrackerApp;Persist Security Info=True;User ID=3340project;Password=expensetracker");
		con->Open();

		// Gets desired data for table
		SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM expense2 WHERE user_name=(@user_name) AND expense_attribute = (@expense_attribute) ORDER BY expense_date DESC", con);
		adapter->SelectCommand->Parameters->AddWithValue("@user_name", username);
		adapter->SelectCommand->Parameters->AddWithValue("@expense_attribute", comboBox1->SelectedItem);

		// Fills table with desired data
		adapter->Fill(table);
		dataGridView1->DataSource = table;
		// Closes connection
		con->Close();
	}
}
};
}

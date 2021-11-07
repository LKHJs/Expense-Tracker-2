#include "Add_Expense.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main4(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIpractice::Add_Expense form;
	Application::Run(% form);
}
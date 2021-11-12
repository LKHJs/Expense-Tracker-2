#include "DeleteExpense.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main7(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIpractice::DeleteExpense form;
	Application::Run(% form);
}
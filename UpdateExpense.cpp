#include "UpdateExpense.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main6(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIpractice::UpdateExpense form;
	Application::Run(% form);
}
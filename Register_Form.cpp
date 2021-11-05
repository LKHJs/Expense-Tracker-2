#include "Register_Form.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main3(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIpractice::Register_Form form;
	Application::Run(% form);
}

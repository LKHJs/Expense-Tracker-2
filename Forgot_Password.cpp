#include "Forgot_Password.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	GUIpractice::Forgot_Password form;
	Application::Run(% form);
}
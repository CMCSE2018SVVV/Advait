#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LMS::Login form;  //PROJECTNAME::FORMNAME form;
	Application::Run(%form);
	return 0;
}

#include "loginForm.h"
#include "DashBoard.h"

using namespace System;
using namespace System::Windows::Forms;

int main()//(array<String^> arags)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	UED::LoginForm loginForm;
	loginForm.ShowDialog();
	Schooldata^ school = loginForm.school;

	if (school != nullptr)
	{
		School::DashBoard dashB(school->Id,school->Name,school->Details,school->Password);
		dashB.ShowDialog();
	}
	else
	{
		MessageBox::Show("Access Denied", "Login Authentication", MessageBoxButtons::OK);
	}
	return 0;
}
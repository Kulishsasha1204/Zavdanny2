#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // �������� � ������ �����
    Zavdanny2::MyForm^ form = gcnew Zavdanny2::MyForm();
    Application::Run(form);
}
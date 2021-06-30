#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String ^> ^args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    HolyCode::MenuForm menuForm;
    Application::Run(% menuForm);
    return 0;
}

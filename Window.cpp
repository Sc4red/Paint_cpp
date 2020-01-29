#include "Window.h"
#pragma comment(lib, "winmm.lib") 


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections;

[STAThreadAttribute]

int main(array<String^>^ args) {
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Paint::Window formularz;
  Application::Run(% formularz);
  return 0;

}



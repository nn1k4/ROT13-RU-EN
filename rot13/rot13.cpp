#include "rot13.h"

/* ROT13 encoder RU/EN (version  0.0.1)
 * Copyright © 2018 Mihails Šilovs
 * License: MIT
 */

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	rot13::rot13 form;
	Application::Run(%form);






}



			 


#pragma once
#include "func.h"
#include <msclr\marshal_cppstd.h>

using namespace System;

/* ROT13 encoder RU/EN (version  0.0.1)
 * Copyright © 2018 Mihails Šilovs
 * License: MIT
 */


namespace rot13 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for rot13
	/// </summary>
	public ref class rot13 : public System::Windows::Forms::Form
	{
	public:
		rot13(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~rot13()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  btnCode;
	public: System::Windows::Forms::TextBox^  txtBox;
	private: System::Windows::Forms::Label^  labCopyright;
	public:
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnCode = (gcnew System::Windows::Forms::Button());
			this->txtBox = (gcnew System::Windows::Forms::TextBox());
			this->labCopyright = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnCode
			// 
			this->btnCode->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->btnCode->Location = System::Drawing::Point(13, 13);
			this->btnCode->Name = L"btnCode";
			this->btnCode->Size = System::Drawing::Size(133, 70);
			this->btnCode->TabIndex = 0;
			this->btnCode->Text = L"Encrypt";
			this->btnCode->UseVisualStyleBackColor = true;
			this->btnCode->Click += gcnew System::EventHandler(this, &rot13::btnCode_Click);
			// 
			// txtBox
			// 
			this->txtBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtBox->Font = (gcnew System::Drawing::Font(L"Consolas", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBox->Location = System::Drawing::Point(3, 100);
			this->txtBox->Multiline = true;
			this->txtBox->Name = L"txtBox";
			this->txtBox->Size = System::Drawing::Size(1074, 352);
			this->txtBox->TabIndex = 1;
			// 
			// labCopyright
			// 
			this->labCopyright->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labCopyright->AutoSize = true;
			this->labCopyright->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->labCopyright->Location = System::Drawing::Point(614, 13);
			this->labCopyright->Name = L"labCopyright";
			this->labCopyright->Size = System::Drawing::Size(360, 80);
			this->labCopyright->TabIndex = 2;
			this->labCopyright->Text = L"/* ROT13 encoder RU/EN (version  0.0.1)\r\n * Copyright © 2018 Mihails Šilovs \r\n * "
				L"License: MIT\r\n */";
			// 
			// rot13
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 455);
			this->Controls->Add(this->labCopyright);
			this->Controls->Add(this->txtBox);
			this->Controls->Add(this->btnCode);
			this->Name = L"rot13";
			this->Text = L"rot13";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCode_Click(System::Object^  sender, System::EventArgs^  e) {
		
		// This code is executed when clicking on the button btnCode


		System::String^ stdWstring = txtBox->Text;  // Get the text from the text field txtBox
			


		msclr::interop::marshal_context context;  //  Get the marshal_context
		std::wstring stdWstring1 = context.marshal_as<std::wstring>(stdWstring);  // Convert type System::String^ to type std::wstring
		txtBox->Text = context.marshal_as<System::String^>(encode(stdWstring1)); // Get the value of the function and convert type std::wstring to  type System::String^


	}
	


			
	

};
}

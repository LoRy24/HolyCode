#include "FileEditValues.h"

#pragma once

namespace HolyCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CodeEditor : public System::Windows::Forms::Form
	{
	public:
		CodeEditor(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//

		}

	protected:

		~CodeEditor()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::ComponentModel::Container ^components;

#pragma region Design

		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// CodeEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 671);
			this->MinimumSize = System::Drawing::Size(1000, 710);
			this->Name = L"CodeEditor";
			this->Text = L"CodeEditor";
			this->Load += gcnew System::EventHandler(this, &CodeEditor::CodeEditor_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void CodeEditor_Load(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(gcnew String(filePath), "Nabbo");
	}
	};
}

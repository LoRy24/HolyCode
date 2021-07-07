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
		String ^filePath;

	public:
		CodeEditor(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//

		}

		CodeEditor(String ^filePath)
		{
			InitializeComponent();
			this->filePath = filePath;
		}

	protected:

		~CodeEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salvaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salvaComeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ esciToolStripMenuItem;


	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Design

		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salvaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salvaComeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->esciToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->salvaToolStripMenuItem,
					this->salvaComeToolStripMenuItem, this->toolStripSeparator1, this->esciToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// salvaToolStripMenuItem
			// 
			this->salvaToolStripMenuItem->Name = L"salvaToolStripMenuItem";
			this->salvaToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->salvaToolStripMenuItem->Text = L"Salva";
			// 
			// salvaComeToolStripMenuItem
			// 
			this->salvaComeToolStripMenuItem->Name = L"salvaComeToolStripMenuItem";
			this->salvaComeToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->salvaComeToolStripMenuItem->Text = L"Salva Come...";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(142, 6);
			// 
			// esciToolStripMenuItem
			// 
			this->esciToolStripMenuItem->Name = L"esciToolStripMenuItem";
			this->esciToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->esciToolStripMenuItem->Text = L"Esci";
			// 
			// CodeEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(984, 671);
			this->Controls->Add(this->menuStrip1);
			this->MinimumSize = System::Drawing::Size(1000, 710);
			this->Name = L"CodeEditor";
			this->Text = L"CodeEditor";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &CodeEditor::CodeEditor_FormClosed);
			this->Load += gcnew System::EventHandler(this, &CodeEditor::CodeEditor_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Void CodeEditor_Load(System::Object^ sender, System::EventArgs^ e) {
			
		}

		private: System::Void CodeEditor_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			//menuStrip1->Renderer = gcnew ToolStripProfessionalRenderer();
			Application::Exit();
		}
	};
}

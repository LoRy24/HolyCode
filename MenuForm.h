#include "CodeEditor.h"

#pragma once

namespace HolyCode {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace HolyCode;

	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ SoftwareIcon;
	protected:

	private: System::Windows::Forms::Button^ OpenFileButton;
	private: System::Windows::Forms::Button^ CreateFile;
	protected:


	protected:




	private: System::ComponentModel::IContainer^ components;
	protected:

	private:


#pragma region Design

		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuForm::typeid));
			this->SoftwareIcon = (gcnew System::Windows::Forms::PictureBox());
			this->OpenFileButton = (gcnew System::Windows::Forms::Button());
			this->CreateFile = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoftwareIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// SoftwareIcon
			// 
			this->SoftwareIcon->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SoftwareIcon->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SoftwareIcon.BackgroundImage")));
			this->SoftwareIcon->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SoftwareIcon->Location = System::Drawing::Point(270, 101);
			this->SoftwareIcon->Name = L"SoftwareIcon";
			this->SoftwareIcon->Size = System::Drawing::Size(210, 210);
			this->SoftwareIcon->TabIndex = 0;
			this->SoftwareIcon->TabStop = false;
			// 
			// OpenFileButton
			// 
			this->OpenFileButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OpenFileButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->OpenFileButton->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->OpenFileButton->FlatAppearance->BorderSize = 0;
			this->OpenFileButton->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->OpenFileButton->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->OpenFileButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->OpenFileButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OpenFileButton->ForeColor = System::Drawing::Color::White;
			this->OpenFileButton->Location = System::Drawing::Point(330, 325);
			this->OpenFileButton->Name = L"OpenFileButton";
			this->OpenFileButton->Size = System::Drawing::Size(90, 26);
			this->OpenFileButton->TabIndex = 1;
			this->OpenFileButton->Text = L"Open File";
			this->OpenFileButton->UseVisualStyleBackColor = true;
			this->OpenFileButton->Click += gcnew System::EventHandler(this, &MenuForm::OpenFileButton_Click);
			// 
			// CreateFile
			// 
			this->CreateFile->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->CreateFile->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CreateFile->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->CreateFile->FlatAppearance->BorderSize = 0;
			this->CreateFile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->CreateFile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->CreateFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CreateFile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CreateFile->ForeColor = System::Drawing::Color::White;
			this->CreateFile->Location = System::Drawing::Point(325, 360);
			this->CreateFile->Name = L"CreateFile";
			this->CreateFile->Size = System::Drawing::Size(100, 26);
			this->CreateFile->TabIndex = 2;
			this->CreateFile->Text = L"Create new File";
			this->CreateFile->UseVisualStyleBackColor = true;
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->ClientSize = System::Drawing::Size(734, 511);
			this->Controls->Add(this->CreateFile);
			this->Controls->Add(this->OpenFileButton);
			this->Controls->Add(this->SoftwareIcon);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(750, 550);
			this->Name = L"MenuForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"HolyCode - Menu";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MenuForm::MenuForm_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SoftwareIcon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void OpenFileButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			// Setup the dialog
			OpenFileDialog openFileDialog;
			openFileDialog.Title = "Open HolyC File";
			openFileDialog.Filter = "HolyC File (*.hc)|*.hc";
	
			// If the dialog result is OK
			if (openFileDialog.ShowDialog() == System::Windows::Forms::DialogResult::OK) 
			{
				CodeEditor ^codeEditorForm = gcnew CodeEditor(openFileDialog.FileName);
				this->Hide();
				codeEditorForm->Show();
			}
		}

		private: System::Void MenuForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
			Application::Exit();
		}
	};
}

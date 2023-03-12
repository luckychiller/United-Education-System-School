#include "Data.h"
#pragma once

namespace UED {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Loginlabel;
	private: System::Windows::Forms::TextBox^ IDtextBox;
	private: System::Windows::Forms::TextBox^ PasswordtextBox;
	private: System::Windows::Forms::Label^ IDlabel;
	protected:



	private: System::Windows::Forms::Label^ PasswordLadel;
	private: System::Windows::Forms::Button^ Loginbutton;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Loginlabel = (gcnew System::Windows::Forms::Label());
			this->IDtextBox = (gcnew System::Windows::Forms::TextBox());
			this->PasswordtextBox = (gcnew System::Windows::Forms::TextBox());
			this->IDlabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLadel = (gcnew System::Windows::Forms::Label());
			this->Loginbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Loginlabel
			// 
			this->Loginlabel->AutoSize = true;
			this->Loginlabel->BackColor = System::Drawing::Color::Transparent;
			this->Loginlabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginlabel->Location = System::Drawing::Point(280, 56);
			this->Loginlabel->Name = L"Loginlabel";
			this->Loginlabel->Size = System::Drawing::Size(118, 46);
			this->Loginlabel->TabIndex = 0;
			this->Loginlabel->Text = L"Login";
			// 
			// IDtextBox
			// 
			this->IDtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDtextBox->Location = System::Drawing::Point(228, 197);
			this->IDtextBox->Name = L"IDtextBox";
			this->IDtextBox->Size = System::Drawing::Size(330, 26);
			this->IDtextBox->TabIndex = 1;
			this->IDtextBox->TextChanged += gcnew System::EventHandler(this, &LoginForm::textBox1_TextChanged);
			// 
			// PasswordtextBox
			// 
			this->PasswordtextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PasswordtextBox->Location = System::Drawing::Point(228, 275);
			this->PasswordtextBox->Name = L"PasswordtextBox";
			this->PasswordtextBox->PasswordChar = '*';
			this->PasswordtextBox->Size = System::Drawing::Size(330, 27);
			this->PasswordtextBox->TabIndex = 2;
			// 
			// IDlabel
			// 
			this->IDlabel->AutoSize = true;
			this->IDlabel->BackColor = System::Drawing::Color::Transparent;
			this->IDlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDlabel->Location = System::Drawing::Point(186, 201);
			this->IDlabel->Name = L"IDlabel";
			this->IDlabel->Size = System::Drawing::Size(27, 22);
			this->IDlabel->TabIndex = 3;
			this->IDlabel->Text = L"ID";
			// 
			// PasswordLadel
			// 
			this->PasswordLadel->AutoSize = true;
			this->PasswordLadel->BackColor = System::Drawing::Color::Transparent;
			this->PasswordLadel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLadel->Location = System::Drawing::Point(133, 278);
			this->PasswordLadel->Name = L"PasswordLadel";
			this->PasswordLadel->Size = System::Drawing::Size(89, 22);
			this->PasswordLadel->TabIndex = 4;
			this->PasswordLadel->Text = L"Password";
			// 
			// Loginbutton
			// 
			this->Loginbutton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Loginbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Loginbutton->Location = System::Drawing::Point(323, 408);
			this->Loginbutton->Name = L"Loginbutton";
			this->Loginbutton->Size = System::Drawing::Size(75, 28);
			this->Loginbutton->TabIndex = 5;
			this->Loginbutton->Text = L"Login";
			this->Loginbutton->UseVisualStyleBackColor = false;
			this->Loginbutton->Click += gcnew System::EventHandler(this, &LoginForm::Loginbutton_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(659, 496);
			this->Controls->Add(this->Loginbutton);
			this->Controls->Add(this->PasswordLadel);
			this->Controls->Add(this->IDlabel);
			this->Controls->Add(this->PasswordtextBox);
			this->Controls->Add(this->IDtextBox);
			this->Controls->Add(this->Loginlabel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: School^ school = nullptr;
		private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void Loginbutton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ ID = this->IDtextBox->Text;
			String^ password = this->PasswordtextBox->Text;
			if (ID->Length == 0)
			{
				MessageBox::Show("Please Enter Your ID number", "ID Not given", MessageBoxButtons::OK); return;
			}
			if (password->Length == 0)
			{
				MessageBox::Show("Please Enter Your password", "password Not given", MessageBoxButtons::OK); return;
			}

			try
			{	
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "select * from School where ID=@ID and password=@password";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", ID);
				command.Parameters->AddWithValue("@password", password);

				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					school = gcnew School;
					school->Id = reader->GetInt32(0);
					school->Name = reader->GetString(1);
					school->Details = reader->GetString(3);
					school->Password = reader->GetString(4);
				
					this->Close();
				}
				else
				{
					MessageBox::Show("ID or Password incorrect", "Failed to login", MessageBoxButtons::OK);
				}
			}
			catch (Exception^ e)
			{
				MessageBox::Show("Failed To Connect to the database" + sizeof(e), "Connection Error", MessageBoxButtons::OK);
			}
		}
	};
}

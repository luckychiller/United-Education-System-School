#pragma once
#include <cstdlib>
#include <ctime> 

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
		private: int MyID;
		private: String^ MyName;
		private: String^ MyDetails;
		private: String^ MyPassword;
		private: int Captcha,TeachNo,StdNo,CourseNo,TotalBalanceNo,ParentNo;
		public:
		DashBoard(int HisId,String^ HisName,String^ HisDetails,String^ HisPassword)
		{
			MyID = HisId;
			MyName = HisName;
			MyDetails = HisDetails;
			MyPassword = HisPassword;
			std::srand(std::time(nullptr));
			Captcha = std::rand();
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "select count(*) from Teacher where School_ID = @ID";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read()) { TeachNo = reader->GetInt32(0); }

				sqlQuery = "select count(*) from Student where School_ID = @ID";
				command.Parameters->AddWithValue("@ID", MyID);
				reader = command.ExecuteReader();
				if (reader->Read()) { StdNo = reader->GetInt32(0); }
				
				sqlQuery = "select count(*) from Course where School_ID = @ID";
				command.Parameters->AddWithValue("@ID", MyID);
				reader = command.ExecuteReader();
				if (reader->Read()) { CourseNo = reader->GetInt32(0); }

				sqlQuery = "select count(*) from Parent";
				reader = command.ExecuteReader();
				if (reader->Read()) { ParentNo = reader->GetInt32(0); }

				sqlQuery = "select sum(Fees_Balance) from Student where School_ID = @ID";
				command.Parameters->AddWithValue("@ID", MyID);
				reader = command.ExecuteReader();
				if (reader->Read()) { TotalBalanceNo = reader->GetInt32(0); }

			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Minor Connection Error", MessageBoxButtons::OK);
			}
		}

		protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
		private: System::Windows::Forms::Label^ label1;
		private: System::Windows::Forms::Button^ button1;
		private: System::Windows::Forms::Label^ label2;
		private: System::Windows::Forms::Label^ TeacherNolabel;
		private: System::Windows::Forms::Label^ label3;
		private: System::Windows::Forms::Label^ StudentsNolabel;
		private: System::Windows::Forms::Label^ label4;
		private: System::Windows::Forms::Label^ CourseNolabel;
		private: System::Windows::Forms::Label^ label5;
		private: System::Windows::Forms::Label^ label6;
		private: System::Windows::Forms::Label^ BalanceNolabel;
		private: System::Windows::Forms::TabControl^ Schooltab;
		private: System::Windows::Forms::TabPage^ OverviewPage;
		private: System::Windows::Forms::TabPage^ AddStudentPage;
		private: System::Windows::Forms::Label^ label16;
		private: System::Windows::Forms::Label^ label15;
		private: System::Windows::Forms::Label^ label14;
		private: System::Windows::Forms::Label^ label13;
		private: System::Windows::Forms::Label^ label12;
		private: System::Windows::Forms::Label^ label11;
		private: System::Windows::Forms::Label^ label10;
		private: System::Windows::Forms::Label^ label9;
		private: System::Windows::Forms::Label^ label8;
		private: System::Windows::Forms::Label^ label7;
		private: System::Windows::Forms::TabPage^ AddTeacherPage;
		private: System::Windows::Forms::TabPage^ RemoveStudentPage;
		private: System::Windows::Forms::TabPage^ RemoveTeacherPage;
		private: System::Windows::Forms::TabPage^ AddCoursePage;
		private: System::Windows::Forms::TabPage^ RemoveCoursePage;
		private: System::Windows::Forms::Label^ label19;
		private: System::Windows::Forms::ComboBox^ PGenderComboBox;
		private: System::Windows::Forms::DateTimePicker^ StdDOBdate;
		private: System::Windows::Forms::ComboBox^ ClassComboBox;
		private: System::Windows::Forms::ComboBox^ StdGenderComboBox;
		private: System::Windows::Forms::TextBox^ FeesTextBox;
		private: System::Windows::Forms::TextBox^ PPassTextBox;
		private: System::Windows::Forms::TextBox^ PContacttextBox;
		private: System::Windows::Forms::TextBox^ PNametextBox;
		private: System::Windows::Forms::TextBox^ CaptchaTextBox;
		private: System::Windows::Forms::TextBox^ StdPassTextBox;
		private: System::Windows::Forms::TextBox^ StdNameBox;
		private: System::Windows::Forms::Label^ label18;
		private: System::Windows::Forms::Button^ StdConfirmButton;
		private: System::Windows::Forms::Button^ CancelButton;
		private: System::Windows::Forms::Label^ CaptchaLabel;
		private: System::Windows::Forms::Label^ label24;
		private: System::Windows::Forms::Label^ CaptchaCourse;
		private: System::Windows::Forms::Label^ label20;
		private: System::Windows::Forms::Label^ label17;
		private: System::Windows::Forms::TabPage^ UpdateFeesPage;
		private: System::Windows::Forms::Button^ CourseConfirmbutton;
		private: System::Windows::Forms::Button^ CourseCancelbutton;
		private: System::Windows::Forms::Label^ label21;
		private: System::Windows::Forms::ComboBox^ AddTechGenderCmboBox;
		private: System::Windows::Forms::TextBox^ AddTechCaptchBox;
		private: System::Windows::Forms::TextBox^ AddTechCourseBox;
		private: System::Windows::Forms::TextBox^ AddTechPassBox;
		private: System::Windows::Forms::TextBox^ AddTechNameBox;
		private: System::Windows::Forms::Button^ addTechConfbutton;
		private: System::Windows::Forms::Button^ AddTechCancelbutton;
		private: System::Windows::Forms::Label^ label36;
		private: System::Windows::Forms::Label^ AddTechCaptchaLabel;
		private: System::Windows::Forms::Label^ label34;
		private: System::Windows::Forms::Label^ label33;
		private: System::Windows::Forms::Label^ label32;
		private: System::Windows::Forms::Label^ label31;
		private: System::Windows::Forms::Label^ label29;
		private: System::Windows::Forms::Label^ label27;
		private: System::Windows::Forms::Label^ RemStdCptlabel;
		private: System::Windows::Forms::TextBox^ RemStdCaptchatextBox;
		private: System::Windows::Forms::TextBox^ RemStdIDBox;
		private: System::Windows::Forms::Button^ RemStdConfirmbutton;
		private: System::Windows::Forms::Button^ RemStdCancelbutton;
		private: System::Windows::Forms::Label^ label25;
		private: System::Windows::Forms::Label^ label23;
		private: System::Windows::Forms::Label^ label22;
		private: System::Windows::Forms::TextBox^ CourseCaptchBox;
		private: System::Windows::Forms::TextBox^ CourseDetailBox;
		private: System::Windows::Forms::TextBox^ CourseNameBox;
		private: System::Windows::Forms::TextBox^ RemCourseCaptcBox;
		private: System::Windows::Forms::TextBox^ RemCourseIDBox;
		private: System::Windows::Forms::Button^ RemCourseConfirmbutton;
		private: System::Windows::Forms::Button^ RemCourseCancelbutton;
		private: System::Windows::Forms::Label^ label30;
		private: System::Windows::Forms::Label^ RemCourseCaptlabel;
		private: System::Windows::Forms::Label^ label28;
		private: System::Windows::Forms::Label^ label26;
		private: System::Windows::Forms::TextBox^ RemTechCaptBox;
		private: System::Windows::Forms::TextBox^ RemTechIDBox;
		private: System::Windows::Forms::Button^ RemTechConfirmbutton;
		private: System::Windows::Forms::Button^ RemTechCancelbutton;
		private: System::Windows::Forms::Label^ label39;
		private: System::Windows::Forms::Label^ RemTechCaptchlabel;
		private: System::Windows::Forms::Label^ label37;
		private: System::Windows::Forms::Label^ label35;
		private: System::Windows::Forms::Label^ PayFeelabel;
		private: System::Windows::Forms::TextBox^ PayIDBox;
		private: System::Windows::Forms::Button^ PayConfirmbutton;
		private: System::Windows::Forms::Button^ PayCancelbutton;
		private: System::Windows::Forms::TextBox^ FeesPayAmountBox;
		private: System::Windows::Forms::Label^ label47;
		private: System::Windows::Forms::Label^ PayClasslabel;
		private: System::Windows::Forms::Label^ PayNamelabel;
		private: System::Windows::Forms::Button^ PaySearchbutton;
		private: System::Windows::Forms::Label^ label44;
		private: System::Windows::Forms::Label^ label43;
		private: System::Windows::Forms::Label^ label42;
		private: System::Windows::Forms::Label^ label41;
		private: System::Windows::Forms::Label^ label40;
		private: System::Windows::Forms::Label^ label38;
		private: System::Windows::Forms::Label^ TotalRecordsLabel;
		private: System::Windows::Forms::Label^ label45;
		private: System::Windows::Forms::Button^ SearchDataButton;
		private: System::Windows::Forms::ComboBox^ comboBox4;
		private: System::Windows::Forms::ComboBox^ comboBox3;
		private: System::Windows::Forms::ComboBox^ comboBox2;
		private: System::Windows::Forms::ComboBox^ comboBox1;
		private: System::Windows::Forms::DataGridView^ dataGridView1;
		private: System::Windows::Forms::Button^ CancelDatabutton;
		private:System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TeacherNolabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->StudentsNolabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CourseNolabel = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BalanceNolabel = (gcnew System::Windows::Forms::Label());
			this->Schooltab = (gcnew System::Windows::Forms::TabControl());
			this->OverviewPage = (gcnew System::Windows::Forms::TabPage());
			this->CancelDatabutton = (gcnew System::Windows::Forms::Button());
			this->TotalRecordsLabel = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->SearchDataButton = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->AddStudentPage = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->PGenderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StdDOBdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->ClassComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StdGenderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->FeesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PContacttextBox = (gcnew System::Windows::Forms::TextBox());
			this->PNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->CaptchaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StdPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StdNameBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->StdConfirmButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->CaptchaLabel = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->AddTeacherPage = (gcnew System::Windows::Forms::TabPage());
			this->AddTechGenderCmboBox = (gcnew System::Windows::Forms::ComboBox());
			this->AddTechCaptchBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechCourseBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechPassBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechNameBox = (gcnew System::Windows::Forms::TextBox());
			this->addTechConfbutton = (gcnew System::Windows::Forms::Button());
			this->AddTechCancelbutton = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->AddTechCaptchaLabel = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->RemoveStudentPage = (gcnew System::Windows::Forms::TabPage());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->RemStdCptlabel = (gcnew System::Windows::Forms::Label());
			this->RemStdCaptchatextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemStdIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemStdConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemStdCancelbutton = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->RemoveTeacherPage = (gcnew System::Windows::Forms::TabPage());
			this->RemTechCaptBox = (gcnew System::Windows::Forms::TextBox());
			this->RemTechIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemTechConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemTechCancelbutton = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->RemTechCaptchlabel = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->AddCoursePage = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->CourseCaptchBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseDetailBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseNameBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->CourseCancelbutton = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->CaptchaCourse = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->RemoveCoursePage = (gcnew System::Windows::Forms::TabPage());
			this->RemCourseCaptcBox = (gcnew System::Windows::Forms::TextBox());
			this->RemCourseIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemCourseConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemCourseCancelbutton = (gcnew System::Windows::Forms::Button());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->RemCourseCaptlabel = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->UpdateFeesPage = (gcnew System::Windows::Forms::TabPage());
			this->PayFeelabel = (gcnew System::Windows::Forms::Label());
			this->PayIDBox = (gcnew System::Windows::Forms::TextBox());
			this->PayConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->PayCancelbutton = (gcnew System::Windows::Forms::Button());
			this->FeesPayAmountBox = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->PayClasslabel = (gcnew System::Windows::Forms::Label());
			this->PayNamelabel = (gcnew System::Windows::Forms::Label());
			this->PaySearchbutton = (gcnew System::Windows::Forms::Button());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->Schooltab->SuspendLayout();
			this->OverviewPage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->AddStudentPage->SuspendLayout();
			this->AddTeacherPage->SuspendLayout();
			this->RemoveStudentPage->SuspendLayout();
			this->RemoveTeacherPage->SuspendLayout();
			this->AddCoursePage->SuspendLayout();
			this->RemoveCoursePage->SuspendLayout();
			this->UpdateFeesPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(167, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(736, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DashBoard::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(676, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Teachers";
			// 
			// TeacherNolabel
			// 
			this->TeacherNolabel->AutoSize = true;
			this->TeacherNolabel->Location = System::Drawing::Point(745, 75);
			this->TeacherNolabel->Name = L"TeacherNolabel";
			this->TeacherNolabel->Size = System::Drawing::Size(35, 13);
			this->TeacherNolabel->TabIndex = 3;
			this->TeacherNolabel->Text = TeachNo.ToString();;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(676, 124);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Students";
			// 
			// StudentsNolabel
			// 
			this->StudentsNolabel->AutoSize = true;
			this->StudentsNolabel->Location = System::Drawing::Point(745, 124);
			this->StudentsNolabel->Name = L"StudentsNolabel";
			this->StudentsNolabel->Size = System::Drawing::Size(35, 13);
			this->StudentsNolabel->TabIndex = 5;
			this->StudentsNolabel->Text = StdNo.ToString();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(676, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Courses";
			// 
			// CourseNolabel
			// 
			this->CourseNolabel->AutoSize = true;
			this->CourseNolabel->Location = System::Drawing::Point(745, 171);
			this->CourseNolabel->Name = L"CourseNolabel";
			this->CourseNolabel->Size = System::Drawing::Size(35, 13);
			this->CourseNolabel->TabIndex = 7;
			this->CourseNolabel->Text = CourseNo.ToString();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(681, 217);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Total Fees Balance";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(681, 240);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"$";
			// 
			// BalanceNolabel
			// 
			this->BalanceNolabel->AutoSize = true;
			this->BalanceNolabel->Location = System::Drawing::Point(700, 240);
			this->BalanceNolabel->Name = L"BalanceNolabel";
			this->BalanceNolabel->Size = System::Drawing::Size(35, 13);
			this->BalanceNolabel->TabIndex = 10;
			this->BalanceNolabel->Text = TotalBalanceNo.ToString();
			// 
			// Schooltab
			// 
			this->Schooltab->Controls->Add(this->OverviewPage);
			this->Schooltab->Controls->Add(this->AddStudentPage);
			this->Schooltab->Controls->Add(this->AddTeacherPage);
			this->Schooltab->Controls->Add(this->RemoveStudentPage);
			this->Schooltab->Controls->Add(this->RemoveTeacherPage);
			this->Schooltab->Controls->Add(this->AddCoursePage);
			this->Schooltab->Controls->Add(this->RemoveCoursePage);
			this->Schooltab->Controls->Add(this->UpdateFeesPage);
			this->Schooltab->Location = System::Drawing::Point(0, 47);
			this->Schooltab->Name = L"Schooltab";
			this->Schooltab->SelectedIndex = 0;
			this->Schooltab->Size = System::Drawing::Size(670, 451);
			this->Schooltab->TabIndex = 11;
			// 
			// OverviewPage
			// 
			this->OverviewPage->Controls->Add(this->CancelDatabutton);
			this->OverviewPage->Controls->Add(this->TotalRecordsLabel);
			this->OverviewPage->Controls->Add(this->label45);
			this->OverviewPage->Controls->Add(this->SearchDataButton);
			this->OverviewPage->Controls->Add(this->comboBox4);
			this->OverviewPage->Controls->Add(this->comboBox3);
			this->OverviewPage->Controls->Add(this->comboBox2);
			this->OverviewPage->Controls->Add(this->comboBox1);
			this->OverviewPage->Controls->Add(this->dataGridView1);
			this->OverviewPage->Location = System::Drawing::Point(4, 22);
			this->OverviewPage->Name = L"OverviewPage";
			this->OverviewPage->Padding = System::Windows::Forms::Padding(3);
			this->OverviewPage->Size = System::Drawing::Size(662, 425);
			this->OverviewPage->TabIndex = 1;
			this->OverviewPage->Text = L"Overview";
			this->OverviewPage->UseVisualStyleBackColor = true;
			// 
			// CancelDatabutton
			// 
			this->CancelDatabutton->BackColor = System::Drawing::Color::RosyBrown;
			this->CancelDatabutton->Location = System::Drawing::Point(582, 396);
			this->CancelDatabutton->Name = L"CancelDatabutton";
			this->CancelDatabutton->Size = System::Drawing::Size(75, 23);
			this->CancelDatabutton->TabIndex = 9;
			this->CancelDatabutton->Text = L"Cancel";
			this->CancelDatabutton->UseVisualStyleBackColor = false;
			// 
			// TotalRecordsLabel
			// 
			this->TotalRecordsLabel->AutoSize = true;
			this->TotalRecordsLabel->BackColor = System::Drawing::Color::DarkOrange;
			this->TotalRecordsLabel->Location = System::Drawing::Point(429, 400);
			this->TotalRecordsLabel->Name = L"TotalRecordsLabel";
			this->TotalRecordsLabel->Size = System::Drawing::Size(41, 13);
			this->TotalRecordsLabel->TabIndex = 8;
			this->TotalRecordsLabel->Text = L"0";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(334, 399);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(74, 13);
			this->label45->TabIndex = 7;
			this->label45->Text = L"Total Records";
			// 
			// SearchDataButton
			// 
			this->SearchDataButton->BackColor = System::Drawing::Color::Silver;
			this->SearchDataButton->Location = System::Drawing::Point(48, 389);
			this->SearchDataButton->Name = L"SearchDataButton";
			this->SearchDataButton->Size = System::Drawing::Size(75, 36);
			this->SearchDataButton->TabIndex = 6;
			this->SearchDataButton->Text = L"Search";
			this->SearchDataButton->UseVisualStyleBackColor = false;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(405, 6);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(121, 21);
			this->comboBox4->TabIndex = 4;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(137, 32);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(121, 21);
			this->comboBox3->TabIndex = 3;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(406, 33);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(137, 4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 23);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Tag = L"";
			this->comboBox1->Text = L"Group";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 71);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(662, 316);
			this->dataGridView1->TabIndex = 0;
			// 
			// AddStudentPage
			// 
			this->AddStudentPage->Controls->Add(this->label21);
			this->AddStudentPage->Controls->Add(this->label19);
			this->AddStudentPage->Controls->Add(this->PGenderComboBox);
			this->AddStudentPage->Controls->Add(this->StdDOBdate);
			this->AddStudentPage->Controls->Add(this->ClassComboBox);
			this->AddStudentPage->Controls->Add(this->StdGenderComboBox);
			this->AddStudentPage->Controls->Add(this->FeesTextBox);
			this->AddStudentPage->Controls->Add(this->PPassTextBox);
			this->AddStudentPage->Controls->Add(this->PContacttextBox);
			this->AddStudentPage->Controls->Add(this->PNametextBox);
			this->AddStudentPage->Controls->Add(this->CaptchaTextBox);
			this->AddStudentPage->Controls->Add(this->StdPassTextBox);
			this->AddStudentPage->Controls->Add(this->StdNameBox);
			this->AddStudentPage->Controls->Add(this->label18);
			this->AddStudentPage->Controls->Add(this->StdConfirmButton);
			this->AddStudentPage->Controls->Add(this->CancelButton);
			this->AddStudentPage->Controls->Add(this->CaptchaLabel);
			this->AddStudentPage->Controls->Add(this->label16);
			this->AddStudentPage->Controls->Add(this->label15);
			this->AddStudentPage->Controls->Add(this->label14);
			this->AddStudentPage->Controls->Add(this->label13);
			this->AddStudentPage->Controls->Add(this->label12);
			this->AddStudentPage->Controls->Add(this->label11);
			this->AddStudentPage->Controls->Add(this->label10);
			this->AddStudentPage->Controls->Add(this->label9);
			this->AddStudentPage->Controls->Add(this->label8);
			this->AddStudentPage->Controls->Add(this->label7);
			this->AddStudentPage->Location = System::Drawing::Point(4, 22);
			this->AddStudentPage->Name = L"AddStudentPage";
			this->AddStudentPage->Padding = System::Windows::Forms::Padding(3);
			this->AddStudentPage->Size = System::Drawing::Size(662, 425);
			this->AddStudentPage->TabIndex = 2;
			this->AddStudentPage->Text = L"Add Student";
			this->AddStudentPage->UseVisualStyleBackColor = true;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(233, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(319, 43);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Registering New Student";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(449, 246);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"$";
			// 
			// PGenderComboBox
			// 
			this->PGenderComboBox->FormattingEnabled = true;
			this->PGenderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"MALE", L"FEMALE" });
			this->PGenderComboBox->Location = System::Drawing::Point(445, 147);
			this->PGenderComboBox->Name = L"PGenderComboBox";
			this->PGenderComboBox->Size = System::Drawing::Size(195, 21);
			this->PGenderComboBox->TabIndex = 28;
			// 
			// StdDOBdate
			// 
			this->StdDOBdate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->StdDOBdate->Location = System::Drawing::Point(156, 198);
			this->StdDOBdate->Name = L"StdDOBdate";
			this->StdDOBdate->Size = System::Drawing::Size(172, 20);
			this->StdDOBdate->TabIndex = 27;
			// 
			// ClassComboBox
			// 
			this->ClassComboBox->FormattingEnabled = true;
			this->ClassComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) 
			{
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->ClassComboBox->Location = System::Drawing::Point(156, 96);
			this->ClassComboBox->Name = L"ClassComboBox";
			this->ClassComboBox->Size = System::Drawing::Size(172, 21);
			this->ClassComboBox->TabIndex = 26;
			// 
			// StdGenderComboBox
			// 
			this->StdGenderComboBox->FormattingEnabled = true;
			this->StdGenderComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"MALE", L"FEMALE" });
			this->StdGenderComboBox->Location = System::Drawing::Point(156, 152);
			this->StdGenderComboBox->Name = L"StdGenderComboBox";
			this->StdGenderComboBox->Size = System::Drawing::Size(172, 21);
			this->StdGenderComboBox->TabIndex = 25;
			// 
			// FeesTextBox
			// 
			this->FeesTextBox->Location = System::Drawing::Point(465, 242);
			this->FeesTextBox->Name = L"FeesTextBox";
			this->FeesTextBox->Size = System::Drawing::Size(175, 20);
			this->FeesTextBox->TabIndex = 24;
			// 
			// PPassTextBox
			// 
			this->PPassTextBox->Location = System::Drawing::Point(445, 197);
			this->PPassTextBox->Name = L"PPassTextBox";
			this->PPassTextBox->Size = System::Drawing::Size(195, 20);
			this->PPassTextBox->TabIndex = 23;
			// 
			// PContacttextBox
			// 
			this->PContacttextBox->Location = System::Drawing::Point(445, 101);
			this->PContacttextBox->Name = L"PContacttextBox";
			this->PContacttextBox->Size = System::Drawing::Size(195, 20);
			this->PContacttextBox->TabIndex = 21;
			// 
			// PNametextBox
			// 
			this->PNametextBox->Location = System::Drawing::Point(445, 51);
			this->PNametextBox->Name = L"PNametextBox";
			this->PNametextBox->Size = System::Drawing::Size(195, 20);
			this->PNametextBox->TabIndex = 20;
			// 
			// CaptchaTextBox
			// 
			this->CaptchaTextBox->Location = System::Drawing::Point(228, 326);
			this->CaptchaTextBox->Name = L"CaptchaTextBox";
			this->CaptchaTextBox->Size = System::Drawing::Size(227, 20);
			this->CaptchaTextBox->TabIndex = 19;
			// 
			// StdPassTextBox
			// 
			this->StdPassTextBox->Location = System::Drawing::Point(156, 242);
			this->StdPassTextBox->Name = L"StdPassTextBox";
			this->StdPassTextBox->Size = System::Drawing::Size(172, 20);
			this->StdPassTextBox->TabIndex = 18;
			// 
			// StdNameBox
			// 
			this->StdNameBox->Location = System::Drawing::Point(156, 54);
			this->StdNameBox->Name = L"StdNameBox";
			this->StdNameBox->Size = System::Drawing::Size(172, 20);
			this->StdNameBox->TabIndex = 14;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(348, 249);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(60, 13);
			this->label18->TabIndex = 13;
			this->label18->Text = L"Fees Value";
			// 
			// StdConfirmButton
			// 
			this->StdConfirmButton->Location = System::Drawing::Point(433, 372);
			this->StdConfirmButton->Name = L"StdConfirmButton";
			this->StdConfirmButton->Size = System::Drawing::Size(75, 23);
			this->StdConfirmButton->TabIndex = 12;
			this->StdConfirmButton->Text = L"Confirm";
			this->StdConfirmButton->UseVisualStyleBackColor = true;
			this->StdConfirmButton->Click += gcnew System::EventHandler(this, &DashBoard::ConfirmButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(156, 372);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 11;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &DashBoard::CancelButton_Click);
			// 
			// CaptchaLabel
			// 
			this->CaptchaLabel->AutoSize = true;
			this->CaptchaLabel->Location = System::Drawing::Point(316, 299);
			this->CaptchaLabel->Name = L"CaptchaLabel";
			this->CaptchaLabel->Size = System::Drawing::Size(41, 13);
			this->CaptchaLabel->TabIndex = 10;
			this->CaptchaLabel->Text = Captcha.ToString();
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(153, 329);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Captcha";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(52, 249);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(93, 13);
			this->label15->TabIndex = 8;
			this->label15->Text = L"Student Password";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(348, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Parent Password";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(348, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(78, 13);
			this->label13->TabIndex = 6;
			this->label13->Text = L"Parent Contact";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(348, 155);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Parent Gender";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(348, 54);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(69, 13);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Parent Name";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(52, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Date of Birth";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(55, 155);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Gender";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(55, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Class";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(52, 54);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"Name";
			// 
			// AddTeacherPage
			// 
			this->AddTeacherPage->Controls->Add(this->AddTechGenderCmboBox);
			this->AddTeacherPage->Controls->Add(this->AddTechCaptchBox);
			this->AddTeacherPage->Controls->Add(this->AddTechCourseBox);
			this->AddTeacherPage->Controls->Add(this->AddTechPassBox);
			this->AddTeacherPage->Controls->Add(this->AddTechNameBox);
			this->AddTeacherPage->Controls->Add(this->addTechConfbutton);
			this->AddTeacherPage->Controls->Add(this->AddTechCancelbutton);
			this->AddTeacherPage->Controls->Add(this->label36);
			this->AddTeacherPage->Controls->Add(this->AddTechCaptchaLabel);
			this->AddTeacherPage->Controls->Add(this->label34);
			this->AddTeacherPage->Controls->Add(this->label33);
			this->AddTeacherPage->Controls->Add(this->label32);
			this->AddTeacherPage->Controls->Add(this->label31);
			this->AddTeacherPage->Controls->Add(this->label29);
			this->AddTeacherPage->Location = System::Drawing::Point(4, 22);
			this->AddTeacherPage->Name = L"AddTeacherPage";
			this->AddTeacherPage->Padding = System::Windows::Forms::Padding(3);
			this->AddTeacherPage->Size = System::Drawing::Size(662, 425);
			this->AddTeacherPage->TabIndex = 3;
			this->AddTeacherPage->Text = L"Add Teacher";
			this->AddTeacherPage->UseVisualStyleBackColor = true;
			// 
			// AddTechGenderCmboBox
			// 
			this->AddTechGenderCmboBox->FormattingEnabled = true;
			this->AddTechGenderCmboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"MALE", L"FEMALE" });
			this->AddTechGenderCmboBox->Location = System::Drawing::Point(199, 94);
			this->AddTechGenderCmboBox->Name = L"AddTechGenderCmboBox";
			this->AddTechGenderCmboBox->Size = System::Drawing::Size(327, 21);
			this->AddTechGenderCmboBox->TabIndex = 14;
			// 
			// AddTechCaptchBox
			// 
			this->AddTechCaptchBox->Location = System::Drawing::Point(199, 309);
			this->AddTechCaptchBox->Name = L"AddTechCaptchBox";
			this->AddTechCaptchBox->Size = System::Drawing::Size(327, 20);
			this->AddTechCaptchBox->TabIndex = 13;
			// 
			// AddTechCourseBox
			// 
			this->AddTechCourseBox->Location = System::Drawing::Point(199, 199);
			this->AddTechCourseBox->Name = L"AddTechCourseBox";
			this->AddTechCourseBox->Size = System::Drawing::Size(327, 20);
			this->AddTechCourseBox->TabIndex = 12;
			// 
			// AddTechPassBox
			// 
			this->AddTechPassBox->Location = System::Drawing::Point(199, 145);
			this->AddTechPassBox->Name = L"AddTechPassBox";
			this->AddTechPassBox->Size = System::Drawing::Size(327, 20);
			this->AddTechPassBox->TabIndex = 11;
			// 
			// AddTechNameBox
			// 
			this->AddTechNameBox->Location = System::Drawing::Point(199, 48);
			this->AddTechNameBox->Name = L"AddTechNameBox";
			this->AddTechNameBox->Size = System::Drawing::Size(327, 20);
			this->AddTechNameBox->TabIndex = 9;
			// 
			// addTechConfbutton
			// 
			this->addTechConfbutton->Location = System::Drawing::Point(467, 367);
			this->addTechConfbutton->Name = L"addTechConfbutton";
			this->addTechConfbutton->Size = System::Drawing::Size(75, 23);
			this->addTechConfbutton->TabIndex = 8;
			this->addTechConfbutton->Text = L"Confirm";
			this->addTechConfbutton->UseVisualStyleBackColor = true;
			this->addTechConfbutton->Click += gcnew System::EventHandler(this, &DashBoard::AddTechConfbutton_Click);
			// 
			// AddTechCancelbutton
			// 
			this->AddTechCancelbutton->Location = System::Drawing::Point(163, 367);
			this->AddTechCancelbutton->Name = L"AddTechCancelbutton";
			this->AddTechCancelbutton->Size = System::Drawing::Size(75, 23);
			this->AddTechCancelbutton->TabIndex = 7;
			this->AddTechCancelbutton->Text = L"Cancel";
			this->AddTechCancelbutton->UseVisualStyleBackColor = true;
			this->AddTechCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::AddTechCancelbutton_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(105, 312);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(47, 13);
			this->label36->TabIndex = 6;
			this->label36->Text = L"Captcha";
			// 
			// AddTechCaptchaLabel
			// 
			this->AddTechCaptchaLabel->AutoSize = true;
			this->AddTechCaptchaLabel->Location = System::Drawing::Point(288, 274);
			this->AddTechCaptchaLabel->Name = L"AddTechCaptchaLabel";
			this->AddTechCaptchaLabel->Size = System::Drawing::Size(41, 13);
			this->AddTechCaptchaLabel->TabIndex = 5;
			this->AddTechCaptchaLabel->Text = Captcha.ToString();
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(105, 206);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(71, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Course Name";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(105, 148);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(53, 13);
			this->label33->TabIndex = 3;
			this->label33->Text = L"Password";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(105, 102);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(42, 13);
			this->label32->TabIndex = 2;
			this->label32->Text = L"Gender";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(105, 55);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(35, 13);
			this->label31->TabIndex = 1;
			this->label31->Text = L"Name";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(239, 6);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(237, 36);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Adding New Teacher";
			// 
			// RemoveStudentPage
			// 
			this->RemoveStudentPage->Controls->Add(this->label27);
			this->RemoveStudentPage->Controls->Add(this->RemStdCptlabel);
			this->RemoveStudentPage->Controls->Add(this->RemStdCaptchatextBox);
			this->RemoveStudentPage->Controls->Add(this->RemStdIDBox);
			this->RemoveStudentPage->Controls->Add(this->RemStdConfirmbutton);
			this->RemoveStudentPage->Controls->Add(this->RemStdCancelbutton);
			this->RemoveStudentPage->Controls->Add(this->label25);
			this->RemoveStudentPage->Controls->Add(this->label23);
			this->RemoveStudentPage->Location = System::Drawing::Point(4, 22);
			this->RemoveStudentPage->Name = L"RemoveStudentPage";
			this->RemoveStudentPage->Padding = System::Windows::Forms::Padding(3);
			this->RemoveStudentPage->Size = System::Drawing::Size(662, 425);
			this->RemoveStudentPage->TabIndex = 4;
			this->RemoveStudentPage->Text = L"Remove Student";
			this->RemoveStudentPage->UseVisualStyleBackColor = true;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(125, 285);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(47, 13);
			this->label27->TabIndex = 7;
			this->label27->Text = L"Captcha";
			// 
			// RemStdCptlabel
			// 
			this->RemStdCptlabel->AutoSize = true;
			this->RemStdCptlabel->Location = System::Drawing::Point(319, 228);
			this->RemStdCptlabel->Name = L"RemStdCptlabel";
			this->RemStdCptlabel->Size = System::Drawing::Size(41, 13);
			this->RemStdCptlabel->TabIndex = 6;
			this->RemStdCptlabel->Text = Captcha.ToString();
			// 
			// RemStdCaptchatextBox
			// 
			this->RemStdCaptchatextBox->Location = System::Drawing::Point(247, 278);
			this->RemStdCaptchatextBox->Name = L"RemStdCaptchatextBox";
			this->RemStdCaptchatextBox->Size = System::Drawing::Size(222, 20);
			this->RemStdCaptchatextBox->TabIndex = 5;
			// 
			// RemStdIDBox
			// 
			this->RemStdIDBox->Location = System::Drawing::Point(247, 141);
			this->RemStdIDBox->Name = L"RemStdIDBox";
			this->RemStdIDBox->Size = System::Drawing::Size(222, 20);
			this->RemStdIDBox->TabIndex = 4;
			// 
			// RemStdConfirmbutton
			// 
			this->RemStdConfirmbutton->Location = System::Drawing::Point(453, 331);
			this->RemStdConfirmbutton->Name = L"RemStdConfirmbutton";
			this->RemStdConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemStdConfirmbutton->TabIndex = 3;
			this->RemStdConfirmbutton->Text = L"Confirm";
			this->RemStdConfirmbutton->UseVisualStyleBackColor = true;
			this->RemStdConfirmbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemStdConfirmbutton_Click);
			// 
			// RemStdCancelbutton
			// 
			this->RemStdCancelbutton->Location = System::Drawing::Point(164, 327);
			this->RemStdCancelbutton->Name = L"RemStdCancelbutton";
			this->RemStdCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemStdCancelbutton->TabIndex = 2;
			this->RemStdCancelbutton->Text = L"Cancel";
			this->RemStdCancelbutton->UseVisualStyleBackColor = true;
			this->RemStdCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemStdCancelbutton_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(125, 148);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 13);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Student ID";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(224, 21);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(256, 36);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Removing one Student";
			// 
			// RemoveTeacherPage
			// 
			this->RemoveTeacherPage->Controls->Add(this->RemTechCaptBox);
			this->RemoveTeacherPage->Controls->Add(this->RemTechIDBox);
			this->RemoveTeacherPage->Controls->Add(this->RemTechConfirmbutton);
			this->RemoveTeacherPage->Controls->Add(this->RemTechCancelbutton);
			this->RemoveTeacherPage->Controls->Add(this->label39);
			this->RemoveTeacherPage->Controls->Add(this->RemTechCaptchlabel);
			this->RemoveTeacherPage->Controls->Add(this->label37);
			this->RemoveTeacherPage->Controls->Add(this->label35);
			this->RemoveTeacherPage->Location = System::Drawing::Point(4, 22);
			this->RemoveTeacherPage->Name = L"RemoveTeacherPage";
			this->RemoveTeacherPage->Padding = System::Windows::Forms::Padding(3);
			this->RemoveTeacherPage->Size = System::Drawing::Size(662, 425);
			this->RemoveTeacherPage->TabIndex = 5;
			this->RemoveTeacherPage->Text = L"Remove Teacher";
			this->RemoveTeacherPage->UseVisualStyleBackColor = true;
			// 
			// RemTechCaptBox
			// 
			this->RemTechCaptBox->Location = System::Drawing::Point(225, 225);
			this->RemTechCaptBox->Name = L"RemTechCaptBox";
			this->RemTechCaptBox->Size = System::Drawing::Size(244, 20);
			this->RemTechCaptBox->TabIndex = 7;
			// 
			// RemTechIDBox
			// 
			this->RemTechIDBox->Location = System::Drawing::Point(225, 95);
			this->RemTechIDBox->Name = L"RemTechIDBox";
			this->RemTechIDBox->Size = System::Drawing::Size(244, 20);
			this->RemTechIDBox->TabIndex = 6;
			// 
			// RemTechConfirmbutton
			// 
			this->RemTechConfirmbutton->Location = System::Drawing::Point(426, 347);
			this->RemTechConfirmbutton->Name = L"RemTechConfirmbutton";
			this->RemTechConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemTechConfirmbutton->TabIndex = 5;
			this->RemTechConfirmbutton->Text = L"Confirm";
			this->RemTechConfirmbutton->UseVisualStyleBackColor = true;
			this->RemTechConfirmbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemTechConfirmbutton_Click);
			// 
			// RemTechCancelbutton
			// 
			this->RemTechCancelbutton->Location = System::Drawing::Point(168, 347);
			this->RemTechCancelbutton->Name = L"RemTechCancelbutton";
			this->RemTechCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemTechCancelbutton->TabIndex = 4;
			this->RemTechCancelbutton->Text = L"Cancel";
			this->RemTechCancelbutton->UseVisualStyleBackColor = true;
			this->RemTechCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemTechCancelbutton_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(138, 232);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(47, 13);
			this->label39->TabIndex = 3;
			this->label39->Text = L"Captcha";
			// 
			// RemTechCaptchlabel
			// 
			this->RemTechCaptchlabel->AutoSize = true;
			this->RemTechCaptchlabel->Location = System::Drawing::Point(328, 171);
			this->RemTechCaptchlabel->Name = L"RemTechCaptchlabel";
			this->RemTechCaptchlabel->Size = System::Drawing::Size(41, 13);
			this->RemTechCaptchlabel->TabIndex = 2;
			this->RemTechCaptchlabel->Text = Captcha.ToString();
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(138, 102);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(68, 13);
			this->label37->TabIndex = 1;
			this->label37->Text = L"Teacher\'s ID";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(221, 21);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(259, 36);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Removing One Teacher";
			// 
			// AddCoursePage
			// 
			this->AddCoursePage->Controls->Add(this->label22);
			this->AddCoursePage->Controls->Add(this->CourseCaptchBox);
			this->AddCoursePage->Controls->Add(this->CourseDetailBox);
			this->AddCoursePage->Controls->Add(this->CourseNameBox);
			this->AddCoursePage->Controls->Add(this->CourseConfirmbutton);
			this->AddCoursePage->Controls->Add(this->CourseCancelbutton);
			this->AddCoursePage->Controls->Add(this->label24);
			this->AddCoursePage->Controls->Add(this->CaptchaCourse);
			this->AddCoursePage->Controls->Add(this->label20);
			this->AddCoursePage->Controls->Add(this->label17);
			this->AddCoursePage->Location = System::Drawing::Point(4, 22);
			this->AddCoursePage->Name = L"AddCoursePage";
			this->AddCoursePage->Padding = System::Windows::Forms::Padding(3);
			this->AddCoursePage->Size = System::Drawing::Size(662, 425);
			this->AddCoursePage->TabIndex = 6;
			this->AddCoursePage->Text = L"Add Course";
			this->AddCoursePage->UseVisualStyleBackColor = true;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(196, 18);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(267, 37);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Registering New Course";
			// 
			// CourseCaptchBox
			// 
			this->CourseCaptchBox->Location = System::Drawing::Point(194, 267);
			this->CourseCaptchBox->Name = L"CourseCaptchBox";
			this->CourseCaptchBox->Size = System::Drawing::Size(275, 20);
			this->CourseCaptchBox->TabIndex = 10;
			// 
			// CourseDetailBox
			// 
			this->CourseDetailBox->Location = System::Drawing::Point(179, 134);
			this->CourseDetailBox->Name = L"CourseDetailBox";
			this->CourseDetailBox->Size = System::Drawing::Size(290, 20);
			this->CourseDetailBox->TabIndex = 9;
			// 
			// CourseNameBox
			// 
			this->CourseNameBox->Location = System::Drawing::Point(179, 71);
			this->CourseNameBox->Name = L"CourseNameBox";
			this->CourseNameBox->Size = System::Drawing::Size(290, 20);
			this->CourseNameBox->TabIndex = 8;
			// 
			// CourseConfirmbutton
			// 
			this->CourseConfirmbutton->Location = System::Drawing::Point(445, 362);
			this->CourseConfirmbutton->Name = L"CourseConfirmbutton";
			this->CourseConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->CourseConfirmbutton->TabIndex = 7;
			this->CourseConfirmbutton->Text = L"Confirm";
			this->CourseConfirmbutton->UseVisualStyleBackColor = true;
			this->CourseConfirmbutton->Click += gcnew System::EventHandler(this, &DashBoard::CourseConfirmbutton_Click);
			// 
			// CourseCancelbutton
			// 
			this->CourseCancelbutton->Location = System::Drawing::Point(131, 362);
			this->CourseCancelbutton->Name = L"CourseCancelbutton";
			this->CourseCancelbutton->Size = System::Drawing::Size(75, 23);
			this->CourseCancelbutton->TabIndex = 6;
			this->CourseCancelbutton->Text = L"Cancel";
			this->CourseCancelbutton->UseVisualStyleBackColor = true;
			this->CourseCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::CourseCancelbutton_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(83, 265);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 13);
			this->label24->TabIndex = 5;
			this->label24->Text = L"Captcha";
			// 
			// CaptchaCourse
			// 
			this->CaptchaCourse->AutoSize = true;
			this->CaptchaCourse->Location = System::Drawing::Point(323, 223);
			this->CaptchaCourse->Name = L"CaptchaCourse";
			this->CaptchaCourse->Size = System::Drawing::Size(41, 13);
			this->CaptchaCourse->TabIndex = 4;
			this->CaptchaCourse->Text = Captcha.ToString();
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(83, 141);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Details";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(83, 78);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(35, 13);
			this->label17->TabIndex = 0;
			this->label17->Text = L"Name";
			// 
			// RemoveCoursePage
			// 
			this->RemoveCoursePage->Controls->Add(this->RemCourseCaptcBox);
			this->RemoveCoursePage->Controls->Add(this->RemCourseIDBox);
			this->RemoveCoursePage->Controls->Add(this->RemCourseConfirmbutton);
			this->RemoveCoursePage->Controls->Add(this->RemCourseCancelbutton);
			this->RemoveCoursePage->Controls->Add(this->label30);
			this->RemoveCoursePage->Controls->Add(this->RemCourseCaptlabel);
			this->RemoveCoursePage->Controls->Add(this->label28);
			this->RemoveCoursePage->Controls->Add(this->label26);
			this->RemoveCoursePage->Location = System::Drawing::Point(4, 22);
			this->RemoveCoursePage->Name = L"RemoveCoursePage";
			this->RemoveCoursePage->Padding = System::Windows::Forms::Padding(3);
			this->RemoveCoursePage->Size = System::Drawing::Size(662, 425);
			this->RemoveCoursePage->TabIndex = 7;
			this->RemoveCoursePage->Text = L"Remove Course";
			this->RemoveCoursePage->UseVisualStyleBackColor = true;
			// 
			// RemCourseCaptcBox
			// 
			this->RemCourseCaptcBox->Location = System::Drawing::Point(206, 280);
			this->RemCourseCaptcBox->Name = L"RemCourseCaptcBox";
			this->RemCourseCaptcBox->Size = System::Drawing::Size(263, 20);
			this->RemCourseCaptcBox->TabIndex = 7;
			// 
			// RemCourseIDBox
			// 
			this->RemCourseIDBox->Location = System::Drawing::Point(206, 107);
			this->RemCourseIDBox->Name = L"RemCourseIDBox";
			this->RemCourseIDBox->Size = System::Drawing::Size(263, 20);
			this->RemCourseIDBox->TabIndex = 6;
			// 
			// RemCourseConfirmbutton
			// 
			this->RemCourseConfirmbutton->Location = System::Drawing::Point(452, 361);
			this->RemCourseConfirmbutton->Name = L"RemCourseConfirmbutton";
			this->RemCourseConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemCourseConfirmbutton->TabIndex = 5;
			this->RemCourseConfirmbutton->Text = L"Confirm";
			this->RemCourseConfirmbutton->UseVisualStyleBackColor = true;
			this->RemCourseConfirmbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemCourseConfirmbutton_Click);
			// 
			// RemCourseCancelbutton
			// 
			this->RemCourseCancelbutton->Location = System::Drawing::Point(137, 361);
			this->RemCourseCancelbutton->Name = L"RemCourseCancelbutton";
			this->RemCourseCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemCourseCancelbutton->TabIndex = 4;
			this->RemCourseCancelbutton->Text = L"Cancel";
			this->RemCourseCancelbutton->UseVisualStyleBackColor = true;
			this->RemCourseCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::RemCourseCancelbutton_Click);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(102, 287);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(47, 13);
			this->label30->TabIndex = 3;
			this->label30->Text = L"Captcha";
			// 
			// RemCourseCaptlabel
			// 
			this->RemCourseCaptlabel->AutoSize = true;
			this->RemCourseCaptlabel->Location = System::Drawing::Point(295, 196);
			this->RemCourseCaptlabel->Name = L"RemCourseCaptlabel";
			this->RemCourseCaptlabel->Size = System::Drawing::Size(41, 13);
			this->RemCourseCaptlabel->TabIndex = 2;
			this->RemCourseCaptlabel->Text = Captcha.ToString();
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(99, 114);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(82, 13);
			this->label28->TabIndex = 1;
			this->label28->Text = L"Enter Course ID";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(224, 31);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(247, 36);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Removing One Course";
			// 
			// UpdateFeesPage
			// 
			this->UpdateFeesPage->Controls->Add(this->PayFeelabel);
			this->UpdateFeesPage->Controls->Add(this->PayIDBox);
			this->UpdateFeesPage->Controls->Add(this->PayConfirmbutton);
			this->UpdateFeesPage->Controls->Add(this->PayCancelbutton);
			this->UpdateFeesPage->Controls->Add(this->FeesPayAmountBox);
			this->UpdateFeesPage->Controls->Add(this->label47);
			this->UpdateFeesPage->Controls->Add(this->PayClasslabel);
			this->UpdateFeesPage->Controls->Add(this->PayNamelabel);
			this->UpdateFeesPage->Controls->Add(this->PaySearchbutton);
			this->UpdateFeesPage->Controls->Add(this->label44);
			this->UpdateFeesPage->Controls->Add(this->label43);
			this->UpdateFeesPage->Controls->Add(this->label42);
			this->UpdateFeesPage->Controls->Add(this->label41);
			this->UpdateFeesPage->Controls->Add(this->label40);
			this->UpdateFeesPage->Controls->Add(this->label38);
			this->UpdateFeesPage->Location = System::Drawing::Point(4, 22);
			this->UpdateFeesPage->Name = L"UpdateFeesPage";
			this->UpdateFeesPage->Padding = System::Windows::Forms::Padding(3);
			this->UpdateFeesPage->Size = System::Drawing::Size(662, 425);
			this->UpdateFeesPage->TabIndex = 8;
			this->UpdateFeesPage->Text = L"Update Fees";
			this->UpdateFeesPage->UseVisualStyleBackColor = true;
			// 
			// PayFeelabel
			// 
			this->PayFeelabel->AutoSize = true;
			this->PayFeelabel->Location = System::Drawing::Point(315, 185);
			this->PayFeelabel->Name = L"PayFeelabel";
			this->PayFeelabel->Size = System::Drawing::Size(0, 13);
			this->PayFeelabel->TabIndex = 14;
			// 
			// PayIDBox
			// 
			this->PayIDBox->Location = System::Drawing::Point(184, 80);
			this->PayIDBox->Name = L"PayIDBox";
			this->PayIDBox->Size = System::Drawing::Size(241, 20);
			this->PayIDBox->TabIndex = 13;
			// 
			// PayConfirmbutton
			// 
			this->PayConfirmbutton->Location = System::Drawing::Point(416, 346);
			this->PayConfirmbutton->Name = L"PayConfirmbutton";
			this->PayConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->PayConfirmbutton->TabIndex = 12;
			this->PayConfirmbutton->Text = L"Confirm";
			this->PayConfirmbutton->UseVisualStyleBackColor = true;
			this->PayConfirmbutton->Click += gcnew System::EventHandler(this, &DashBoard::PayConfirmbutton_Click);
			// 
			// PayCancelbutton
			// 
			this->PayCancelbutton->Location = System::Drawing::Point(146, 346);
			this->PayCancelbutton->Name = L"PayCancelbutton";
			this->PayCancelbutton->Size = System::Drawing::Size(75, 23);
			this->PayCancelbutton->TabIndex = 11;
			this->PayCancelbutton->Text = L"Cancel";
			this->PayCancelbutton->UseVisualStyleBackColor = true;
			this->PayCancelbutton->Click += gcnew System::EventHandler(this, &DashBoard::PayCancelbutton_Click);
			// 
			// FeesPayAmountBox
			// 
			this->FeesPayAmountBox->Location = System::Drawing::Point(289, 261);
			this->FeesPayAmountBox->Name = L"FeesPayAmountBox";
			this->FeesPayAmountBox->Size = System::Drawing::Size(199, 20);
			this->FeesPayAmountBox->TabIndex = 10;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(296, 185);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(13, 13);
			this->label47->TabIndex = 9;
			this->label47->Text = L"$";
			// 
			// PayClasslabel
			// 
			this->PayClasslabel->AutoSize = true;
			this->PayClasslabel->Location = System::Drawing::Point(297, 154);
			this->PayClasslabel->Name = L"PayClasslabel";
			this->PayClasslabel->Size = System::Drawing::Size(0, 13);
			this->PayClasslabel->TabIndex = 8;
			// 
			// PayNamelabel
			// 
			this->PayNamelabel->AutoSize = true;
			this->PayNamelabel->Location = System::Drawing::Point(297, 126);
			this->PayNamelabel->Name = L"PayNamelabel";
			this->PayNamelabel->Size = System::Drawing::Size(0, 13);
			this->PayNamelabel->TabIndex = 7;
			// 
			// PaySearchbutton
			// 
			this->PaySearchbutton->Location = System::Drawing::Point(493, 77);
			this->PaySearchbutton->Name = L"PaySearchbutton";
			this->PaySearchbutton->Size = System::Drawing::Size(75, 23);
			this->PaySearchbutton->TabIndex = 6;
			this->PaySearchbutton->Text = L"Search";
			this->PaySearchbutton->UseVisualStyleBackColor = true;
			this->PaySearchbutton->Click += gcnew System::EventHandler(this, &DashBoard::PaySearchbutton_Click);
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(152, 268);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(108, 13);
			this->label44->TabIndex = 5;
			this->label44->Text = L"Enter Amount To Pay";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(179, 185);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(72, 13);
			this->label43->TabIndex = 4;
			this->label43->Text = L"Fees Balance";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(216, 126);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(35, 13);
			this->label42->TabIndex = 3;
			this->label42->Text = L"Name";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(219, 154);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(32, 13);
			this->label41->TabIndex = 2;
			this->label41->Text = L"Class";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(100, 87);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(58, 13);
			this->label40->TabIndex = 1;
			this->label40->Text = L"Student ID";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(263, 6);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(125, 36);
			this->label38->TabIndex = 0;
			this->label38->Text = L"SchoolFees";
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 499);
			this->Controls->Add(this->Schooltab);
			this->Controls->Add(this->BalanceNolabel);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->CourseNolabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->StudentsNolabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->TeacherNolabel);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"DashBoard";
			this->Text = L"DashBoard";
			this->Schooltab->ResumeLayout(false);
			this->OverviewPage->ResumeLayout(false);
			this->OverviewPage->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->AddStudentPage->ResumeLayout(false);
			this->AddStudentPage->PerformLayout();
			this->AddTeacherPage->ResumeLayout(false);
			this->AddTeacherPage->PerformLayout();
			this->RemoveStudentPage->ResumeLayout(false);
			this->RemoveStudentPage->PerformLayout();
			this->RemoveTeacherPage->ResumeLayout(false);
			this->RemoveTeacherPage->PerformLayout();
			this->AddCoursePage->ResumeLayout(false);
			this->AddCoursePage->PerformLayout();
			this->RemoveCoursePage->ResumeLayout(false);
			this->RemoveCoursePage->PerformLayout();
			this->UpdateFeesPage->ResumeLayout(false);
			this->UpdateFeesPage->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->Close();
		}
		private: System::Void PayCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->PayIDBox->Clear();
			this->FeesPayAmountBox->Clear();
		}
		private: System::Void RemCourseCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->RemCourseIDBox->Clear();
			this->RemCourseCaptcBox->Clear();
		}
		private: System::Void CourseCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->CourseNameBox->Clear();
			this->CourseDetailBox->Clear();
			this->CourseCaptchBox->Clear();
		}
		private: System::Void RemTechCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->RemTechIDBox->Clear();
			this->RemTechCaptBox->Clear();
		}
		private: System::Void RemStdCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->RemStdIDBox->Clear();
			this->RemStdCaptchatextBox->Clear();
		}
		private: System::Void AddTechCancelbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->AddTechNameBox->Clear();
			this->AddTechCaptchBox->Clear();
			this->AddTechCourseBox->Clear();
			this->AddTechGenderCmboBox->Refresh();
			this->AddTechPassBox->Clear();
		}
		private: System::Void AddTechConfbutton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ Nam = this->AddTechNameBox->Text;
			String^ Gen = this->AddTechGenderCmboBox->Text;
			String^ cou = this->AddTechCourseBox->Text;
			String^ Pas = this->AddTechPassBox->Text;
			String^ Kattt = this->AddTechCaptchBox->Text;
			int bittt = Convert::ToInt32(Kattt);
			int ID = TeachNo + 1;
			if (Pas->Length == 0 || cou->Length == 0 || Gen->Length == 0 || Nam->Length == 0 || Pas->Length == 0 || Kattt->Length == 0 )
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			if (bittt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}
			try
			{
				String^ course_idVal;
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();
				String^ sqlQuery = "select Id from Course where Name=@name and School_ID=@IDDD";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@name", cou);
				command.Parameters->AddWithValue("@IDDD", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					course_idVal = reader->GetString(0);
				}
				else
				{
					MessageBox::Show("Failed to read from database", "error", MessageBoxButtons::OK); return;
				}
				sqlQuery = "insert into Teacher (Id,School_IDName,Name,Gender,Details,Password,Course_ID) values (@ID,@SchiD,@Name,@Gender,@Det,@Password,@Cour)";
				SqlCommand command2(sqlQuery, % sqlConn);
				command2.Parameters->AddWithValue("@ID", ID);
				command2.Parameters->AddWithValue("@SchiD", MyID);
				command2.Parameters->AddWithValue("@Name", Nam);
				command2.Parameters->AddWithValue("@Gender", Gen);
				command2.Parameters->AddWithValue("@Det", "None");
				command2.Parameters->AddWithValue("@password", Pas);
				command2.Parameters->AddWithValue("@Cour", course_idVal);
				reader = command2.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("New Teacher Recorded. ID is :" + ID + "  Password is " + Pas, "New Teacher", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to Record new Teacher", "New Teacher", MessageBoxButtons::OK); return;
				}
				this->AddTechNameBox->Clear();
				this->AddTechCaptchBox->Clear();
				this->AddTechCourseBox->Clear();
				this->AddTechGenderCmboBox->Refresh();
				this->AddTechPassBox->Clear();
				//Refresh the values of number of school
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			this->StdNameBox->Clear();
			this->StdDOBdate->Refresh();
			this->ClassComboBox->Refresh();
			this->StdGenderComboBox->Refresh();
			this->StdDOBdate->Refresh();
			this->StdPassTextBox->Clear();
			this->PNametextBox->Clear();
			this->PContacttextBox->Clear();
			this->PGenderComboBox->Refresh();
			this->PPassTextBox->Clear();
			this->FeesTextBox->Clear();
			this->CaptchaTextBox->Clear();
		}
		private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int sttdnt = StdNo + 1;
			int parre = ParentNo + 1;
			String^ stdnam = this->StdNameBox->Text;
			String^ Dob = this->StdDOBdate->Text;
			String^ Clasna = this->ClassComboBox->Text;
			String^ gens = this->StdGenderComboBox->Text;
			String^ pars = this->StdPassTextBox->Text;
			String^ parnam = this->PNametextBox->Text;
			String^ cont = this->PContacttextBox->Text;
			String^ pgen = this->PGenderComboBox->Text;
			String^ ppass = this->PPassTextBox->Text;
			String^ feesVal = this->FeesTextBox->Text;
			String^ katt = this->CaptchaTextBox->Text;

			if (stdnam->Length == 0 || feesVal->Length == 0 || ppass->Length == 0 || pgen->Length == 0 || cont->Length == 0 || parnam->Length == 0 || pars->Length == 0 || Dob->Length == 0 || Clasna->Length == 0 || gens->Length == 0 || katt->Length == 0)
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			int bitt = Convert::ToInt32(katt);
			if (bitt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}
			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "insert into Student (Id,School_ID,Name,Class,Position,Gender,Fees_Balance,DOB,Parent_ID,Password) values (@Id,@School_ID,@Name,@Class,@Position,@Gender,@Fees_Balance,@DOB,@Parent_ID,@Password)";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", sttdnt);
				command.Parameters->AddWithValue("@School_ID", MyID);
				command.Parameters->AddWithValue("@Name", stdnam);
				command.Parameters->AddWithValue("@Class", Clasna);
				command.Parameters->AddWithValue("@Position", 0);
				command.Parameters->AddWithValue("@Gender", gens);
				command.Parameters->AddWithValue("@Fees_Balance", feesVal);
				command.Parameters->AddWithValue("@DOB", Dob);
				command.Parameters->AddWithValue("@Parent_ID", ParentNo);
				command.Parameters->AddWithValue("@Password", pars);

				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("New Student Recorded. ID is :" + sttdnt + "  Password is " + pars, "New Student", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to Record new Student", "New Student", MessageBoxButtons::OK); return;
				}
				sqlQuery = "insert into Parent (Id,Name,Gender,Contact,Password,Student_ID) values (@Id,@Name,@Gender,@Contact,@Password,@Student_ID)";
				SqlCommand command2(sqlQuery, % sqlConn);
				command2.Parameters->AddWithValue("@ID", parre);
				command2.Parameters->AddWithValue("@Name",parnam );
				command2.Parameters->AddWithValue("@Gender", pgen);
				command2.Parameters->AddWithValue("@Contact", cont);
				command2.Parameters->AddWithValue("@Password", ppass);
				command2.Parameters->AddWithValue("@Student_ID", sttdnt);
				
				reader = command2.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("New Parent Recorded. ID is :" + parre + "  Password is " + ppass, "New Parent", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to Record new Parent", "New Parent", MessageBoxButtons::OK); return;
				}
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
			this->StdNameBox->Clear();
			this->StdDOBdate->Refresh();
			this->ClassComboBox->Refresh();
			this->StdGenderComboBox->Refresh();
			this->StdDOBdate->Refresh();
			this->StdPassTextBox->Clear();
			this->PNametextBox->Clear();
			this->PContacttextBox->Clear();
			this->PGenderComboBox->Refresh();
			this->PPassTextBox->Clear();
			this->FeesTextBox->Clear();
			this->CaptchaTextBox->Clear();
		}
		private: System::Void PaySearchbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ Id = this->PayIDBox->Text;
			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "select * from Student where Id=@ID and School_ID=@SchoolID";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", Id);
				command.Parameters->AddWithValue("@SchoolID", this->MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					this->PayNamelabel->Text = reader->GetString(2);
					this->PayClasslabel->Text = reader->GetInt32(3).ToString();
					this->PayFeelabel->Text = reader->GetInt32(6).ToString();
				}
				else
				{
					MessageBox::Show("Failed to read from database", "error", MessageBoxButtons::OK); return;
				}
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void PayConfirmbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ Id = this->PayIDBox->Text;
			String^ casH = this->FeesPayAmountBox->Text;
			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "update Student set Fees_Balance = Fees_Balance - @cashval where Id=@ID and School_ID=@SchoolID";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@cashval", casH);
				command.Parameters->AddWithValue("@ID", Id);
				command.Parameters->AddWithValue("@SchoolID", this->MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("Fees Updated Successfully", "Success", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to read from database", "error", MessageBoxButtons::OK); return;
				}
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void RemCourseConfirmbutton_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			String^ CourseeID = this->RemCourseIDBox->Text;
			String^ Bitt = this->RemCourseCaptcBox->Text;
			if (CourseeID->Length == 0|| Bitt->Length==0)
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			int katt = Convert::ToInt32(Bitt);
			if (katt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}

			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "delete from Course where ID = @ID and School_ID = @meme";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", CourseeID);
				command.Parameters->AddWithValue("@meme", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("Course Deleted", "Message", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to delete course", "error", MessageBoxButtons::OK); return;
				}
				this->RemCourseIDBox->Clear();
				this->RemCourseCaptcBox->Clear();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void CourseConfirmbutton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			int CrsID = CourseNo + 1;
			String^ Name=this->CourseNameBox->Text;
			String^ detail=this->CourseDetailBox->Text;
			String^ katt=this->CourseCaptchBox->Text;

			if (Name->Length == 0 || detail->Length == 0 || katt->Length == 0)
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			int bitt= Convert::ToInt32(katt);
			if (bitt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}

			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "insert into Course (Id,Name,Details,School_ID) values (@ID,@Name,@detal,@SchID)";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", CrsID);
				command.Parameters->AddWithValue("@Name", Name);
				command.Parameters->AddWithValue("@detal", detail);
				command.Parameters->AddWithValue("@SchID", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("New Course Recorded. ID is :" + CrsID + "  Name is " + Name, "New Course", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to Record new Course", "New Course", MessageBoxButtons::OK); return;
				}
				this->CourseNameBox->Clear();
				this->CourseDetailBox->Clear();
				this->CourseCaptchBox->Clear();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void RemTechConfirmbutton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ TechID=this->RemTechIDBox->Text;
			String^ Bitt=this->RemTechCaptBox->Text;
			if (TechID->Length == 0 || Bitt->Length == 0)
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			int katt = Convert::ToInt32(Bitt);
			if (katt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}

			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "delete from Teacher where ID = @ID and School_ID = @meme";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", TechID);
				command.Parameters->AddWithValue("@meme", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("Teacher Deleted", "Message", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to delete Teacher", "error", MessageBoxButtons::OK); return;
				}
				this->RemTechIDBox->Clear();
				this->RemTechCaptBox->Clear();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
		private: System::Void RemStdConfirmbutton_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->RemStdIDBox->Clear();
			this->RemStdCaptchatextBox->Clear();
			String^ sTdID = this->RemStdIDBox->Text;
			String^ Bitt = this->RemStdCaptchatextBox->Text;
			if (sTdID->Length == 0 || Bitt->Length == 0)
			{
				MessageBox::Show("Please Enter all fields", "Incomplete", MessageBoxButtons::OK); return;
			}
			int katt = Convert::ToInt32(Bitt);
			if (katt != Captcha)
			{
				MessageBox::Show("Please Enter The correct Captcha Code", "Are you Human?", MessageBoxButtons::OK); return;
			}

			try
			{
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=" + "United Education System" + "; Integrated Security = True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "delete from Student where ID = @ID and School_ID = @meme";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", sTdID);
				command.Parameters->AddWithValue("@meme", MyID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					MessageBox::Show("Student Deleted", "Message", MessageBoxButtons::OK);
				}
				else
				{
					MessageBox::Show("Failed to delete student", "error", MessageBoxButtons::OK); return;
				}
				this->RemStdIDBox->Clear();
				this->RemStdCaptchatextBox->Clear();
				sqlConn.Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(e->Message, "Connection Error", MessageBoxButtons::OK);
			}
		}
	};
 }

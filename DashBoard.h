#pragma once

namespace School {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DashBoard
	/// </summary>
	public ref class DashBoard : public System::Windows::Forms::Form
	{
	public:
		DashBoard(void)
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
		~DashBoard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tab3;
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
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage7;
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
	private: System::Windows::Forms::TabPage^ tabPage3;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tab3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->CaptchaLabel = (gcnew System::Windows::Forms::Label());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->StdConfirmButton = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->StdNameBox = (gcnew System::Windows::Forms::TextBox());
			this->StdPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->CaptchaTextBox = (gcnew System::Windows::Forms::TextBox());
			this->PNametextBox = (gcnew System::Windows::Forms::TextBox());
			this->PContacttextBox = (gcnew System::Windows::Forms::TextBox());
			this->PPassTextBox = (gcnew System::Windows::Forms::TextBox());
			this->FeesTextBox = (gcnew System::Windows::Forms::TextBox());
			this->StdGenderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->ClassComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->StdDOBdate = (gcnew System::Windows::Forms::DateTimePicker());
			this->PGenderComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->CaptchaCourse = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->CourseCancelbutton = (gcnew System::Windows::Forms::Button());
			this->CourseConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->CourseNameBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseDetailBox = (gcnew System::Windows::Forms::TextBox());
			this->CourseCaptchBox = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->RemStdCancelbutton = (gcnew System::Windows::Forms::Button());
			this->RemStdConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemStdIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemStdCaptchatextBox = (gcnew System::Windows::Forms::TextBox());
			this->RemStdCptlabel = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->RemCourseCaptlabel = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->RemCourseCancelbutton = (gcnew System::Windows::Forms::Button());
			this->RemCourseConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemCourseIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemCourseCaptcBox = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->AddTechCaptchaLabel = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->AddTechCancelbutton = (gcnew System::Windows::Forms::Button());
			this->addTechConfbutton = (gcnew System::Windows::Forms::Button());
			this->AddTechNameBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechPassBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechCourseBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechCaptchBox = (gcnew System::Windows::Forms::TextBox());
			this->AddTechGenderCmboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->RemTechCaptchlabel = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->RemTechCancelbutton = (gcnew System::Windows::Forms::Button());
			this->RemTechConfirmbutton = (gcnew System::Windows::Forms::Button());
			this->RemTechIDBox = (gcnew System::Windows::Forms::TextBox());
			this->RemTechCaptBox = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tab3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
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
			this->label2->Click += gcnew System::EventHandler(this, &DashBoard::label2_Click);
			// 
			// TeacherNolabel
			// 
			this->TeacherNolabel->AutoSize = true;
			this->TeacherNolabel->Location = System::Drawing::Point(745, 75);
			this->TeacherNolabel->Name = L"TeacherNolabel";
			this->TeacherNolabel->Size = System::Drawing::Size(35, 13);
			this->TeacherNolabel->TabIndex = 3;
			this->TeacherNolabel->Text = L"label3";
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
			this->StudentsNolabel->Text = L"label4";
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
			this->CourseNolabel->Text = L"label5";
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
			this->BalanceNolabel->Text = L"label7";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tab3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(0, 47);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(670, 451);
			this->tabControl1->TabIndex = 11;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(662, 425);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Overview";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tab3
			// 
			this->tab3->Controls->Add(this->label21);
			this->tab3->Controls->Add(this->label19);
			this->tab3->Controls->Add(this->PGenderComboBox);
			this->tab3->Controls->Add(this->StdDOBdate);
			this->tab3->Controls->Add(this->ClassComboBox);
			this->tab3->Controls->Add(this->StdGenderComboBox);
			this->tab3->Controls->Add(this->FeesTextBox);
			this->tab3->Controls->Add(this->PPassTextBox);
			this->tab3->Controls->Add(this->PContacttextBox);
			this->tab3->Controls->Add(this->PNametextBox);
			this->tab3->Controls->Add(this->CaptchaTextBox);
			this->tab3->Controls->Add(this->StdPassTextBox);
			this->tab3->Controls->Add(this->StdNameBox);
			this->tab3->Controls->Add(this->label18);
			this->tab3->Controls->Add(this->StdConfirmButton);
			this->tab3->Controls->Add(this->CancelButton);
			this->tab3->Controls->Add(this->CaptchaLabel);
			this->tab3->Controls->Add(this->label16);
			this->tab3->Controls->Add(this->label15);
			this->tab3->Controls->Add(this->label14);
			this->tab3->Controls->Add(this->label13);
			this->tab3->Controls->Add(this->label12);
			this->tab3->Controls->Add(this->label11);
			this->tab3->Controls->Add(this->label10);
			this->tab3->Controls->Add(this->label9);
			this->tab3->Controls->Add(this->label8);
			this->tab3->Controls->Add(this->label7);
			this->tab3->Location = System::Drawing::Point(4, 22);
			this->tab3->Name = L"tab3";
			this->tab3->Padding = System::Windows::Forms::Padding(3);
			this->tab3->Size = System::Drawing::Size(662, 425);
			this->tab3->TabIndex = 2;
			this->tab3->Text = L"Add Student";
			this->tab3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->AddTechGenderCmboBox);
			this->tabPage4->Controls->Add(this->AddTechCaptchBox);
			this->tabPage4->Controls->Add(this->AddTechCourseBox);
			this->tabPage4->Controls->Add(this->AddTechPassBox);
			this->tabPage4->Controls->Add(this->AddTechNameBox);
			this->tabPage4->Controls->Add(this->addTechConfbutton);
			this->tabPage4->Controls->Add(this->AddTechCancelbutton);
			this->tabPage4->Controls->Add(this->label36);
			this->tabPage4->Controls->Add(this->AddTechCaptchaLabel);
			this->tabPage4->Controls->Add(this->label34);
			this->tabPage4->Controls->Add(this->label33);
			this->tabPage4->Controls->Add(this->label32);
			this->tabPage4->Controls->Add(this->label31);
			this->tabPage4->Controls->Add(this->label29);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(662, 425);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Add Teacher";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label27);
			this->tabPage5->Controls->Add(this->RemStdCptlabel);
			this->tabPage5->Controls->Add(this->RemStdCaptchatextBox);
			this->tabPage5->Controls->Add(this->RemStdIDBox);
			this->tabPage5->Controls->Add(this->RemStdConfirmbutton);
			this->tabPage5->Controls->Add(this->RemStdCancelbutton);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(662, 425);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Remove Student";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->RemTechCaptBox);
			this->tabPage6->Controls->Add(this->RemTechIDBox);
			this->tabPage6->Controls->Add(this->RemTechConfirmbutton);
			this->tabPage6->Controls->Add(this->RemTechCancelbutton);
			this->tabPage6->Controls->Add(this->label39);
			this->tabPage6->Controls->Add(this->RemTechCaptchlabel);
			this->tabPage6->Controls->Add(this->label37);
			this->tabPage6->Controls->Add(this->label35);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(662, 425);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Remove Teacher";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->CourseCaptchBox);
			this->tabPage1->Controls->Add(this->CourseDetailBox);
			this->tabPage1->Controls->Add(this->CourseNameBox);
			this->tabPage1->Controls->Add(this->CourseConfirmbutton);
			this->tabPage1->Controls->Add(this->CourseCancelbutton);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->CaptchaCourse);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(662, 425);
			this->tabPage1->TabIndex = 6;
			this->tabPage1->Text = L"Add Course";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage7
			// 
			this->tabPage7->Controls->Add(this->RemCourseCaptcBox);
			this->tabPage7->Controls->Add(this->RemCourseIDBox);
			this->tabPage7->Controls->Add(this->RemCourseConfirmbutton);
			this->tabPage7->Controls->Add(this->RemCourseCancelbutton);
			this->tabPage7->Controls->Add(this->label30);
			this->tabPage7->Controls->Add(this->RemCourseCaptlabel);
			this->tabPage7->Controls->Add(this->label28);
			this->tabPage7->Controls->Add(this->label26);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Padding = System::Windows::Forms::Padding(3);
			this->tabPage7->Size = System::Drawing::Size(662, 425);
			this->tabPage7->TabIndex = 7;
			this->tabPage7->Text = L"Remove Course";
			this->tabPage7->UseVisualStyleBackColor = true;
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(55, 104);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(32, 13);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Class";
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
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(52, 204);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(66, 13);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Date of Birth";
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
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(348, 155);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"Parent Gender";
			this->label12->Click += gcnew System::EventHandler(this, &DashBoard::label12_Click);
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
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(348, 204);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(87, 13);
			this->label14->TabIndex = 7;
			this->label14->Text = L"Parent Password";
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
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(153, 329);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 13);
			this->label16->TabIndex = 9;
			this->label16->Text = L"Captcha";
			// 
			// CaptchaLabel
			// 
			this->CaptchaLabel->AutoSize = true;
			this->CaptchaLabel->Location = System::Drawing::Point(316, 299);
			this->CaptchaLabel->Name = L"CaptchaLabel";
			this->CaptchaLabel->Size = System::Drawing::Size(41, 13);
			this->CaptchaLabel->TabIndex = 10;
			this->CaptchaLabel->Text = L"label17";
			// 
			// CancelButton
			// 
			this->CancelButton->Location = System::Drawing::Point(156, 372);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(75, 23);
			this->CancelButton->TabIndex = 11;
			this->CancelButton->Text = L"Cancel";
			this->CancelButton->UseVisualStyleBackColor = true;
			// 
			// StdConfirmButton
			// 
			this->StdConfirmButton->Location = System::Drawing::Point(433, 372);
			this->StdConfirmButton->Name = L"StdConfirmButton";
			this->StdConfirmButton->Size = System::Drawing::Size(75, 23);
			this->StdConfirmButton->TabIndex = 12;
			this->StdConfirmButton->Text = L"Confirm";
			this->StdConfirmButton->UseVisualStyleBackColor = true;
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
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(662, 425);
			this->tabPage3->TabIndex = 8;
			this->tabPage3->Text = L"Update Fees";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// StdNameBox
			// 
			this->StdNameBox->Location = System::Drawing::Point(156, 54);
			this->StdNameBox->Name = L"StdNameBox";
			this->StdNameBox->Size = System::Drawing::Size(172, 20);
			this->StdNameBox->TabIndex = 14;
			// 
			// StdPassTextBox
			// 
			this->StdPassTextBox->Location = System::Drawing::Point(156, 242);
			this->StdPassTextBox->Name = L"StdPassTextBox";
			this->StdPassTextBox->Size = System::Drawing::Size(172, 20);
			this->StdPassTextBox->TabIndex = 18;
			// 
			// CaptchaTextBox
			// 
			this->CaptchaTextBox->Location = System::Drawing::Point(228, 326);
			this->CaptchaTextBox->Name = L"CaptchaTextBox";
			this->CaptchaTextBox->Size = System::Drawing::Size(227, 20);
			this->CaptchaTextBox->TabIndex = 19;
			// 
			// PNametextBox
			// 
			this->PNametextBox->Location = System::Drawing::Point(445, 51);
			this->PNametextBox->Name = L"PNametextBox";
			this->PNametextBox->Size = System::Drawing::Size(195, 20);
			this->PNametextBox->TabIndex = 20;
			// 
			// PContacttextBox
			// 
			this->PContacttextBox->Location = System::Drawing::Point(445, 101);
			this->PContacttextBox->Name = L"PContacttextBox";
			this->PContacttextBox->Size = System::Drawing::Size(195, 20);
			this->PContacttextBox->TabIndex = 21;
			// 
			// PPassTextBox
			// 
			this->PPassTextBox->Location = System::Drawing::Point(445, 197);
			this->PPassTextBox->Name = L"PPassTextBox";
			this->PPassTextBox->Size = System::Drawing::Size(195, 20);
			this->PPassTextBox->TabIndex = 23;
			// 
			// FeesTextBox
			// 
			this->FeesTextBox->Location = System::Drawing::Point(465, 242);
			this->FeesTextBox->Name = L"FeesTextBox";
			this->FeesTextBox->Size = System::Drawing::Size(175, 20);
			this->FeesTextBox->TabIndex = 24;
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
			// ClassComboBox
			// 
			this->ClassComboBox->FormattingEnabled = true;
			this->ClassComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10"
			});
			this->ClassComboBox->Location = System::Drawing::Point(156, 96);
			this->ClassComboBox->Name = L"ClassComboBox";
			this->ClassComboBox->Size = System::Drawing::Size(172, 21);
			this->ClassComboBox->TabIndex = 26;
			// 
			// StdDOBdate
			// 
			this->StdDOBdate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->StdDOBdate->Location = System::Drawing::Point(156, 198);
			this->StdDOBdate->Name = L"StdDOBdate";
			this->StdDOBdate->Size = System::Drawing::Size(172, 20);
			this->StdDOBdate->TabIndex = 27;
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
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(449, 246);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(13, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"$";
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
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(83, 141);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(39, 13);
			this->label20->TabIndex = 1;
			this->label20->Text = L"Details";
			// 
			// CaptchaCourse
			// 
			this->CaptchaCourse->AutoSize = true;
			this->CaptchaCourse->Location = System::Drawing::Point(323, 223);
			this->CaptchaCourse->Name = L"CaptchaCourse";
			this->CaptchaCourse->Size = System::Drawing::Size(41, 13);
			this->CaptchaCourse->TabIndex = 4;
			this->CaptchaCourse->Text = L"label23";
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
			// CourseCancelbutton
			// 
			this->CourseCancelbutton->Location = System::Drawing::Point(131, 362);
			this->CourseCancelbutton->Name = L"CourseCancelbutton";
			this->CourseCancelbutton->Size = System::Drawing::Size(75, 23);
			this->CourseCancelbutton->TabIndex = 6;
			this->CourseCancelbutton->Text = L"Cancel";
			this->CourseCancelbutton->UseVisualStyleBackColor = true;
			// 
			// CourseConfirmbutton
			// 
			this->CourseConfirmbutton->Location = System::Drawing::Point(445, 362);
			this->CourseConfirmbutton->Name = L"CourseConfirmbutton";
			this->CourseConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->CourseConfirmbutton->TabIndex = 7;
			this->CourseConfirmbutton->Text = L"Confirm";
			this->CourseConfirmbutton->UseVisualStyleBackColor = true;
			// 
			// CourseNameBox
			// 
			this->CourseNameBox->Location = System::Drawing::Point(179, 71);
			this->CourseNameBox->Name = L"CourseNameBox";
			this->CourseNameBox->Size = System::Drawing::Size(290, 20);
			this->CourseNameBox->TabIndex = 8;
			// 
			// CourseDetailBox
			// 
			this->CourseDetailBox->Location = System::Drawing::Point(179, 134);
			this->CourseDetailBox->Name = L"CourseDetailBox";
			this->CourseDetailBox->Size = System::Drawing::Size(290, 20);
			this->CourseDetailBox->TabIndex = 9;
			// 
			// CourseCaptchBox
			// 
			this->CourseCaptchBox->Location = System::Drawing::Point(194, 267);
			this->CourseCaptchBox->Name = L"CourseCaptchBox";
			this->CourseCaptchBox->Size = System::Drawing::Size(275, 20);
			this->CourseCaptchBox->TabIndex = 10;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe Print", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(233, 3);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(319, 43);
			this->label21->TabIndex = 30;
			this->label21->Text = L"Registering New Student";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(172, 6);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(267, 37);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Registering New Course";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(278, 21);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(256, 36);
			this->label23->TabIndex = 0;
			this->label23->Text = L"Removing one Student";
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
			// RemStdCancelbutton
			// 
			this->RemStdCancelbutton->Location = System::Drawing::Point(164, 327);
			this->RemStdCancelbutton->Name = L"RemStdCancelbutton";
			this->RemStdCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemStdCancelbutton->TabIndex = 2;
			this->RemStdCancelbutton->Text = L"Cancel";
			this->RemStdCancelbutton->UseVisualStyleBackColor = true;
			// 
			// RemStdConfirmbutton
			// 
			this->RemStdConfirmbutton->Location = System::Drawing::Point(453, 331);
			this->RemStdConfirmbutton->Name = L"RemStdConfirmbutton";
			this->RemStdConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemStdConfirmbutton->TabIndex = 3;
			this->RemStdConfirmbutton->Text = L"Confirm";
			this->RemStdConfirmbutton->UseVisualStyleBackColor = true;
			// 
			// RemStdIDBox
			// 
			this->RemStdIDBox->Location = System::Drawing::Point(247, 141);
			this->RemStdIDBox->Name = L"RemStdIDBox";
			this->RemStdIDBox->Size = System::Drawing::Size(222, 20);
			this->RemStdIDBox->TabIndex = 4;
			// 
			// RemStdCaptchatextBox
			// 
			this->RemStdCaptchatextBox->Location = System::Drawing::Point(247, 278);
			this->RemStdCaptchatextBox->Name = L"RemStdCaptchatextBox";
			this->RemStdCaptchatextBox->Size = System::Drawing::Size(222, 20);
			this->RemStdCaptchatextBox->TabIndex = 5;
			// 
			// RemStdCptlabel
			// 
			this->RemStdCptlabel->AutoSize = true;
			this->RemStdCptlabel->Location = System::Drawing::Point(319, 228);
			this->RemStdCptlabel->Name = L"RemStdCptlabel";
			this->RemStdCptlabel->Size = System::Drawing::Size(41, 13);
			this->RemStdCptlabel->TabIndex = 6;
			this->RemStdCptlabel->Text = L"label26";
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
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(260, 31);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(247, 36);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Removing One Course";
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
			// RemCourseCaptlabel
			// 
			this->RemCourseCaptlabel->AutoSize = true;
			this->RemCourseCaptlabel->Location = System::Drawing::Point(295, 196);
			this->RemCourseCaptlabel->Name = L"RemCourseCaptlabel";
			this->RemCourseCaptlabel->Size = System::Drawing::Size(41, 13);
			this->RemCourseCaptlabel->TabIndex = 2;
			this->RemCourseCaptlabel->Text = L"label29";
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
			// RemCourseCancelbutton
			// 
			this->RemCourseCancelbutton->Location = System::Drawing::Point(137, 361);
			this->RemCourseCancelbutton->Name = L"RemCourseCancelbutton";
			this->RemCourseCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemCourseCancelbutton->TabIndex = 4;
			this->RemCourseCancelbutton->Text = L"Cancel";
			this->RemCourseCancelbutton->UseVisualStyleBackColor = true;
			// 
			// RemCourseConfirmbutton
			// 
			this->RemCourseConfirmbutton->Location = System::Drawing::Point(452, 361);
			this->RemCourseConfirmbutton->Name = L"RemCourseConfirmbutton";
			this->RemCourseConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemCourseConfirmbutton->TabIndex = 5;
			this->RemCourseConfirmbutton->Text = L"Confirm";
			this->RemCourseConfirmbutton->UseVisualStyleBackColor = true;
			// 
			// RemCourseIDBox
			// 
			this->RemCourseIDBox->Location = System::Drawing::Point(206, 107);
			this->RemCourseIDBox->Name = L"RemCourseIDBox";
			this->RemCourseIDBox->Size = System::Drawing::Size(263, 20);
			this->RemCourseIDBox->TabIndex = 6;
			// 
			// RemCourseCaptcBox
			// 
			this->RemCourseCaptcBox->Location = System::Drawing::Point(206, 280);
			this->RemCourseCaptcBox->Name = L"RemCourseCaptcBox";
			this->RemCourseCaptcBox->Size = System::Drawing::Size(263, 20);
			this->RemCourseCaptcBox->TabIndex = 7;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(239, 6);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(237, 36);
			this->label29->TabIndex = 0;
			this->label29->Text = L"Adding New Teacher";
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
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(105, 102);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(42, 13);
			this->label32->TabIndex = 2;
			this->label32->Text = L"Gender";
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
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(105, 206);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(71, 13);
			this->label34->TabIndex = 4;
			this->label34->Text = L"Course Name";
			this->label34->Click += gcnew System::EventHandler(this, &DashBoard::label34_Click);
			// 
			// AddTechCaptchaLabel
			// 
			this->AddTechCaptchaLabel->AutoSize = true;
			this->AddTechCaptchaLabel->Location = System::Drawing::Point(288, 274);
			this->AddTechCaptchaLabel->Name = L"AddTechCaptchaLabel";
			this->AddTechCaptchaLabel->Size = System::Drawing::Size(41, 13);
			this->AddTechCaptchaLabel->TabIndex = 5;
			this->AddTechCaptchaLabel->Text = L"label35";
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
			// AddTechCancelbutton
			// 
			this->AddTechCancelbutton->Location = System::Drawing::Point(163, 367);
			this->AddTechCancelbutton->Name = L"AddTechCancelbutton";
			this->AddTechCancelbutton->Size = System::Drawing::Size(75, 23);
			this->AddTechCancelbutton->TabIndex = 7;
			this->AddTechCancelbutton->Text = L"Cancel";
			this->AddTechCancelbutton->UseVisualStyleBackColor = true;
			// 
			// addTechConfbutton
			// 
			this->addTechConfbutton->Location = System::Drawing::Point(467, 367);
			this->addTechConfbutton->Name = L"addTechConfbutton";
			this->addTechConfbutton->Size = System::Drawing::Size(75, 23);
			this->addTechConfbutton->TabIndex = 8;
			this->addTechConfbutton->Text = L"Confirm";
			this->addTechConfbutton->UseVisualStyleBackColor = true;
			// 
			// AddTechNameBox
			// 
			this->AddTechNameBox->Location = System::Drawing::Point(199, 48);
			this->AddTechNameBox->Name = L"AddTechNameBox";
			this->AddTechNameBox->Size = System::Drawing::Size(327, 20);
			this->AddTechNameBox->TabIndex = 9;
			// 
			// AddTechPassBox
			// 
			this->AddTechPassBox->Location = System::Drawing::Point(199, 145);
			this->AddTechPassBox->Name = L"AddTechPassBox";
			this->AddTechPassBox->Size = System::Drawing::Size(327, 20);
			this->AddTechPassBox->TabIndex = 11;
			// 
			// AddTechCourseBox
			// 
			this->AddTechCourseBox->Location = System::Drawing::Point(199, 199);
			this->AddTechCourseBox->Name = L"AddTechCourseBox";
			this->AddTechCourseBox->Size = System::Drawing::Size(327, 20);
			this->AddTechCourseBox->TabIndex = 12;
			// 
			// AddTechCaptchBox
			// 
			this->AddTechCaptchBox->Location = System::Drawing::Point(199, 309);
			this->AddTechCaptchBox->Name = L"AddTechCaptchBox";
			this->AddTechCaptchBox->Size = System::Drawing::Size(327, 20);
			this->AddTechCaptchBox->TabIndex = 13;
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
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Segoe Print", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(221, 21);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(259, 36);
			this->label35->TabIndex = 0;
			this->label35->Text = L"Removing One Teacher";
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
			// RemTechCaptchlabel
			// 
			this->RemTechCaptchlabel->AutoSize = true;
			this->RemTechCaptchlabel->Location = System::Drawing::Point(328, 171);
			this->RemTechCaptchlabel->Name = L"RemTechCaptchlabel";
			this->RemTechCaptchlabel->Size = System::Drawing::Size(41, 13);
			this->RemTechCaptchlabel->TabIndex = 2;
			this->RemTechCaptchlabel->Text = L"label38";
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
			// RemTechCancelbutton
			// 
			this->RemTechCancelbutton->Location = System::Drawing::Point(168, 347);
			this->RemTechCancelbutton->Name = L"RemTechCancelbutton";
			this->RemTechCancelbutton->Size = System::Drawing::Size(75, 23);
			this->RemTechCancelbutton->TabIndex = 4;
			this->RemTechCancelbutton->Text = L"Cancel";
			this->RemTechCancelbutton->UseVisualStyleBackColor = true;
			// 
			// RemTechConfirmbutton
			// 
			this->RemTechConfirmbutton->Location = System::Drawing::Point(426, 347);
			this->RemTechConfirmbutton->Name = L"RemTechConfirmbutton";
			this->RemTechConfirmbutton->Size = System::Drawing::Size(75, 23);
			this->RemTechConfirmbutton->TabIndex = 5;
			this->RemTechConfirmbutton->Text = L"Confirm";
			this->RemTechConfirmbutton->UseVisualStyleBackColor = true;
			// 
			// RemTechIDBox
			// 
			this->RemTechIDBox->Location = System::Drawing::Point(225, 95);
			this->RemTechIDBox->Name = L"RemTechIDBox";
			this->RemTechIDBox->Size = System::Drawing::Size(244, 20);
			this->RemTechIDBox->TabIndex = 6;
			// 
			// RemTechCaptBox
			// 
			this->RemTechCaptBox->Location = System::Drawing::Point(225, 225);
			this->RemTechCaptBox->Name = L"RemTechCaptBox";
			this->RemTechCaptBox->Size = System::Drawing::Size(244, 20);
			this->RemTechCaptBox->TabIndex = 7;
			// 
			// DashBoard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(810, 499);
			this->Controls->Add(this->tabControl1);
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
			this->tabControl1->ResumeLayout(false);
			this->tab3->ResumeLayout(false);
			this->tab3->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->tabPage7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label34_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}

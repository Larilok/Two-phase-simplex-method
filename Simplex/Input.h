﻿#pragma once
#include "Matrix.h"
#include "answer.h"
#include "about.h"

namespace Simplex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
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
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^  VariablesNum;
	protected:

	protected:

	private: System::Windows::Forms::DataGridView^  restrictions_table;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::RadioButton^  rb1;
	private: System::Windows::Forms::RadioButton^  rb2;
	private: System::Windows::Forms::RadioButton^  rb3;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::NumericUpDown^  RestrictionsNum;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  targetFunction;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton3;

	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->VariablesNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->restrictions_table = (gcnew System::Windows::Forms::DataGridView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rb1 = (gcnew System::Windows::Forms::RadioButton());
			this->rb2 = (gcnew System::Windows::Forms::RadioButton());
			this->rb3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RestrictionsNum = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->targetFunction = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VariablesNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restrictions_table))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RestrictionsNum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->targetFunction))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// VariablesNum
			// 
			resources->ApplyResources(this->VariablesNum, L"VariablesNum");
			this->VariablesNum->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->VariablesNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->VariablesNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->VariablesNum->Name = L"VariablesNum";
			this->VariablesNum->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->VariablesNum->ValueChanged += gcnew System::EventHandler(this, &Input::VariablesNum_ValueChanged);
			// 
			// restrictions_table
			// 
			this->restrictions_table->AllowUserToAddRows = false;
			this->restrictions_table->AllowUserToDeleteRows = false;
			this->restrictions_table->AllowUserToResizeColumns = false;
			this->restrictions_table->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->restrictions_table->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->restrictions_table->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->restrictions_table, L"restrictions_table");
			this->restrictions_table->Name = L"restrictions_table";
			this->restrictions_table->RowHeadersVisible = false;
			this->restrictions_table->RowTemplate->Height = 28;
			this->restrictions_table->StandardTab = true;
			this->restrictions_table->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Input::restrictions_table_CellEnter);
			this->restrictions_table->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &Input::restrictions_table_CellValidating);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Input::button1_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->infoToolStripMenuItem });
			resources->ApplyResources(this->menuStrip1, L"menuStrip1");
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Input::menuStrip1_ItemClicked);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			resources->ApplyResources(this->infoToolStripMenuItem, L"infoToolStripMenuItem");
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			resources->ApplyResources(this->aboutToolStripMenuItem, L"aboutToolStripMenuItem");
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Input::aboutToolStripMenuItem_Click);
			// 
			// rb1
			// 
			resources->ApplyResources(this->rb1, L"rb1");
			this->rb1->Checked = true;
			this->rb1->Name = L"rb1";
			this->rb1->TabStop = true;
			this->rb1->UseVisualStyleBackColor = true;
			// 
			// rb2
			// 
			resources->ApplyResources(this->rb2, L"rb2");
			this->rb2->Name = L"rb2";
			this->rb2->UseVisualStyleBackColor = true;
			// 
			// rb3
			// 
			resources->ApplyResources(this->rb3, L"rb3");
			this->rb3->Name = L"rb3";
			this->rb3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Controls->Add(this->rb3);
			this->groupBox1->Controls->Add(this->rb2);
			this->groupBox1->Controls->Add(this->rb1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// RestrictionsNum
			// 
			resources->ApplyResources(this->RestrictionsNum, L"RestrictionsNum");
			this->RestrictionsNum->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->RestrictionsNum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->RestrictionsNum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RestrictionsNum->Name = L"RestrictionsNum";
			this->RestrictionsNum->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RestrictionsNum->ValueChanged += gcnew System::EventHandler(this, &Input::restrictionNum_ValueChanged);
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Input::label1_Click);
			// 
			// targetFunction
			// 
			this->targetFunction->AllowUserToAddRows = false;
			this->targetFunction->AllowUserToDeleteRows = false;
			this->targetFunction->AllowUserToResizeColumns = false;
			this->targetFunction->AllowUserToResizeRows = false;
			resources->ApplyResources(this->targetFunction, L"targetFunction");
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->targetFunction->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->targetFunction->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->targetFunction->Name = L"targetFunction";
			this->targetFunction->RowHeadersVisible = false;
			this->targetFunction->RowTemplate->Height = 28;
			this->targetFunction->StandardTab = true;
			this->targetFunction->CellEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Input::restrictions_table_CellEnter);
			this->targetFunction->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &Input::restrictions_table_CellValidating);
			// 
			// groupBox2
			// 
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// radioButton1
			// 
			resources->ApplyResources(this->radioButton1, L"radioButton1");
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			resources->ApplyResources(this->radioButton3, L"radioButton3");
			this->radioButton3->Checked = true;
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// Input
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->targetFunction);
			this->Controls->Add(this->restrictions_table);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RestrictionsNum);
			this->Controls->Add(this->VariablesNum);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Input";
			this->Load += gcnew System::EventHandler(this, &Input::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VariablesNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->restrictions_table))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RestrictionsNum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->targetFunction))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			restrictions_table->ColumnCount = 2; // начальное число столбцов и строк
			restrictions_table->RowCount = 1;
			for (int i = 0; i < restrictions_table->ColumnCount - 1; i++) {
				restrictions_table->Columns[i]->Name = "x(" + Convert::ToString(i + 1) + ")";
			}
			restrictions_table->Columns[restrictions_table->ColumnCount - 1]->Name = "b";

			restrictions_table->AutoResizeColumns();//выравнивание ячеек
			about^info = gcnew about();
			info->ShowDialog();
		}

		private: System::Void VariablesNum_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			restrictions_table->ColumnCount = Convert::ToInt32(VariablesNum->Value)+1; //изменяем размерность таблицы
			restrictions_table->RowCount = Convert::ToInt32(RestrictionsNum->Value);

			for (int i = 0; i < restrictions_table->ColumnCount-1; i++) {
				restrictions_table->Columns[i]->Name = "x("+ Convert::ToString(i+1)+")";
			}
			restrictions_table->Columns[restrictions_table->ColumnCount - 1]->Name = "b";
			restrictions_table->AutoResizeColumns();  //выравнивание ячеек
		}
		
		private: System::Void restrictionNum_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			restrictions_table->ColumnCount = Convert::ToInt32(VariablesNum->Value) + 1; //изменяем размерность таблицы
			restrictions_table->RowCount = Convert::ToInt32(VariablesNum->Value);

			for (int i = 0; i < restrictions_table->ColumnCount - 1; i++) {
				restrictions_table->Columns[i]->Name = "x(" + Convert::ToString(i + 1) + ")";
			}
			restrictions_table->Columns[restrictions_table->ColumnCount - 1]->Name = "b";
			restrictions_table->AutoResizeColumns();  //выравнивание ячеек
		}


		private: System::Void restrictions_table_CellEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			restrictions_table->AutoResizeColumns();
		}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Matrix m(restrictions_table->RowCount, restrictions_table->ColumnCount-1);
	m.copy(restrictions_table);

	if (rb1->Checked) {
		auto where = m.Gauss_solution();

		Answer^ans = gcnew Answer(m, where,rb1->Text);
		ans->Show();
	}

	if (rb2->Checked) {
		auto where = m.Jorge_Gauss_solution();

		Answer^ans = gcnew Answer(m, where,rb2->Text);
		ans->Show();
	}

	if (rb3->Checked) {
		auto where = m.Spinner_solution();

		Answer^ans = gcnew Answer(m, where,rb3->Text);
		ans->Show();
	}
}
private: System::Void restrictions_table_CellValidating(System::Object^  sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^  e) {
	DataGridView^ view = (DataGridView^)sender;
	//view->Rows[e->RowIndex]->ErrorText = " ";
	double newInteger;

	if (restrictions_table->Rows[e->RowIndex]->IsNewRow)
	{
		return;
	}
	if (!Double::TryParse(e->FormattedValue->ToString(),newInteger))
	{
		MessageBox::Show("Please, check your input");
		//view->Rows[e->RowIndex]->ErrorText = "the value must be a non-negative integer";
		e->Cancel = true;

	}

}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	about^info = gcnew about();
	info->ShowDialog();
}

private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

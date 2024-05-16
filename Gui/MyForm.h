#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <regex>
#include <msclr/marshal_cppstd.h>
#include <algorithm>
#include <cctype>



namespace Gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	using namespace System::Text::RegularExpressions;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ Input;
	private: System::Windows::Forms::Label^ label1;






	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox8;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox4;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DarkCyan;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(72, 11);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(534, 316);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DarkCyan;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(981, 8);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(385, 754);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// btn
			// 
			this->btn->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn->Location = System::Drawing::Point(71, 333);
			this->btn->Name = L"btn";
			this->btn->Size = System::Drawing::Size(160, 51);
			this->btn->TabIndex = 2;
			this->btn->Text = L"Implement";
			this->btn->UseVisualStyleBackColor = false;
			this->btn->Click += gcnew System::EventHandler(this, &MyForm::btn_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(237, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Clear All";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Input
			// 
			this->Input->AutoSize = true;
			this->Input->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->Input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Input->Location = System::Drawing::Point(12, 35);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(50, 20);
			this->Input->TabIndex = 4;
			this->Input->Text = L"Input";
			this->Input->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(910, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Output";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::MediumTurquoise;
			this->panel2->Location = System::Drawing::Point(693, 305);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(258, 57);
			this->panel2->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Calisto MT", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(696, 308);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(252, 51);
			this->textBox8->TabIndex = 5;
			this->textBox8->Text = L"Eng/ Fatma";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(71, 394);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(534, 51);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Syntax";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(387, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(218, 51);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Clear Outputs";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::DarkCyan;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox4->Location = System::Drawing::Point(71, 467);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(820, 303);
			this->textBox4->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1397, 787);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Input);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Calisto MT", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btn_Click(System::Object^ sender, System::EventArgs^ e) {
		// Retrieve the text from textBox1
		String^ textFromTextBox1 = textBox1->Text;

		// Split the input text into lines
		cli::array<String^>^ linesArray = textFromTextBox1->Split('\n');

		// Define regular expression patterns for identifier, arithmetic operator, assignment operator, comparison operator, and reserved words
		std::regex identifierPattern("^[a-zA-Z][a-zA-Z0-9]*$");
		std::regex numberPattern("^[0-9]*$");
		std::regex arithmeticOperatorPattern("[-*+\\/]");
		std::regex assignmentOperatorPattern(":=");
		std::regex comparisonOperatorPattern("[=<]");
		std::regex reservedWordsPattern("(if|then|else|end|repeat|until|read|write)");
		std::regex stringPattern("^\"[^\"]*\"$");
		std::regex semicolonPattern(";");
		std::regex commentPattern("\\{\\s*([^{}]*\\s*)*\\}");

		// Classify each token and build the result message
		String^ resultMessage = "";
		bool insideComment = false;
		for each (String ^ line in linesArray) {
			// Remove leading and trailing whitespace from the line
			line = line->Trim();
			// If the line is empty or inside a comment, skip to the next line
			if (line->Length == 0) {
				continue;
			}
			else {
				// Split the line into tokens based on spaces
				cli::array<String^>^ tokensArray = line->Split(' ');

				// Process each token in the line
				for each (String ^ token in tokensArray) {
					std::string tokenStr = msclr::interop::marshal_as<std::string>(token);


					// Check if the token is a reserved word
					if (std::regex_match(tokenStr, reservedWordsPattern)) {
						resultMessage += token + " --> Reserved Word" + Environment::NewLine;
					}
					// Check if the token is an arithmetic operator
					else if (std::regex_match(tokenStr, arithmeticOperatorPattern)) {
						resultMessage += token + " --> Arithmetic Operator" + Environment::NewLine;
					}
					// Check if the token is an assignment operator
					else if (std::regex_match(tokenStr, assignmentOperatorPattern)) {
						resultMessage += token + " --> Assignment Operator" + Environment::NewLine;
					}
					// Check if the token is a comparison operator
					else if (std::regex_match(tokenStr, comparisonOperatorPattern)) {
						resultMessage += token + " --> Comparison Operator" + Environment::NewLine;
					}
					// Check if the token is an identifier
					else if (std::regex_match(tokenStr, identifierPattern)) {
						resultMessage += token + " --> Identifier" + Environment::NewLine;
					}
					// Check if the token is an number
					else if (std::regex_match(tokenStr, numberPattern)) {
						resultMessage += token + " --> Number" + Environment::NewLine;
					}
					// Check if the token is an String
					else if (std::regex_match(tokenStr, stringPattern)) {
						resultMessage += token + " --> String" + Environment::NewLine;
					}
					// Check if the token is an semicolon
					else if (std::regex_match(tokenStr, semicolonPattern)) {
						resultMessage += token + " --> Semicolon" + Environment::NewLine;
					}
					// Check if the token is an identifier
					else if (std::regex_match(tokenStr, commentPattern)) {
						resultMessage += token + " --> Comment" + Environment::NewLine;
					}
					// If none of the above, it's an invalid token
					else {
						resultMessage += token + " --> Invalid Token" + Environment::NewLine;
					}
				}
			}

			// Display the result message in textBox2
			textBox2->Text = resultMessage;
		}

	}

	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";
		textBox2->Text = "";
		textBox4->Text = "";
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the code from the textBox1
	String^ code = textBox1->Text;

	// Call the SyntaxCode function to check syntax and get the result
	String^ syntax = SyntaxCode(code);

	// Display the syntax result in textBox4
	textBox4->Text = syntax;
}
	   // Initialize line numbers for different types of statements
	   String^ SyntaxCode(String^ code) {
		   int lineNumber = 1;
		   int lineNumber2 = 1;
		   int lineNumber3 = 1;
		   int lineNumber4 = 1;

		   // Define regular expressions to match different syntax patterns
		   regex patternComment("\\{[' ']*[0-9a-zA-Z]+[' '0-9a-zA-Z]*\\}");
		   regex patternAssignment("[a-zA-Z]+[0-9a-zA-Z]*[' ']*:=[' ']*[(]*[0-9a-zA-Z]+([+*/-]*[(]*[0-9a-zA-Z]*[)]*)*");
		   regex patternRead("read [' ']*[a-zA-Z]+[0-9a-zA-Z]*");
		   regex patternWrite("write [' ']*(([a-zA-Z]+[0-9a-zA-Z]*[' ']*)|(\"[0-9a-zA-Z]+[' '0-9a-zA-Z]*\"))");
		   regex patternIf("if [' ']*[0-9a-zA-Z][' ']*(<|=)[' ']*[0-9a-zA-Z] then");
		   regex patternUntil("until [' ']*[0-9a-zA-Z][' ']*(<|=)[' ']*[0-9a-zA-Z]");
		   // Split the code by newline characters ('\n')
		   cli::array<String^>^ lines = code->Split(gcnew cli::array<Char>{'\n'});

		   // Iterate through the split lines
		   for each (String ^ line in lines) {
			   // Trim the line to remove leading/trailing whitespace
			   String^ trimmedLine = line->Trim();
			   if (!trimmedLine->EndsWith(";") && !regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternIf) && trimmedLine != "end" && trimmedLine != "repeat" && !regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternComment)) {
				   return "Syntax Error at line [" + lineNumber + "]: " + "Missing Semicolon ;";
			   }
			   //remove Semicolon
			   if (trimmedLine->EndsWith(";"))
			   {
				   trimmedLine = trimmedLine->Remove(trimmedLine->Length - 1);
			   }
			   if (trimmedLine != "") {
				   if (trimmedLine->EndsWith("+") || trimmedLine->EndsWith("-") || trimmedLine->EndsWith("*") || trimmedLine->EndsWith("/")) {
					   return "Syntax Error at line [" + lineNumber + "]: " + trimmedLine;
				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternAssignment)) {
				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternRead)) {
					   ;
				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternWrite)) {
				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternIf)) {
					   bool endFound = false;
					   for each (String ^ line in lines) {
						   String^ trimmedLine = line->Trim();
						   if (trimmedLine == "end") {
							   endFound = true;
							   continue;
						   }
						   lineNumber2++;
					   }
					   if (!endFound) {
						   return "Syntax Error at line [" + lineNumber2 + "]: 'end' statement not found";
					   }
				   }
				   else if (trimmedLine == "repeat") {
					   bool untilFound = false;
					   for each (String ^ line in lines) {
						   String^ trimmedLine = line->Trim();
						   if (trimmedLine->StartsWith("until")) {
							   untilFound = true;
							   continue;
						   }
						   lineNumber3++;
					   }
					   if (!untilFound) {
						   return "Syntax Error at line [" + lineNumber3 + "]: 'until' statement not found";
					   }
				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternComment))
				   {

				   }
				   else if (regex_match(msclr::interop::marshal_as<string>(trimmedLine), patternUntil)) {
					   bool repeatFound = false;
					   for each (String ^ line in lines) {
						   String^ trimmedLine = line->Trim();
						   if (trimmedLine == "repeat") {
							   repeatFound = true;
							   continue;
						   }
						   lineNumber4++;
					   }
					   if (!repeatFound) {
						   return "Syntax Error at line [" + lineNumber4 + "]: 'repeat' statement not found";
					   }
				   }
				   else if (trimmedLine == "end") {
				   }
				   else {
					   return "Syntax Error at line [" + lineNumber + "]: " + trimmedLine;
				   }
				   lineNumber++;
			   }
		   }
	   }

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = "";
	textBox4->Text = "";
}
};
}

#pragma once

namespace TorqueCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	enum TorqueCalcStates
	{
		SELECT_GEAR_TYPE = 1,
		CALCULATE_GEAR,
		CALCULATE_COMP_GEAR
	};

	enum GearTypes
	{
		TRAIN_GEAR,
		COMPOUND_GEAR
	};
	/// <summary>
	/// Resumen de TorqueCalculator
	/// </summary>
	public ref class TorqueCalculator : public System::Windows::Forms::Form
	{
	public:
		TorqueCalculator(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			this->CancelButton->Hide();
			this->gearsPictureBox->Hide();
			this->inputGearGroup->Hide();
			this->middleGearGroup->Hide();
			this->outputGearGroup->Hide();
		}

		unsigned calcRatio(unsigned input_gear_teeth_number, unsigned output_gear_teeth_number) {
			return output_gear_teeth_number / input_gear_teeth_number;
		}

		unsigned calcOutputRPM(unsigned input_RPM, unsigned ratio) {
			return input_RPM / ratio;
		}

		float calcOutputTorque(float input_torque, unsigned ratio) {
			return input_torque * ratio;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TorqueCalculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ StepTittle;
	private: System::Windows::Forms::Label^ StepDescription;
	private: System::Windows::Forms::RadioButton^ GearTrainOption;
	private: System::Windows::Forms::RadioButton^ CompGearTrainOption;
	private: System::Windows::Forms::Button^ ConfirmButton;
	private: System::Windows::Forms::Button^ CancelButton;
	private: System::Windows::Forms::PictureBox^ gearsPictureBox;

	private:
		int currentCalculatorState = SELECT_GEAR_TYPE;
		int selectedGearType = TRAIN_GEAR;
	private: System::Windows::Forms::TextBox^ inputGearRPM;
	private: System::Windows::Forms::TextBox^ inputGearTorque;
	private: System::Windows::Forms::Label^ inputGearTeethLabel;
	private: System::Windows::Forms::Label^ inputGearRPMLabel;
	private: System::Windows::Forms::Label^ inputGearTorqueLabel;
	private: System::Windows::Forms::GroupBox^ inputGearGroup;











	private: System::Windows::Forms::NumericUpDown^ inputGearTeeth;
	private: System::Windows::Forms::GroupBox^ outputGearGroup;


	private: System::Windows::Forms::NumericUpDown^ outputGearTeeth;


	private: System::Windows::Forms::Label^ outputGearTorqueLabel;
	private: System::Windows::Forms::TextBox^ outputGearRPM;


	private: System::Windows::Forms::Label^ outputGearRPMLabel;
	private: System::Windows::Forms::TextBox^ outputGearTorque;


	private: System::Windows::Forms::Label^ outputGearTeethLabel;
	private: System::Windows::Forms::GroupBox^ middleGearGroup;
	private: System::Windows::Forms::NumericUpDown^ midGearTeeth1;


	private: System::Windows::Forms::Label^ midGearTorqueLabel;
	private: System::Windows::Forms::TextBox^ midGearRPM;


	private: System::Windows::Forms::Label^ midGearRPMLabel;
	private: System::Windows::Forms::TextBox^ midGearTorque;


	private: System::Windows::Forms::Label^ midGearTeethLabel1;
	private: System::Windows::Forms::NumericUpDown^ midGearTeeth2;


	private: System::Windows::Forms::Label^ midGearTeethLabel2;



	protected:





	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TorqueCalculator::typeid));
			this->StepTittle = (gcnew System::Windows::Forms::Label());
			this->StepDescription = (gcnew System::Windows::Forms::Label());
			this->GearTrainOption = (gcnew System::Windows::Forms::RadioButton());
			this->CompGearTrainOption = (gcnew System::Windows::Forms::RadioButton());
			this->ConfirmButton = (gcnew System::Windows::Forms::Button());
			this->CancelButton = (gcnew System::Windows::Forms::Button());
			this->gearsPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->inputGearRPM = (gcnew System::Windows::Forms::TextBox());
			this->inputGearTorque = (gcnew System::Windows::Forms::TextBox());
			this->inputGearTeethLabel = (gcnew System::Windows::Forms::Label());
			this->inputGearRPMLabel = (gcnew System::Windows::Forms::Label());
			this->inputGearTorqueLabel = (gcnew System::Windows::Forms::Label());
			this->inputGearGroup = (gcnew System::Windows::Forms::GroupBox());
			this->inputGearTeeth = (gcnew System::Windows::Forms::NumericUpDown());
			this->outputGearGroup = (gcnew System::Windows::Forms::GroupBox());
			this->outputGearTeeth = (gcnew System::Windows::Forms::NumericUpDown());
			this->outputGearTorqueLabel = (gcnew System::Windows::Forms::Label());
			this->outputGearRPM = (gcnew System::Windows::Forms::TextBox());
			this->outputGearRPMLabel = (gcnew System::Windows::Forms::Label());
			this->outputGearTorque = (gcnew System::Windows::Forms::TextBox());
			this->outputGearTeethLabel = (gcnew System::Windows::Forms::Label());
			this->middleGearGroup = (gcnew System::Windows::Forms::GroupBox());
			this->midGearTeeth2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->midGearTeethLabel2 = (gcnew System::Windows::Forms::Label());
			this->midGearTeeth1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->midGearTorqueLabel = (gcnew System::Windows::Forms::Label());
			this->midGearRPM = (gcnew System::Windows::Forms::TextBox());
			this->midGearRPMLabel = (gcnew System::Windows::Forms::Label());
			this->midGearTorque = (gcnew System::Windows::Forms::TextBox());
			this->midGearTeethLabel1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gearsPictureBox))->BeginInit();
			this->inputGearGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inputGearTeeth))->BeginInit();
			this->outputGearGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputGearTeeth))->BeginInit();
			this->middleGearGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->midGearTeeth2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->midGearTeeth1))->BeginInit();
			this->SuspendLayout();
			// 
			// StepTittle
			// 
			this->StepTittle->AutoSize = true;
			this->StepTittle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StepTittle->Location = System::Drawing::Point(31, 37);
			this->StepTittle->Name = L"StepTittle";
			this->StepTittle->Size = System::Drawing::Size(113, 20);
			this->StepTittle->TabIndex = 0;
			this->StepTittle->Text = L"Type of Gear";
			// 
			// StepDescription
			// 
			this->StepDescription->AutoSize = true;
			this->StepDescription->Location = System::Drawing::Point(35, 78);
			this->StepDescription->Name = L"StepDescription";
			this->StepDescription->Size = System::Drawing::Size(222, 13);
			this->StepDescription->TabIndex = 1;
			this->StepDescription->Text = L"Select the type of gear you need to calculate:";
			// 
			// GearTrainOption
			// 
			this->GearTrainOption->AutoSize = true;
			this->GearTrainOption->Checked = true;
			this->GearTrainOption->Location = System::Drawing::Point(56, 122);
			this->GearTrainOption->Name = L"GearTrainOption";
			this->GearTrainOption->Size = System::Drawing::Size(75, 17);
			this->GearTrainOption->TabIndex = 2;
			this->GearTrainOption->TabStop = true;
			this->GearTrainOption->Text = L"Gear Train";
			this->GearTrainOption->UseVisualStyleBackColor = true;
			this->GearTrainOption->Click += gcnew System::EventHandler(this, &TorqueCalculator::GearTrainOption_Click);
			// 
			// CompGearTrainOption
			// 
			this->CompGearTrainOption->AutoSize = true;
			this->CompGearTrainOption->Location = System::Drawing::Point(56, 146);
			this->CompGearTrainOption->Name = L"CompGearTrainOption";
			this->CompGearTrainOption->Size = System::Drawing::Size(129, 17);
			this->CompGearTrainOption->TabIndex = 3;
			this->CompGearTrainOption->TabStop = true;
			this->CompGearTrainOption->Text = L"Compound Gear Train";
			this->CompGearTrainOption->UseVisualStyleBackColor = true;
			this->CompGearTrainOption->Click += gcnew System::EventHandler(this, &TorqueCalculator::CompGearTrainOption_Click);
			// 
			// ConfirmButton
			// 
			this->ConfirmButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->ConfirmButton->Location = System::Drawing::Point(253, 263);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(94, 23);
			this->ConfirmButton->TabIndex = 4;
			this->ConfirmButton->Text = L"Next";
			this->ConfirmButton->UseVisualStyleBackColor = true;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &TorqueCalculator::ConfirmButton_Click);
			// 
			// CancelButton
			// 
			this->CancelButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->CancelButton->Location = System::Drawing::Point(144, 263);
			this->CancelButton->Name = L"CancelButton";
			this->CancelButton->Size = System::Drawing::Size(94, 23);
			this->CancelButton->TabIndex = 5;
			this->CancelButton->Text = L"Back";
			this->CancelButton->UseVisualStyleBackColor = true;
			this->CancelButton->Click += gcnew System::EventHandler(this, &TorqueCalculator::CancelButton_Click);
			// 
			// gearsPictureBox
			// 
			this->gearsPictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gearsPictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gearsPictureBox.Image")));
			this->gearsPictureBox->Location = System::Drawing::Point(309, 78);
			this->gearsPictureBox->Margin = System::Windows::Forms::Padding(10);
			this->gearsPictureBox->MaximumSize = System::Drawing::Size(247, 163);
			this->gearsPictureBox->MinimumSize = System::Drawing::Size(247, 163);
			this->gearsPictureBox->Name = L"gearsPictureBox";
			this->gearsPictureBox->Size = System::Drawing::Size(247, 163);
			this->gearsPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->gearsPictureBox->TabIndex = 6;
			this->gearsPictureBox->TabStop = false;
			// 
			// inputGearRPM
			// 
			this->inputGearRPM->Location = System::Drawing::Point(89, 43);
			this->inputGearRPM->Name = L"inputGearRPM";
			this->inputGearRPM->Size = System::Drawing::Size(39, 20);
			this->inputGearRPM->TabIndex = 7;
			this->inputGearRPM->Text = L"0";
			this->inputGearRPM->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// inputGearTorque
			// 
			this->inputGearTorque->Location = System::Drawing::Point(159, 43);
			this->inputGearTorque->Name = L"inputGearTorque";
			this->inputGearTorque->Size = System::Drawing::Size(39, 20);
			this->inputGearTorque->TabIndex = 8;
			this->inputGearTorque->Text = L"0";
			this->inputGearTorque->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// inputGearTeethLabel
			// 
			this->inputGearTeethLabel->AutoSize = true;
			this->inputGearTeethLabel->Location = System::Drawing::Point(16, 24);
			this->inputGearTeethLabel->Name = L"inputGearTeethLabel";
			this->inputGearTeethLabel->Size = System::Drawing::Size(52, 13);
			this->inputGearTeethLabel->TabIndex = 10;
			this->inputGearTeethLabel->Text = L"No Teeth";
			// 
			// inputGearRPMLabel
			// 
			this->inputGearRPMLabel->AutoSize = true;
			this->inputGearRPMLabel->Location = System::Drawing::Point(86, 24);
			this->inputGearRPMLabel->Name = L"inputGearRPMLabel";
			this->inputGearRPMLabel->Size = System::Drawing::Size(31, 13);
			this->inputGearRPMLabel->TabIndex = 11;
			this->inputGearRPMLabel->Text = L"RPM";
			// 
			// inputGearTorqueLabel
			// 
			this->inputGearTorqueLabel->AutoSize = true;
			this->inputGearTorqueLabel->Location = System::Drawing::Point(144, 24);
			this->inputGearTorqueLabel->Name = L"inputGearTorqueLabel";
			this->inputGearTorqueLabel->Size = System::Drawing::Size(69, 13);
			this->inputGearTorqueLabel->TabIndex = 12;
			this->inputGearTorqueLabel->Text = L"Torque (N.m)";
			// 
			// inputGearGroup
			// 
			this->inputGearGroup->Controls->Add(this->inputGearTeeth);
			this->inputGearGroup->Controls->Add(this->inputGearTorqueLabel);
			this->inputGearGroup->Controls->Add(this->inputGearRPM);
			this->inputGearGroup->Controls->Add(this->inputGearRPMLabel);
			this->inputGearGroup->Controls->Add(this->inputGearTorque);
			this->inputGearGroup->Controls->Add(this->inputGearTeethLabel);
			this->inputGearGroup->ForeColor = System::Drawing::SystemColors::ControlText;
			this->inputGearGroup->Location = System::Drawing::Point(35, 104);
			this->inputGearGroup->Name = L"inputGearGroup";
			this->inputGearGroup->Size = System::Drawing::Size(251, 73);
			this->inputGearGroup->TabIndex = 13;
			this->inputGearGroup->TabStop = false;
			this->inputGearGroup->Text = L"Input Gear";
			// 
			// inputGearTeeth
			// 
			this->inputGearTeeth->Location = System::Drawing::Point(19, 43);
			this->inputGearTeeth->Name = L"inputGearTeeth";
			this->inputGearTeeth->Size = System::Drawing::Size(41, 20);
			this->inputGearTeeth->TabIndex = 13;
			this->inputGearTeeth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outputGearGroup
			// 
			this->outputGearGroup->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->outputGearGroup->Controls->Add(this->outputGearTeeth);
			this->outputGearGroup->Controls->Add(this->outputGearTorqueLabel);
			this->outputGearGroup->Controls->Add(this->outputGearRPM);
			this->outputGearGroup->Controls->Add(this->outputGearRPMLabel);
			this->outputGearGroup->Controls->Add(this->outputGearTorque);
			this->outputGearGroup->Controls->Add(this->outputGearTeethLabel);
			this->outputGearGroup->ForeColor = System::Drawing::SystemColors::ControlText;
			this->outputGearGroup->Location = System::Drawing::Point(35, 184);
			this->outputGearGroup->Name = L"outputGearGroup";
			this->outputGearGroup->Size = System::Drawing::Size(251, 73);
			this->outputGearGroup->TabIndex = 14;
			this->outputGearGroup->TabStop = false;
			this->outputGearGroup->Text = L"Output Gear";
			// 
			// outputGearTeeth
			// 
			this->outputGearTeeth->Location = System::Drawing::Point(19, 43);
			this->outputGearTeeth->Name = L"outputGearTeeth";
			this->outputGearTeeth->Size = System::Drawing::Size(41, 20);
			this->outputGearTeeth->TabIndex = 15;
			this->outputGearTeeth->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outputGearTorqueLabel
			// 
			this->outputGearTorqueLabel->AutoSize = true;
			this->outputGearTorqueLabel->Location = System::Drawing::Point(144, 24);
			this->outputGearTorqueLabel->Name = L"outputGearTorqueLabel";
			this->outputGearTorqueLabel->Size = System::Drawing::Size(69, 13);
			this->outputGearTorqueLabel->TabIndex = 12;
			this->outputGearTorqueLabel->Text = L"Torque (N.m)";
			// 
			// outputGearRPM
			// 
			this->outputGearRPM->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->outputGearRPM->Location = System::Drawing::Point(89, 43);
			this->outputGearRPM->Name = L"outputGearRPM";
			this->outputGearRPM->ReadOnly = true;
			this->outputGearRPM->Size = System::Drawing::Size(39, 20);
			this->outputGearRPM->TabIndex = 7;
			this->outputGearRPM->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outputGearRPMLabel
			// 
			this->outputGearRPMLabel->AutoSize = true;
			this->outputGearRPMLabel->Location = System::Drawing::Point(86, 24);
			this->outputGearRPMLabel->Name = L"outputGearRPMLabel";
			this->outputGearRPMLabel->Size = System::Drawing::Size(31, 13);
			this->outputGearRPMLabel->TabIndex = 11;
			this->outputGearRPMLabel->Text = L"RPM";
			// 
			// outputGearTorque
			// 
			this->outputGearTorque->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->outputGearTorque->Location = System::Drawing::Point(159, 43);
			this->outputGearTorque->Name = L"outputGearTorque";
			this->outputGearTorque->ReadOnly = true;
			this->outputGearTorque->Size = System::Drawing::Size(39, 20);
			this->outputGearTorque->TabIndex = 8;
			this->outputGearTorque->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// outputGearTeethLabel
			// 
			this->outputGearTeethLabel->AutoSize = true;
			this->outputGearTeethLabel->Location = System::Drawing::Point(16, 24);
			this->outputGearTeethLabel->Name = L"outputGearTeethLabel";
			this->outputGearTeethLabel->Size = System::Drawing::Size(52, 13);
			this->outputGearTeethLabel->TabIndex = 10;
			this->outputGearTeethLabel->Text = L"No Teeth";
			// 
			// middleGearGroup
			// 
			this->middleGearGroup->Controls->Add(this->midGearTeeth2);
			this->middleGearGroup->Controls->Add(this->midGearTeethLabel2);
			this->middleGearGroup->Controls->Add(this->midGearTeeth1);
			this->middleGearGroup->Controls->Add(this->midGearTorqueLabel);
			this->middleGearGroup->Controls->Add(this->midGearRPM);
			this->middleGearGroup->Controls->Add(this->midGearRPMLabel);
			this->middleGearGroup->Controls->Add(this->midGearTorque);
			this->middleGearGroup->Controls->Add(this->midGearTeethLabel1);
			this->middleGearGroup->ForeColor = System::Drawing::SystemColors::ControlText;
			this->middleGearGroup->Location = System::Drawing::Point(35, 186);
			this->middleGearGroup->Name = L"middleGearGroup";
			this->middleGearGroup->Size = System::Drawing::Size(251, 73);
			this->middleGearGroup->TabIndex = 15;
			this->middleGearGroup->TabStop = false;
			this->middleGearGroup->Text = L"Middle Gear";
			// 
			// midGearTeeth2
			// 
			this->midGearTeeth2->Location = System::Drawing::Point(74, 43);
			this->midGearTeeth2->Name = L"midGearTeeth2";
			this->midGearTeeth2->Size = System::Drawing::Size(41, 20);
			this->midGearTeeth2->TabIndex = 17;
			this->midGearTeeth2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// midGearTeethLabel2
			// 
			this->midGearTeethLabel2->AutoSize = true;
			this->midGearTeethLabel2->Location = System::Drawing::Point(67, 24);
			this->midGearTeethLabel2->Name = L"midGearTeethLabel2";
			this->midGearTeethLabel2->Size = System::Drawing::Size(61, 13);
			this->midGearTeethLabel2->TabIndex = 16;
			this->midGearTeethLabel2->Text = L"No Teeth 2";
			// 
			// midGearTeeth1
			// 
			this->midGearTeeth1->Location = System::Drawing::Point(13, 43);
			this->midGearTeeth1->Name = L"midGearTeeth1";
			this->midGearTeeth1->Size = System::Drawing::Size(41, 20);
			this->midGearTeeth1->TabIndex = 15;
			this->midGearTeeth1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// midGearTorqueLabel
			// 
			this->midGearTorqueLabel->AutoSize = true;
			this->midGearTorqueLabel->Location = System::Drawing::Point(174, 24);
			this->midGearTorqueLabel->Name = L"midGearTorqueLabel";
			this->midGearTorqueLabel->Size = System::Drawing::Size(69, 13);
			this->midGearTorqueLabel->TabIndex = 12;
			this->midGearTorqueLabel->Text = L"Torque (N.m)";
			// 
			// midGearRPM
			// 
			this->midGearRPM->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->midGearRPM->Location = System::Drawing::Point(131, 43);
			this->midGearRPM->Name = L"midGearRPM";
			this->midGearRPM->ReadOnly = true;
			this->midGearRPM->Size = System::Drawing::Size(39, 20);
			this->midGearRPM->TabIndex = 7;
			this->midGearRPM->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// midGearRPMLabel
			// 
			this->midGearRPMLabel->AutoSize = true;
			this->midGearRPMLabel->Location = System::Drawing::Point(134, 24);
			this->midGearRPMLabel->Name = L"midGearRPMLabel";
			this->midGearRPMLabel->Size = System::Drawing::Size(31, 13);
			this->midGearRPMLabel->TabIndex = 11;
			this->midGearRPMLabel->Text = L"RPM";
			// 
			// midGearTorque
			// 
			this->midGearTorque->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->midGearTorque->Location = System::Drawing::Point(189, 43);
			this->midGearTorque->Name = L"midGearTorque";
			this->midGearTorque->ReadOnly = true;
			this->midGearTorque->Size = System::Drawing::Size(39, 20);
			this->midGearTorque->TabIndex = 8;
			this->midGearTorque->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// midGearTeethLabel1
			// 
			this->midGearTeethLabel1->AutoSize = true;
			this->midGearTeethLabel1->Location = System::Drawing::Point(5, 24);
			this->midGearTeethLabel1->Name = L"midGearTeethLabel1";
			this->midGearTeethLabel1->Size = System::Drawing::Size(61, 13);
			this->midGearTeethLabel1->TabIndex = 10;
			this->midGearTeethLabel1->Text = L"No Teeth 1";
			// 
			// TorqueCalculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(375, 311);
			this->Controls->Add(this->middleGearGroup);
			this->Controls->Add(this->outputGearGroup);
			this->Controls->Add(this->inputGearGroup);
			this->Controls->Add(this->gearsPictureBox);
			this->Controls->Add(this->CancelButton);
			this->Controls->Add(this->ConfirmButton);
			this->Controls->Add(this->CompGearTrainOption);
			this->Controls->Add(this->GearTrainOption);
			this->Controls->Add(this->StepDescription);
			this->Controls->Add(this->StepTittle);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(391, 350);
			this->MinimumSize = System::Drawing::Size(391, 350);
			this->Name = L"TorqueCalculator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Torque Calculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->gearsPictureBox))->EndInit();
			this->inputGearGroup->ResumeLayout(false);
			this->inputGearGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->inputGearTeeth))->EndInit();
			this->outputGearGroup->ResumeLayout(false);
			this->outputGearGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputGearTeeth))->EndInit();
			this->middleGearGroup->ResumeLayout(false);
			this->middleGearGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->midGearTeeth2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->midGearTeeth1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (this->ConfirmButton->Text == L"Next") {
			
			try
			{
				this->gearsPictureBox->Image = this->selectedGearType == TRAIN_GEAR ? Image::FromFile("imgs/train_gear.JPG") : Image::FromFile("imgs/compound_gear.JPG");
			}
			catch (System::IO::FileNotFoundException^ e)
			{
				
				MessageBox::Show("Image not found\n" + e->Message);
				return;
			}

			int torqueCalculatorHeight = this->selectedGearType == TRAIN_GEAR ? 350 : 434;

			this->MaximumSize = System::Drawing::Size(591, torqueCalculatorHeight);
			this->MinimumSize = System::Drawing::Size(591, torqueCalculatorHeight);
			this->currentCalculatorState = this->selectedGearType == TRAIN_GEAR ? CALCULATE_GEAR : CALCULATE_COMP_GEAR;
			this->StepTittle->Text = this->selectedGearType == TRAIN_GEAR ? L"Train Gear Calculator" : L"Compound Gear Calculator";
			//this->gearsPictureBox->Width = this->selectedGearType == TRAIN_GEAR ? this->gearsPictureBox->MinimumSize.Width : this->gearsPictureBox->MaximumSize.Width;
			//this->gearsPictureBox->Height = this->selectedGearType == TRAIN_GEAR ? this->gearsPictureBox->MinimumSize.Height : this->gearsPictureBox->MaximumSize.Height;
			
			
			this->StepDescription->Text = L"Set the calculation parameters:";
			this->ConfirmButton->Text = L"CALCULATE";

			if (this->selectedGearType == COMPOUND_GEAR)
				this->middleGearGroup->Show();

			this->inputGearGroup->Show();
			this->outputGearGroup->Show();
			this->GearTrainOption->Hide();
			this->CompGearTrainOption->Hide();
			this->CancelButton->Show();
			this->gearsPictureBox->Show();
		}
		//Torque Calculations
		else {
			unsigned inputGearTeeth = Convert::ToInt32(this->inputGearTeeth->Text);
			unsigned inputGearRPM = Convert::ToUInt32(this->inputGearRPM->Text);
			unsigned inputGearTorque = Convert::ToUInt32(this->inputGearTorque->Text);

			if (this->selectedGearType == TRAIN_GEAR) {
				
				unsigned ouputGearTeeth = Convert::ToInt32(this->outputGearTeeth->Text);
				unsigned ratio = this->calcRatio(inputGearTeeth, ouputGearTeeth);
				
				this->outputGearRPM->Text = Convert::ToString(this->calcOutputRPM(inputGearRPM, ratio));
				this->outputGearTorque->Text = Convert::ToString(this->calcOutputTorque(inputGearTorque, ratio));
				
			}
			else if (this->selectedGearType == COMPOUND_GEAR) {
				//TODO: Compound Gear train calculations
			}
		}
		
	}
	private: System::Void CancelButton_Click(System::Object^ sender, System::EventArgs^ e) {

		this->StepTittle->Text = L"Type of Gear";
		this->StepDescription->Text = L"Select the type of gear you need to calculate:";
		this->ConfirmButton->Text = L"Next";

		this->MaximumSize = System::Drawing::Size(391, 350);
		this->MinimumSize = System::Drawing::Size(391, 350);

		this->inputGearGroup->Hide();
		this->middleGearGroup->Hide();
		this->outputGearGroup->Hide();
		this->CancelButton->Hide();
		this->gearsPictureBox->Hide();
		this->GearTrainOption->Show();
		this->CompGearTrainOption->Show();
	}

	private: System::Void CompGearTrainOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->selectedGearType = COMPOUND_GEAR;
	}

	private: System::Void GearTrainOption_Click(System::Object^ sender, System::EventArgs^ e) {
		this->selectedGearType = TRAIN_GEAR;
	}



};
}

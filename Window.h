#pragma once
#include <Windows.h>
#pragma comment(lib, "winmm.lib") 

namespace Paint {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Window
	/// </summary>



	public ref class Window : public System::Windows::Forms::Form
	{
	public:
    Point p1, p2;
  private: System::Windows::Forms::Button^ button2;
  private: System::Windows::Forms::Button^ button3;
  private: System::Windows::Forms::Button^ button4;
  private: System::Windows::Forms::Button^ button5;
  private: System::Windows::Forms::Button^ button6;
  private: System::Windows::Forms::Button^ button7;
  private: System::Windows::Forms::Button^ button8;
  public:
  private: System::Windows::Forms::Button^ button1;
  public:
    Window(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
      list = gcnew ArrayList();
      Rectlist = gcnew ArrayList();
      Circlelist = gcnew ArrayList();
      Penlist = gcnew ArrayList();
      Gumlist = gcnew ArrayList();

      font1 = gcnew System::Drawing::Font("Verdana", 8, FontStyle::Regular, GraphicsUnit::Millimeter);
      /*for (int w = 0; 2 < 545; w++) {
        for (int k = 0; k < 338; k++) {
          Okno[w, k] = 0;
        }
      }*/
      Okno = { 0 };
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Window()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Drawing::Font^ font1;
  private: System::Windows::Forms::Panel^ panel1;
  protected:

	private:
    int* Okno = new int[545 * 338];
    ArrayList^ list;
    ArrayList^ Rectlist;
    ArrayList^ Circlelist;
    ArrayList^ Penlist;
    ArrayList^ Gumlist;
    
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;



    ref struct Line

    {

      Point p1;

      Point p2;

      Pen^ penn;

    };


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
      this->panel1 = (gcnew System::Windows::Forms::Panel());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->button2 = (gcnew System::Windows::Forms::Button());
      this->button3 = (gcnew System::Windows::Forms::Button());
      this->button4 = (gcnew System::Windows::Forms::Button());
      this->button5 = (gcnew System::Windows::Forms::Button());
      this->button6 = (gcnew System::Windows::Forms::Button());
      this->button7 = (gcnew System::Windows::Forms::Button());
      this->button8 = (gcnew System::Windows::Forms::Button());
      this->SuspendLayout();
      // 
      // panel1
      // 
      this->panel1->BackColor = System::Drawing::SystemColors::Info;
      this->panel1->Location = System::Drawing::Point(12, 101);
      this->panel1->Name = L"panel1";
      this->panel1->Size = System::Drawing::Size(545, 338);
      this->panel1->TabIndex = 0;
      this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Window::panel1_Paint);
      this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Window::panel1_MouseDown);
      this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Window::panel1_MouseMove);
      this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Window::panel1_MouseUp);
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(12, 12);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(88, 30);
      this->button1->TabIndex = 1;
      this->button1->Text = L"Line";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &Window::button1_Click);
      // 
      // button2
      // 
      this->button2->Location = System::Drawing::Point(14, 48);
      this->button2->Name = L"button2";
      this->button2->Size = System::Drawing::Size(85, 28);
      this->button2->TabIndex = 2;
      this->button2->Text = L"Rectangle";
      this->button2->UseVisualStyleBackColor = true;
      this->button2->Click += gcnew System::EventHandler(this, &Window::button2_Click);
      // 
      // button3
      // 
      this->button3->Location = System::Drawing::Point(106, 12);
      this->button3->Name = L"button3";
      this->button3->Size = System::Drawing::Size(76, 30);
      this->button3->TabIndex = 3;
      this->button3->Text = L"Circle";
      this->button3->UseVisualStyleBackColor = true;
      this->button3->Click += gcnew System::EventHandler(this, &Window::button3_Click);
      // 
      // button4
      // 
      this->button4->Location = System::Drawing::Point(265, 12);
      this->button4->Name = L"button4";
      this->button4->Size = System::Drawing::Size(89, 30);
      this->button4->TabIndex = 4;
      this->button4->Text = L"Red";
      this->button4->UseVisualStyleBackColor = true;
      this->button4->Click += gcnew System::EventHandler(this, &Window::button4_Click);
      // 
      // button5
      // 
      this->button5->Location = System::Drawing::Point(360, 12);
      this->button5->Name = L"button5";
      this->button5->Size = System::Drawing::Size(89, 30);
      this->button5->TabIndex = 5;
      this->button5->Text = L"Green";
      this->button5->UseVisualStyleBackColor = true;
      this->button5->Click += gcnew System::EventHandler(this, &Window::button5_Click);
      // 
      // button6
      // 
      this->button6->Location = System::Drawing::Point(455, 12);
      this->button6->Name = L"button6";
      this->button6->Size = System::Drawing::Size(89, 30);
      this->button6->TabIndex = 6;
      this->button6->Text = L"Blue";
      this->button6->UseVisualStyleBackColor = true;
      this->button6->Click += gcnew System::EventHandler(this, &Window::button6_Click);
      // 
      // button7
      // 
      this->button7->Location = System::Drawing::Point(106, 48);
      this->button7->Name = L"button7";
      this->button7->Size = System::Drawing::Size(75, 28);
      this->button7->TabIndex = 7;
      this->button7->Text = L"Eraser";
      this->button7->UseVisualStyleBackColor = true;
      this->button7->Click += gcnew System::EventHandler(this, &Window::button7_Click);
      // 
      // button8
      // 
      this->button8->Location = System::Drawing::Point(189, 14);
      this->button8->Name = L"button8";
      this->button8->Size = System::Drawing::Size(65, 27);
      this->button8->TabIndex = 8;
      this->button8->Text = L"Pen";
      this->button8->UseVisualStyleBackColor = true;
      this->button8->Click += gcnew System::EventHandler(this, &Window::button8_Click);
      // 
      // Window
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(569, 451);
      this->Controls->Add(this->button8);
      this->Controls->Add(this->button7);
      this->Controls->Add(this->button6);
      this->Controls->Add(this->button5);
      this->Controls->Add(this->button4);
      this->Controls->Add(this->button3);
      this->Controls->Add(this->button2);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->panel1);
      this->Name = L"Window";
      this->Text = L"Window";
      this->ResumeLayout(false);

    }
#pragma endregion
    Graphics^ g;

  private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
  //g = e->Graphics;

  //  //make the image become High Quality  
  //  g->SmoothingMode = Drawing2D::SmoothingMode::HighQuality;

  //  //fill an ellipse with  
  //  // White color  
  //  // start position = (10, 10)
  //  // (start position is always Top Left of the object)  
  //  // width = 75 px, height = 50 px  
  //  //g->FillEllipse(Brushes::White, mouseMoveX, mouseMoveY, 75, 50);

  //  //create an ellipse with  
  //  // Black color  
  //  // start position = (10, 10)
  //  // (start position is always Top Left of the object)  
  //  // width = 75 px, height = 50 px  
  //  g->DrawEllipse(Pens::Black, 10, 10, 75, 50);

  //  //fill a circle with  
  //  // Yellow color  
  //  // start position = (90, 10)  
  //  // diameter = 75 px  
  //  g->FillEllipse(Brushes::Yellow, 90, 10, 75, 75);

  //  //create an ellipse with  
  //  // Red color  
  //  // start postion = (90, 10)  
  //  // width = 75 px, height = 75 px  
  //  //or you can say create a circle with  
  //  // Red color  
  //  // start position = (90, 10)  
  //  // diameter = 75 px  
  //  g->DrawEllipse(Pens::Red, 90, 10, 75, 75);

  //  //fill a rectangle with  
  //  // Pink color  
  //  // start position = (170, 10)  
  //  // width = 75, height = 75  
  //  g->FillRectangle(Brushes::Pink, 170, 10, 75, 75);

  //  //create a rectangle with  
  //  // Blue color  
  //  // start position = (170, 10)  
  //  // width = 75, height = 75  
  //  g->DrawRectangle(Pens::Blue, 302, 44, 75, 75);

    Graphics^ gr = e->Graphics;

  



    // Count member - Used to get the number of elements actually

    // contained in the ArrayList.

    for (int i = 0; i < list->Count; i++)

    {

      Line^ pline = dynamic_cast<Line^>(list->default[i]);

      gr->DrawLine(pline->penn, pline->p1.X, pline->p1.Y, pline->p2.X, pline->p2.Y);

    }
    for (int i = 0; i < Rectlist->Count; i++)

    {


      Line^ pline = dynamic_cast<Line^>(Rectlist->default[i]);

      gr->DrawRectangle(pline->penn, pline->p1.X, pline->p1.Y, pline->p2.X, pline->p2.Y);

    }
    for (int i = 0; i < Circlelist->Count; i++)

    {

      Line^ pline = dynamic_cast<Line^>(Circlelist->default[i]);

      gr->DrawEllipse(pline->penn, pline->p1.X, pline->p1.Y, pline->p2.X, pline->p2.Y);

    }
    for (int i = 0; i < Penlist->Count; i++)

    {

      Line^ pline = dynamic_cast<Line^>(Penlist->default[i]);

      gr->DrawEllipse(pline->penn, pline->p1.X, pline->p1.Y, 1, 1);

    }

    for (int i = 0; i < Gumlist->Count; i++)

    {

      Line^ pline = dynamic_cast<Line^>(Gumlist->default[i]);

      gr->FillRectangle(Brushes::White, pline->p1.X, pline->p1.Y, 20,20);
  

    }

  }
   
         int mouseMoveXup;
         int mouseMoveYup;
         int mouseMoveXdown;
         int mouseMoveYdown;


private: System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
  p1.X = e->X;
  Graphics^ gr = panel1->CreateGraphics();
  p1.Y = e->Y;
  klik = true;
 
}
       Graphics^ gr;
       Pen^ pen1;
private: System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

 gr = panel1->CreateGraphics();
 pen1 = gcnew Pen(Color::Black);
  if(Red)
  pen1 = gcnew Pen(Color::Red);
  if(Green)
   pen1 = gcnew Pen(Color::Green);
  if(Blue)
  pen1 = gcnew Pen(Color::Blue);

  if (e->Button == ::Paint::MouseButtons::Left)

  {

    // Draw lines

    p2.X = e->X;

    p2.Y = e->Y;

    int ax = 0;
    int ay = 0;
    int bx = 0;
    int by = 0;
    if (p1.X > p2.X)
      bx = p1.X - p2.X;
    else
    bx = p2.X - p1.X;
    if (p1.Y > p2.Y)
      by = p1.Y - p2.Y;
    else
      by = p2.Y - p1.Y;



    if (Pencil) { gr->DrawLine(pen1, p1.X, p1.Y, p2.X, p2.Y);
    Line^ pl = gcnew Line();

    pl->p1 = p1;

    pl->p2 = p2;
    pl->penn = pen1;
    list->Add(pl);
    };
   if (Rect) {
     gr->DrawRectangle(pen1, p1.X, p1.Y,bx, by);
    /* for (int w = 0; w < bx; w++) {
       Okno[p1.X + w, p1.Y] = { 1 };
       Okno[p1.X + w, p2.Y] = { 1 };
   }
     for (int h = 0; h < by; h++) {
       Okno[p1.X, p1.Y + h] = { 1 };
       Okno[p2.X, p1.Y + h] = { 1 };
     }*/

     Point px;
     px.X = bx;
     px.Y = by;
     Line^ pl = gcnew Line();

     pl->p1 = p1;

     pl->p2 = px;
     pl->penn = pen1;
     Rectlist->Add(pl);
     
   
   
   }
   if (Circle) {
     gr->DrawEllipse(pen1, p1.X, p1.Y, bx, by);
     Point px;
     px.X = bx;
     px.Y = by;
     Line^ pl = gcnew Line();

     pl->p1 = p1;

     pl->p2 = px;

     pl->penn = pen1;

     Circlelist->Add(pl);
   }


   klik = false;

    // Add a new line to the list

  

  }



  else if (e->Button == ::Paint::MouseButtons::Right)

  {

    // Draw text

    gr->DrawString(L"Paintt", font1, Brushes::Black, (float)e->X, (float)e->Y);

  }

  delete gr;
}
       bool Pencil = true;
       bool Rect = false;
       bool Circle = false;
       bool Mazak = false;

       bool str = false;

       bool Red = false;
       bool Green = false;
       bool Blue = false;

       bool klik = false;

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
  str = false;
  Rect = false;
  Circle = false;
  Mazak = false;
  Pencil = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
  Pencil = false;
  Rect = true;
  Circle = false;
  Mazak = false;
  str = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
  Circle = true;
  Pencil = false;
  Rect = false;
  Mazak = false;
  str = false;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
  Red = true;
  Green = false;
  Blue = false;
  PlaySound((LPCWSTR)"../sounds/win.wav", nullptr, SND_ASYNC | SND_FILENAME);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
  Red = false;
  Green = true;
  Blue = false;
  PlaySound((LPCWSTR)"../sounds/win.wav", nullptr, SND_ASYNC | SND_FILENAME);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
  Red = false;
  Green = false;
  Blue = true;
  PlaySound((LPCWSTR)"../sounds/win.wav", nullptr, SND_ASYNC | SND_FILENAME);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
  Mazak = true;
  Pencil = false;
  Rect = false;
  Circle = false;
  str = false;
}
private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
  Graphics^ gr = panel1->CreateGraphics();
  Pen^ pen1 = gcnew Pen(Color::Black);
  if (Red)
    pen1 = gcnew Pen(Color::Red);
  if (Green)
    pen1 = gcnew Pen(Color::Green);
  if (Blue)
    pen1 = gcnew Pen(Color::Blue);
  if (Mazak && klik) {
    Point one;
    one.X = e->X;
    one.Y = e->Y;
    gr->FillRectangle(Brushes::White, e->X, e->Y, 20, 20);
    Line^ pl = gcnew Line();

    pl->p1 = one;

    pl->p2 = p2;
    pl->penn = pen1;
    Gumlist->Add(pl);
  }
  if (str && klik) {
    Point one;
    one.X = e->X;
    one.Y = e->Y;
    gr->DrawEllipse(pen1, e->X, e->Y, 1, 1);
    Line^ pl = gcnew Line();

    pl->p1 = one;

    pl->p2 = p2;
    pl->penn = pen1;
    Penlist->Add(pl);
  }
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
  Circle = false;
  Pencil = false;
  Rect = false;
  Mazak = false;
  str = true;
}
};
}

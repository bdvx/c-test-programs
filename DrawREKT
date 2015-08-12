// ConsoleApplication6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"
//свои типы
typedef unsigned short int USHORT;
enum COLOR {RED=20,WHITE, BLACK, YELLOW};
const auto pi=3.14159;
//тест program  

void PrintMessage(char *buffer);

class Func
{
public:
	Func();
	~Func();
	Func(int initAge);
	void print();
	int GetI() const;
private:
	USHORT i;
	
};
class Rectangle
	{public:
	Rectangle(int itsHeight,int itsWidth);
	int GetHeight() const{return height;}
	int GetWidth() const{return width;}
	void SetSize(int NewHeight,int NewWidth);
	private:
	int height;
	int width;
	};
Func::Func()
	{i=123;
	}

Func::~Func()
	{
	}

Func::Func(int initAge)
	{
	 i=initAge;
	}

int Func::GetI() const
	{return i;
	}

void Func::print()//just printing string
	{
	std::cout<<"func"<<std::endl;
	}


Rectangle::Rectangle(int itsHeight,int itsWidth)
{height=itsHeight;
	width=itsWidth;
}
void Rectangle::SetSize(int NewHeight,int NewWidth)
{
	height=NewHeight;
	width=NewWidth;
}

//setting functions below classes
int Menu();
void DrawREKT(Rectangle);
void DoDrawArea(Rectangle);
void DoGetPerimeter(Rectangle);
//defining functions
int _tmain(int argc, _TCHAR* argv[])
	{Rectangle firstRect(30,5);
		USHORT dd=123;
   /*printing buffer
   char *buffer = "default message";
    while (true)
    {
        getchar();
        PrintMessage(buffer);
    }*/

	Func FIRST(90);
	Func SECOND;
	FIRST.print();
	std::cout<<"123"<<dd<<RED<<WHITE<<BLACK<<YELLOW<<FIRST.GetI()<<SECOND.GetI()<<std::endl;//test output
	
	int choice=1;
	int fQuit=false;
	while(!fQuit)
	{
	choice=Menu();
	if (choice<1 || choice>5)
		{
	std::cout<<"TY INVALID.Please try again"<<std::endl;
		}
	switch(choice)
		{
	case 1:
		DrawREKT(firstRect);
		break;
	case 2:
		DoDrawArea(firstRect);
		break;
	case 3:
		DoGetPerimeter(firstRect);
		break;
	case 4:
		int settingHeight, settingWidth;
		std::cout<<"Enter Height \n";
		std::cin>>settingHeight;
		std::cout<<"Enter Width \n";
		std::cin>>settingWidth;
		firstRect.SetSize(settingHeight, settingWidth);
		break;
	case 5:
		fQuit=true;
		std::cout<<"\n Exiting \n";
		break;
	default:
		std::cout<<"U ARE INVALID,TRY AGAIN \n";
		fQuit=true;
		break;
		}
	}
	
	
	return 0;

}

//setting functions below classes


int Menu(){
	int choice;
	std::cout<<"Menu"<<std::endl;
	std::cout<<"1-Draw REKT"<<std::endl;
	std::cout<<"2-Count Area"<<std::endl;
	std::cout<<"3-Count Perimeter"<<std::endl;
	std::cout<<"4-Resize"<<std::endl;
	std::cout<<"5-Quit"<<std::endl;
	std::cin>>choice;
	return choice;
};

void DrawREKT(Rectangle firstRect)
	{ int height=firstRect.GetHeight();
	  int width=firstRect.GetWidth();
	  for(int i=0;i<height;i++)
		{for(int j=0;j<width;j++)
			{std::cout<<"*";}
	         std::cout<<"\n";
	    }
	}

void DoDrawArea(Rectangle firstRect)
{std::cout<<"Area: "<<firstRect.GetHeight()*firstRect.GetWidth()<<std::endl;}

void DoGetPerimeter(Rectangle firstRect)
{std::cout<<"Area: "<<2*firstRect.GetHeight()+2*firstRect.GetWidth()<<std::endl;}


/* printing buffer function
void PrintMessage(char *buffer)
{
    printf("%s", buffer);
} */

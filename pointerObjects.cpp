// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "iostream"
typedef unsigned short int USHORT;


class Twitter
{public:
Twitter();
Twitter (int r);
int GetTwit() const {return tweet;}
 void SetTwit(int t){tweet=t;}
private:
	int tweet;

};

Twitter::Twitter(){
	tweet=7;
};
Twitter::Twitter (int r):tweet(6){};

int _tmain(int argc, _TCHAR* argv[])
{ const int * a = 0;
Twitter  AnotherTweetClientAgain(1);
Twitter * const  TweetBot=new Twitter;
const Twitter * AnotherTweetClient= new Twitter;
TweetBot->SetTwit(5);
//AnotherTweetClient->SetTwit(10); недопустимая строка
std::cout<<TweetBot->GetTwit()<<std::endl;
std::cout<<AnotherTweetClient->GetTwit()<<std::endl;
std::cout<<AnotherTweetClientAgain.GetTwit()<<std::endl;


	return 0;
}
//Header files include declaration types of functions
#include <iostream>
#include "Log.h"
using namespace std;


void Log(const char* msg)
{
	cout << msg << endl;
}


int main()
{
	//Log("Hello dog");
	InitLog();
	cin.get();
}
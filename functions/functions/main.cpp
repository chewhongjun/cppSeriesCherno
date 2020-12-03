#include <iostream>

using namespace std;

int Multiply(int a, int b)
{
	return a * b;
}

void MultipleAndLog(int a, int b)
{
	cout << a*b << endl;
}

int main()
{
	//cout<<Multiply(5, 10)<<endl;
	MultipleAndLog(1, 2);
	MultipleAndLog(9, 2);
	MultipleAndLog(21, 24);
}
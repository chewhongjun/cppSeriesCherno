#include <iostream>;

using namespace std;

int main() 
{
	/*
	* 1 byte - 8 bits
	* first is value, second is size of data type in bytes
	*/

	//INTEGERS
	int ii = 1;
	cout << ii << endl<< sizeof(ii)  << endl;

	//DOUBLES
	double jj = 1.f;
	double ji = 1.5;
	cout << jj << endl << sizeof(jj) << endl;
	cout << ji << endl << sizeof(ji) << endl;

	//CHARACTERS
	// CHAR type stores single character, bounded by single quotes
	char ll = 'a';
	cout << ll << endl << sizeof(ll) << endl;

	//STRING
	// stores text bounded by ""
	string mm = "Hello World";
	cout << mm << endl << sizeof(mm) << endl;

	//BOOL
	bool tt = 1;
	cout << tt << endl << sizeof(tt) << endl;
}
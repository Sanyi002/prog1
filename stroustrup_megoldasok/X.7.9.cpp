#include <iostream>

using namespace std;

// bool, char, short, int, long, long long, float, double, long double, unsigned, unsigned long

int main()
{
	cout << "A bool mérete: " << sizeof(bool) << endl;
	cout << "A char mérete: " << sizeof(char) << endl;
	cout << "A short mérete: " << sizeof(short) << endl;	
	cout << "Az int mérete: " << sizeof(int) << endl;
	cout << "A long mérete: " << sizeof(long) << endl;
	cout << "A long long mérete: " << sizeof(long long) << endl;
	cout << "A float mérete: " << sizeof(float) << endl;
	cout << "A double mérete: " << sizeof(double) << endl;
	cout << "A long double mérete: " << sizeof(long double) << endl;
	cout << "Az unsigned mérete: " << sizeof(unsigned) << endl;
	cout << "Az unsigned long mérete: " << sizeof(unsigned long) << endl;

	return 0;
}
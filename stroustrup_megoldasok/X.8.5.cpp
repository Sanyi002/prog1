#include <iostream>

using namespace std;

int main()
{
	int buf[100];

	int* p1 = &buf[43];
	int* p2 = &buf[60];

	if( p1 == p2 ){
		cout << "Hiba: a két pointer ugyanoda mutat." << endl;
		return 1;
	}
	else{
		cout << "A két pointer közötti távolság: " << p2 - p1 << endl;
	}

	return 0;
}
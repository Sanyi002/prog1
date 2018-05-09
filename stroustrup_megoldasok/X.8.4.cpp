#include <iostream>

using namespace std;

int main()
{
	char buf[100];

	char* p1 = &buf[2];
	char* p2 = &buf[83];

	if( p1 == p2 ){
		cout << "Hiba: a két pointer ugyanoda mutat." << endl;
		return 1;
	}
	else{
		cout << "A két pointer közötti távolság: " << p2 - p1 << endl;
	}

	return 0;
}
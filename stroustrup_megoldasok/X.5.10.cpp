#include <iostream>
#include <fstream>

using namespace std;

const int N = 500;

int main()
{
	char data[N];

	ifstream infile; 
   	infile.open("szamok.txt");    	

	if( infile.is_open() ){
		while( !infile.eof() ){
			infile >> data;
			cout << data << " ";	
		}
		cout << "\n";
	}

	infile.close();

	return 0;
}
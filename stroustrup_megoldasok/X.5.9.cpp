#include <iostream>
#include <fstream>

using namespace std;

const int N = 500;

int main()
{
	std::ofstream outfile;
	outfile.open("szamok.txt", ios::out);

	for( int i = 0; i < N; i++ )
		outfile << i + 1 << " ";

	outfile.close();

	return 0;
}
#include <iostream>
#include <limits>

using namespace std;

int main()
{
	if( numeric_limits<char>::is_signed == true )
		cout << "signed" << endl;
	else
		cout << "unsigned" << endl;

	return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	std::vector<int> vec;

	int Number1 = 5;
	int Number2 = 9;
	int Number3 = -1;
	int Number4 =  200;
	int Number5 =  0;

	vec.push_back(Number1);
	vec.push_back(Number2);
	vec.push_back(Number3);
	vec.push_back(Number4);
	vec.push_back(Number5);

	for ( int i = 0; i < vec.size(); i++) 
            cout << vec[i] << "\n";

	std::sort(vec.begin(), vec.end());

	cout << "\n";
	for ( int i = 0; i < vec.size(); i++) 
            cout << vec[i] << "\n";

	return 0;
}
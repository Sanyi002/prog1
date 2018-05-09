#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

	std::vector<string> vec;

	string Item1 = "Kanto";
	string Item2 = "Plato";
	string Item3 = "Aristotle";
	string Item4 = "Kierkegard";
	string Item5 = "Hume";

	vec.push_back(Item1);
	vec.push_back(Item2);
	vec.push_back(Item3);
	vec.push_back(Item4);
	vec.push_back(Item5);

	for ( int i = 0; i < vec.size(); i++) 
            cout << vec[i] << "\n";

	std::sort(vec.begin(), vec.end());

	cout << "\n";
	for ( int i = 0; i < vec.size(); i++) 
            cout << vec[i] << "\n";

	return 0;
}
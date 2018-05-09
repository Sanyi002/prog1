#include <iostream>

using namespace std;

class person
{
	public:
		string name;
		int age;

	friend ostream& operator<<(ostream& os, person& p);
	friend istream& operator>>(istream& is, person& p);
};

istream& operator>> (istream& is, person& p)
{
    is >> p.name;
    is >> p.age;
    return is;
}

ostream& operator<< (ostream& os, person& p)
{
    os << p.name << " " << p.age;
    return os;
}



int main()
{
	const int N = 5;
	person p[N];
	for( int i = 0; i < N; i++ )
		cin >> p[i];
	for( int i = 0; i < N; i++ )
		cout << p[i] << endl;

	return 0;
}
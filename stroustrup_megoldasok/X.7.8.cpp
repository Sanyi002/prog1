#include <iostream>
#include <limits>

// bool, char, short, int, long, long long, float, double, long double, unsigned and unsigned long

int main()
{
	std::cout << "A BOOL típus minimális értéke a rendszeren: " << std::numeric_limits<bool>::min() << "\n";
	std::cout << "A BOOL típus maximális értéke a rendszeren: " << std::numeric_limits<bool>::max() << "\n";
	std::cout << "A CHAR típus minimális értéke a rendszeren: " << std::numeric_limits<char>::min() << "\n";
	std::cout << "A CHAR típus maximális értéke a rendszeren: " << std::numeric_limits<char>::max() << "\n";
	std::cout << "A SHORT típus minimális értéke a rendszeren: " << std::numeric_limits<short>::min() << "\n";
	std::cout << "A SHORT típus maximális értéke a rendszeren: " << std::numeric_limits<short>::max() << "\n";
	std::cout << "Az INT típus minimális értéke a rendszeren: " << std::numeric_limits<int>::min() << "\n";
	std::cout << "Az INT típus maximális értéke a rendszeren: " << std::numeric_limits<int>::max() << "\n";
	std::cout << "A LONG típus minimális értéke a rendszeren: " << std::numeric_limits<long>::min() << "\n";
	std::cout << "A LONG típus maximális értéke a rendszeren: " << std::numeric_limits<long>::max() << "\n";
	std::cout << "A LONG LONG típus minimális értéke a rendszeren: " << std::numeric_limits<long long>::min() << "\n";
	std::cout << "A LONG LONG típus maximális értéke a rendszeren: " << std::numeric_limits<long long>::max() << "\n";
	std::cout << "A FLOAT típus minimális értéke a rendszeren: " << std::numeric_limits<float>::min() << "\n";
	std::cout << "A FLOAT típus maximális értéke a rendszeren: " << std::numeric_limits<float>::max() << "\n";
	std::cout << "A DOUBLE típus minimális értéke a rendszeren: " << std::numeric_limits<double>::min() << "\n";
	std::cout << "A DOUBLE típus maximális értéke a rendszeren: " << std::numeric_limits<double>::max() << "\n";
	std::cout << "A LONG DOUBLE típus minimális értéke a rendszeren: " << std::numeric_limits<long double>::min() << "\n";
	std::cout << "A LONG DOUBLE típus maximális értéke a rendszeren: " << std::numeric_limits<long double>::max() << "\n";
	std::cout << "Az UNSIGNED típus minimális értéke a rendszeren: " << std::numeric_limits<unsigned>::min() << "\n";
	std::cout << "Az UNSIGNED típus maximális értéke a rendszeren: " << std::numeric_limits<unsigned>::max() << "\n";
	std::cout << "Az UNSIGNED LONG típus minimális értéke a rendszeren: " << std::numeric_limits<unsigned long>::min() << "\n";
	std::cout << "Az UNSIGNED LONG típus maximális értéke a rendszeren: " << std::numeric_limits<unsigned long>::max() << "\n";

	return 0;
}
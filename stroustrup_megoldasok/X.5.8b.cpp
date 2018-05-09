/*
  Ez a megoldás iterátor segítségével megy végig az std::vector-on, illetve C++11
  stílusú inicializációt használ az std::vector inicializálásához.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<std::string> vec = {"Kanto", "Plato", "Aristotle", "Kierkegard", "Hume"};

	for (std::vector<std::string>::iterator i = vec.begin(); i != vec.end(); ++i) 
            std::cout << *i << std::endl;

	std::sort(vec.begin(), vec.end());

	std::cout << "Rendezve:" << std::endl;
	
	for (std::vector<std::string>::iterator i = vec.begin(); i != vec.end(); ++i) 
            std::cout << *i << std::endl;

	return 0;
}

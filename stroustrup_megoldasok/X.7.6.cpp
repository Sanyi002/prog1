#include <iostream>

int main()
{

enum enumt { a, b, c, d, e };

std::cout << "bool erteke: " << sizeof(bool) << std::endl;
std::cout << "signed char erteke: " << sizeof(signed char) << std::endl;
std::cout << "unsigned char erteke: " << sizeof(unsigned char) << std::endl;
std::cout << "signed short erteke: " << sizeof(signed short) << std::endl;
std::cout << "unsigned short erteke: " << sizeof(unsigned short) << std::endl;
std::cout << "signed int erteke: " << sizeof(signed int) << std::endl;
std::cout << "unsigned int erteke: " << sizeof(unsigned int) << std::endl;
std::cout << "signed long erteke: " << sizeof(signed long) << std::endl;
std::cout << "unsigned long erteke: " << sizeof(unsigned long) << std::endl;
std::cout << "signed long long erteke: " << sizeof(signed long long) << std::endl;
std::cout << "unsigned long long erteke: " << sizeof(signed long long) << std::endl;
std::cout << "float erteke: " << sizeof(float) << std::endl;
std::cout << "double erteke: " << sizeof(double) << std::endl;
std::cout << "long double erteke: " << sizeof(long double) << std::endl;
std::cout << "char * = " << sizeof(char *) << std::endl;
std::cout << "int * = " << sizeof(int *) << std::endl;

std::cout << "enum = " << sizeof(enumt) << std::endl;


return 0;

}

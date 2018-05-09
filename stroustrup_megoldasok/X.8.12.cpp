#include <iostream>
#include <unistd.h>
#include <string>

void compareChar(char *myArr, char *mySecArr);
int main()
{
	char mychar[] = "xabaacbaxabb";
	char letters[2];
	compareChar(mychar, letters);

	std::cin.ignore(2);
	return 0;
}
void compareChar(char *myArr, char *mySecArr)
{
	int count = 0;
	std::cout << "Enter two letters to be compaired with the char string 'xabaacbaxabb'" << std::endl;
	std::cin >> mySecArr;

	while(strlen(mySecArr) != 2)
	{
		std::cout << "Wrong amount of letters, try again!" << std::endl;
		std::cin >> mySecArr;
	}
	for (int i = 0; myArr[i] != 0; i++)
	{
		if((myArr[i] == mySecArr[0]) && (myArr[i+1] == mySecArr[1]))
			count++;
	}
	std::cout << "The pair '" << mySecArr << "' appears " << count << " time(s) in " << myArr << "." << std::endl;
}

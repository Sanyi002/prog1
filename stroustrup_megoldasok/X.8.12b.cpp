/*
  Ez a megoldás jobban ragaszkodik a Stroustrup könyv eredeti feladatához, hogy keressük meg
  egy karakterpár előfordulásainak számát ugyanazt a karaktersorozatot tartalmazó std::string-ben
  és C stílusú sztringben.
*/

#include <iostream>
#include <string>

int occurrencesCppString(std::string text, char *pair) {
  int pos = -1, num = 0;
  
  while ((pos = text.find(pair, pos + 1)) != std::string::npos) {
    num++;
  }
  
  return num;
}

int occurrencesCString(char *text, char *pair) {
  int num = 0;

  do
  {
    if ((*text == pair[0]) && (*(text+1) == pair[1])) {
      num++;
    } 
  } while ((1 + *text++) != 0);

  return num;
}

int main() {
  char input_c[100];
  char pair[3];

  std::cout << "Adjon meg egy karaktersorozatot:" << std::endl;
  std::cin >> input_c;

  std::string input_cpp(input_c);

  std::cout << "Adjon meg egy karakterpárt:" << std::endl;
  std::cin >> pair;
  
  int i = occurrencesCppString(input_cpp, pair);
  int j = occurrencesCString(input_c, pair);

  std::cout << "A karakterpár előfordulásainak száma a karaktersorozatban: " << i
            << " illetve " << j << std::endl;

  return 0;
}



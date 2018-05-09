#include <iostream>
using namespace std;

int main(){
char karakter;

for(karakter = 'a'; karakter <= 'z'; karakter++)  //csak a-tól z-ig
        cout << karakter << ":  " << (int)karakter << hex << " 0x" << (int)karakter << dec << endl;

for(karakter = '0'; karakter <= '9'; karakter++) //csak 0-tól 9-ig.
        cout << karakter << ":  " << (int)karakter << hex << " 0x" << (int)karakter << dec << endl;
 
}

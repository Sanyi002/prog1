#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    int word=0, line=0, letter=0, digit=0, special=0, sum;
    ifstream in("szoveg.txt");
    char current;
    while(in.get(current))
    {
        if(current==' '||current=='\n'||current=='\t')
            word++;
        if(current=='\n')
            line++;
        if(isalpha(current))
            letter++;
        if(isdigit(current))
            digit++;
        if(ispunct(current))
            special++;
    }
    sum=letter+digit+special;
    cout<<" Ebben a file-ban van\n"<<line<<" sor\n"<<word<<" szo\n"<<letter<<" betu\n"<<digit<<" szamjegy\n"<< special<<" specialis karakter\n"<<"Osszesen: "<<sum<<endl;

}

#include <iostream>
#include <string>
#include <algorithm>

#define N 100

int main()
{
    std::string szo[N];
    std::string tomb[N];

    int szoSzamlalo = 0;

    for( ; ; )
    {
        std::cout << "Írj be egy szót: \n";
        std::cin >> szo[szoSzamlalo];
        
        if( szo[szoSzamlalo] == "quit" )
        {  
            break;
            return 1;
        }
        
        ++szoSzamlalo;
    } 

    int tombSzamlalo = 0;

    for( int i = 0; i < szoSzamlalo; i++ )
    {                          
        bool talalat = false;   
        
        for ( int j = 0; j < tombSzamlalo; j++ )
        {
            if ( tomb[j] == szo[i] )
            {
                talalat = true;
                break;
            }
        }
        
        if ( !talalat )
        {
            tomb[tombSzamlalo] = szo[i];
            ++tombSzamlalo;
        }
    }

    sort( tomb, tomb + tombSzamlalo );

    for( int i = 0; i < tombSzamlalo; i++ )
    {
        std::cout << tomb[i] << std::endl;
    }

    return 0;
}
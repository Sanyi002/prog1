#include <iostream>
#include <string>
#include <vector>

int main()
{
	int max_length = 100;
	std::vector<char> input_line(max_length);
	int quest_count = 0;

	// AZ EREDETI FOR CIKLUS
	// for( int i = 0; i != max_length; i++ )
	// 	if( input_line[i] == '?' )
	// 		quest_count++;

	// A FOR CIKLUSSAL EGYENÉRTÉKŰ WHILE CIKLUS
	// int i = 0;
	// while( i != max_length )
	// {
	// 	if( input_line[i] == '?' )
	// 		quest_count++;
	// 	i++;
	// }

	// A FOR CIKLUS MEGOLDÁSA POINTERREL
	// char *p;
	// p = input_line;
	// for( ; p != input_line + max_length; ++p )
	// 	if( *p == '?' )
	// 		quest_count++;

	// RANGE-FOR CIKLUS, AMIT NEM TÁMOGAT A RÉGI C++ SZABVÁNY, ÍGY -std=c++11 KAPCSOLÓVAL KELL FORDÍTANI
	for(const auto& i : input_line)
    {
    	if( input_line[i] == '?' )
    		quest_count++;
    }


	return 0;
}
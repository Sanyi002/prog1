#include <iostream>
using namespace std;

int main()
{
	char ch = 'a';
	char *ch_p = &ch; 		//karakterre hivatkozó mutató

	int tomb [10] = {0,1,2,3,4,5,6,7,8,9};  //10 egészből álló tömb
	int (&t_ref2)[10] = tomb; //tömb összes elemére (10 egészből álló tömb referenciája)

	char str [3] = {'a', 'b', 'c'}; 
	char *str_p = &str[0]; 		//karakterláncokból álló tömbre hivatkozó mutató
	char **str_p2 = &str_p; 	//karakterre hivatkozó mutatóra hivatkozó mutató

	const int egesz = 0;  //konstans egész
	const int *cnst_p = &egesz; //konstans egészre hivatkozó mutató
	int const *cnst_p2 = &egesz; //egészre hivatkozó konstans mutató

	return 0;
}
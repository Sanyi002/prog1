#include <iostream>
using namespace std;

struct Date{
	int ev;
	int honap;
	int nap;
};
Date datum[100];

void kiiratas(int db){
	int j = 0;
	cout << endl;
	while(j!=db){
		cout << datum[j].ev << " " << datum[j].honap << " " << datum[j].nap << endl;
		j++;
	}
}

void beolvasas(int db){
	int i = 0;
	while(i!=db){
		cin >> datum[i].ev;
		cin >> datum[i].honap;
		cin >> datum[i].nap;
		i++;
	}
kiiratas(i);
}


void kezdo(){
	datum[0].ev = 2014;
	datum[0].honap = 03;
	datum[0].nap = 14;
	cout<< endl << datum[0].ev << " " << datum[0].honap << " " << datum[0].nap << endl;
}


int main(){
int db;
cout << "Adja meg a beolvasando elemek szamat: "; cin >> db;
beolvasas(db);
cout <<endl<< "Kiiratas kezdoertekkel:";
kezdo();

return 0;

}


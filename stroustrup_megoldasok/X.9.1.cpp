#include <iostream>

int main()
{

    struct elso
    {
        bool b; //1 bájt
        int i; //4 bájt
        char c; //1 bájt
        long l; //4 bájt
        double d; //8 bájt
        long double ld; //12 bájt
    };
    struct masodik
    {
        long double ld; //12 bájt
        double d; //8 bájt
        int i; //4 bájt
        long l; //4 bájt
        bool b; //1 bájt
        char c; //1 bájt
    };
    std::cout<<"Az első struktúra mérete: "<<sizeof(elso)<<" bájt.\n";
    std::cout<<"A második struktúra mérete: "<<sizeof(masodik)<<" bájt.\n";
}

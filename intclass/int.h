#ifndef INT__H
#define INT__H

#include <iostream>

class Int
{
public:
  Int (int n=0):ertek (n) {/*std::cout << "-- Int ctor " << &ertek << std::endl << std::flush;*/}
  ~Int () {/*std::cout << "-- Int dtor " << &ertek << std::endl << std::flush;*/};

  Int (const Int &n) {
    ertek = n.ertek;
    /*std::cout << "-- Int masolo ctor " << &ertek << std::endl << std::flush;*/
  }
  Int & operator= (const Int &n);

  int compare(Int& n);
  Int operator+(const Int& n) const ;
  Int& operator+=(const Int& n);

  friend std::ostream& operator<< (std::ostream& os, const Int& n);
  friend std::istream& operator>> (std::istream& is, Int& n);

private:
  int ertek;
};

#endif

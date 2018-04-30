#include "int.h"

Int& Int::operator= (const Int &n) {
  /*std::cout << "-- Int masolo ertekadas "  << &ertek << std::endl << std::flush;*/
  ertek = n.ertek;
  return *this;
}

Int
Int::operator+(const Int& n) const {
  /*std::cout << "-- Int + tulterheles "  << &ertek << std::endl << std::flush;*/
  return Int(ertek + n.ertek);
}
/*
 * Int
 * Int::operator+(const Int& n) const {
 *    std::cout << "-- Int + tulterheles "  << &ertek << std::endl << std::flush;
 *    Int osszeg(ertek + n.ertek);
 *    return osszeg;
 * }
 */

int Int::compare(Int& n) {
  if (ertek == n.ertek)
    return 0;
  else if (ertek > n.ertek)
    return 1;
  else
    return -1;
}

Int&
Int::operator+=(const Int& n) {
  ertek += n.ertek;
  return *this;
}

std::ostream&
operator<< (std::ostream& os, const Int& n) {
  os << n.ertek;
  return os;
}

std::istream& operator>> (std::istream& is, Int& n) {
  int ertek;
  is >> ertek;
  n = Int(ertek);
  return is;
}

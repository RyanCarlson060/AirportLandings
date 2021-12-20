// Ryan Carlson, ID# 918062981

#include "Runway.h"
using namespace std;

Runway::Runway(string s):site_number_(s.substr(0,10)), name_(s.substr(13,7)),
 length_(convert_length(s.substr(20,5))){}

string Runway::site_number(void) const{
  return site_number_;
}

string Runway::name(void) const{
  return name_;
}

int Runway::length(void) const{
  return length_;
}

int Runway::convert_length(string s) const{
  return stoi(s);
}

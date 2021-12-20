// Ryan Carlson, ID# 918062981

#include "Facility.h"
#include "gcdistance.h"
using namespace std;

Facility::Facility(string s):site_number_(s.substr(0,10)), type_(s.substr(11,13)), code_(s.substr(24,4)), name_(s.substr(130,50)),
latitude_(convert_latitude(s.substr(535,12))), longitude_(convert_longitude(s.substr(562,12))){}

string Facility::site_number(void) const{
  return site_number_;
}

string Facility::type(void) const{
  return type_;
}

string Facility::code(void) const{
  return code_;
}

string Facility::name(void) const{
  return name_;
}

double Facility::latitude(void) const{
  return latitude_;
}

double Facility::longitude(void) const{
  return longitude_;
}

double Facility::distance(double lat, double lon) const{
  return gcdistance(latitude_,longitude_,lat,lon);
}

double Facility::convert_latitude(string s) const{
  double d = stod(s.substr(0,11));
  if(s.substr(11,1) == "S"){
    d = -d;
  }
  return (d/3600);
}

double Facility::convert_longitude(string s) const{
  double d = stod(s.substr(0,11));
  if(s.substr(11,1) == "W"){
    d = -d;
  }
  return (d/3600);
}

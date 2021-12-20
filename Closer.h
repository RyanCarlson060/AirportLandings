#ifndef CLOSER_H
#define CLOSER_H
class Closer{

  public:
    Closer(double current_latitude, double current_longitude):lat(current_latitude),
     lon(current_longitude){}
    bool operator()(Facility*& a, Facility*& b){
      return a->distance(lat,lon)<b->distance(lat,lon);
    }
  private:
    const double lat, lon;
};
#endif

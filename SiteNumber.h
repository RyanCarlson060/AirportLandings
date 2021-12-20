#ifndef SITENUMBER_H
#define SITENUMBER_H
#include<string>
class SiteNumber{

  public:
    SiteNumber(std::string s):siteNum(s){}
    bool operator()(Runway*& a){
      return (siteNum==a->site_number());
    }
  private:
    const std::string siteNum;
};
#endif

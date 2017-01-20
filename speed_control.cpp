#include <iostream>
#include <vector>
#include <math.h>

using namespace::std;

class GpsSpeed
{
public:
    static int gps(int s, vector<double> &x);
};


int GpsSpeed::gps(int s, vector<double> &x){
  vector<double> avgSpeed;
  double tempspeed = 0;
  double maxavgspeed = 0;

  for(int i = 0; i < (x.size()-1); i++){
    tempspeed = ((x.at(i+1) - x.at(i)) * ((60 * 60) / s));
    avgSpeed.push_back(tempspeed);
  }

  for(int i = 0; i < avgSpeed.size(); i++){
    if(maxavgspeed < avgSpeed.at(i)){
      maxavgspeed = avgSpeed.at(i);
    }
  }
  return floor(maxavgspeed);
}
int main() {
  std::vector<double> x = {0.0, 0.11, 0.22, 0.33, 0.44, 0.65, 1.08, 1.26, 1.68, 1.89, 2.1, 2.31, 2.52, 3.25};
  GpsSpeed *testgpsdata;
 
  cout << testgpsdata->gps(12, x);

}
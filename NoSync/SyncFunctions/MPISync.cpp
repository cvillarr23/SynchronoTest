#include "chrono/core/ChVector.h"
#include "chrono/core/ChQuaternion.h"

#include "MPISync.h"
#include <iostream>
using namespace chrono;

void printTime(double *gTimes, int numRanks) {
  int n = sizeof(gTimes) / sizeof(gTimes[0]);
  for(int i = 1; i < numRanks; i++) {
    if(gTimes[i] == -1.0) {
      break;
    }
    std::cout << "Reporting value " << gTimes[i] << std::endl;
  }
}


struct vehicleData {
  ChVector<> loc;
  ChQuaternion<> rot;
  double time;
};

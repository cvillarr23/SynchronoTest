#include "ClientHandler.h"





using namespace chrono;
using namespace chrono::irrlicht;
using namespace chrono::vehicle;


#include "chrono_irrlicht/ChIrrApp.h"
using namespace irr;


struct AgentProfile {
    std::pair<int, int> id;
    // double time;
    // std::shared_ptr<google::protobuf::Message> state;
};

void registerClient(std::map<std::pair<int, int>, std::shared_ptr<ServerVehicle>>& otherVehicles) {
  auto newVehicle = std::make_shared<ServerVehicle>(system);
  otherVehicles.insert();
}

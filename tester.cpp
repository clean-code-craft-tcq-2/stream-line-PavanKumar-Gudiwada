
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "generate.h"
#include "sender.h"

TEST_CASE("generate sesnsor values and print to console") {
  struct sensorValuePair_t * sensorValuePairsPoniter;
	
	sensorValuePairsPoniter = generateSensorValues();
  
  for(int i=0 ; i<50 ;i++)
  {
    REQUIRE((sensorValuePairsPoniter[i].soc >= 0) && (sensorValuePairsPoniter[i].soc <= 100));
    REQUIRE((sensorValuePairsPoniter[i].voltage >= 0) && (sensorValuePairsPoniter[i].voltage <= 12));
  }
  
	sendThroughConsole(sensorValuePairsPoniter);
}

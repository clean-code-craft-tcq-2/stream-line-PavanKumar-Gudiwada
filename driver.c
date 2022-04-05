#include "generate.h"
#include "sender.h"

int main()
{
	struct sensorValuePair_t * sensorValuePairsPoniter;
	
	sensorValuePairsPoniter = generateSensorValues();
	sendThroughConsole(sensorValuePairsPoniter);
	
	return 0;
}

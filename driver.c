#include "generate.h"
#include "sender.h"

void main()
{
	struct sensorValuePair_t * sensorValuePairsPoniter;
	
	sensorValuePairsPoniter = generateSensorValues();
	sendThroughConsole(sensorValuePairsPoniter);
}

#include "generate.h"
#include <stdio.h>

void sendThroughConsole(struct sensorValuePair_t * sensorValuePairsPoniter)
{
	for(int i=0 ; i < 50; i++)
	{
		printf("%d, %f\n", sensorValuePairsPoniter[i].soc, sensorValuePairsPoniter[i].voltage);
	}
}

#include <stdlib.h>
#include <time.h>
#include "generate.h"

struct sensorValuePair_t sensorValuePairs[50];

static float generateVoltageValue()
{
	return (float)rand()/(float)(RAND_MAX/MAX_VOLTS);
}

static int generateSOCValue()
{
	return (rand() % (MAX_SOC - MIN_SOC + 1)) + MIN_SOC;
}

struct sensorValuePair_t * generateSensorValues()
{
	srand(time(NULL));
	for(int i = 0; i < 50 ; i++)
	{
		sensorValuePairs[i].soc = generateSOCValue();
		sensorValuePairs[i].voltage = generateVoltageValue();
	}
	return sensorValuePairs;
}

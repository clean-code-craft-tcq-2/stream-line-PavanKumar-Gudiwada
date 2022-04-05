
#define MAX_VOLTS 12

#define MAX_SOC 100
#define MIN_SOC 0

struct sensorValuePair_t
{
	int soc;
	float voltage;	
};

extern struct sensorValuePair_t * generateSensorValues();

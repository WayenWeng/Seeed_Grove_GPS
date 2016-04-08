// test for seeed match UP project
// JY.W @ 2016-01-20

#include "Seeed_GPS.h"
#include <SoftwareSerial.h>

GPS gps(2, 3);

void setup()
{
	Serial.begin(115200);
	Serial.println("Test for Seeed match UP project");
	Serial.println("GPS");
	gps.Init();
}

void loop()
{
	float longitude;
	float latitude;
	float altitude;
	
	if(gps.Available())
	{
		
		longitude = gps.GPS_X();
		latitude = gps.GPS_Y();
		altitude = gps.GPS_Z();

		Serial.print("longitude is ");
		Serial.println(longitude);
		Serial.print("latitude is ");
		Serial.println(latitude);
		Serial.print("altitude is ");
		Serial.println(altitude);
		Serial.println(" ");
	}
}
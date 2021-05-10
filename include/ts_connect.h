#ifndef THINGSPEAK_CONNECT_H
#define THINGSPEAK_CONNECT_H


// WiFi authentication
#define WIFI_SSID       "t127"
#define WIFI_PASSWORD   "12345678" 
// #define WIFI_SSID       "IoT_Hub"
// #define WIFI_PASSWORD   "SENAI127iot"


// ThingSpeak (TS) information
#define TS_ADDRS            "api.thingspeak.com"
#define TS_CHANNEL_ID       1381369
#define TS_READAPIKEY       "CBWHCZ6TGSGJ6W7J"
#define TS_WRITEAPIKEY      "6WFOK02JI7PJRJRA"
#define TS_DATA_FIELD_TEMP  1
#define TS_DATA_FIELD_UMID  2


float readTSData( long TSChannel,unsigned int TSField );
    
    // Use this function if you want to write a single field.
int writeTSData( long TSChannel, unsigned int TSField, float data );
    
    // Use this function if you want to write multiple fields simultaneously.
int write2TSData( long TSChannel, unsigned int TSField1, float field1Data, unsigned int TSField2, long field2Data, unsigned int TSField3, long field3Data );

void TS_connect_init( void );
void TS_data_write( unsigned int TSField, float data );
int TS_dht_write( unsigned int TSField1, float field1Data, unsigned int TSField2, float field2Data );

#endif

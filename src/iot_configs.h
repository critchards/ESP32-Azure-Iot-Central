#ifndef IOT_CONFIGS_H           //inclusion guard, only define this stuff one time
#define IOT_CONFIGS_H

//wifi setup stuff
#define IOT_CONFIG_WIFI_SSID       "your wifi ssid"
#define IOT_CONFIG_WIFI_PASSWORD   "your wifi password"

/**
 * IoT Hub Device Connection String setup
 * Find your Device Connection String by going to your Azure portal, creating (or navigating to) an IoT Hub, 
 * navigating to IoT Devices tab on the left, and creating (or selecting an existing) IoT Device. 
 * Create the connection string from the scope-id, device-id and primary-key using the dps-keygen tool found here
 * https://github.com/Azure/dps-keygen.
 * it will look like HostName=#########.azure-devices.net;DeviceId=#######;SharedAccessKey=#################
 */
#define DEVICE_CONNECTION_STRING    "your device connection string"

#endif /* IOT_CONFIGS_H */
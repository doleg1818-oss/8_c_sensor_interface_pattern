
#include "sensor.h"
#include "temperature_sensor.h"
#include "humidity_sensor.h"
#include "battery_sensor.h"

int main(void)
{
    sensor_t temp_sensor = temperature_sensor_create();
    sensor_t humidity_sensor = humidity_sensor_create();
    sensor_t battery_sensor = battery_sensor_create();

    sensor_t *sensors[] = 
    {
        &temp_sensor,
        &humidity_sensor,
        &battery_sensor
    };

    int sensor_count = sizeof(sensors)/sizeof(sensors[0]);

    for(int i = 0; i<sensor_count; i++)
    {
        sensor_init(sensors[i]);
        sensor_read(sensors[i]);
        printf("%s: %.2f \n",
            sensor_get_name(sensors[i]),
            sensor_get_value(sensors[i]));
    }

    return 0;
}
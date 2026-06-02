#include "assert.h"
#include "stdio.h"
#include "sensor.h"


// static bool fake_temperature_sensor_init(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->initialized = true;
//     return true;
// }
// static bool fake_temperature_sensor_read(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->value = 12.5f;
//     return true;
// }

// static bool fake_humidity_sensor_init(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->initialized = true;
//     return true;
// }
// static bool fake_humidity_sensor_read(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->value = 60.5f;
//     return true;
// }


// static bool fake_battery_sensor_init(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->initialized = true;
//     return true;
// }
// static bool fake_battery_sensor_read(sensor_t *self)
// {
//     if(self == NULL)
//     {
//         return false;
//     }
//     self->value = 3.8f;
//     return true;
// }

int main(void)
{
    // sensor_t temp_sensor = 
    // {
    //     .name = "Temperature sensor",
    //     .type = SENSOR_TYPE_TEMPERATURE,
    //     .initialized = false,
    //     .value = 0.0f,
    //     .init = fake_temperature_sensor_init,
    //     .read = fake_temperature_sensor_read
    // };

    // sensor_t humidity_sensor =
    // {
    //     .name = "Humidity sensor",
    //     .type = SENSOR_TYPE_HUMIDITY,
    //     .initialized = false,
    //     .value = 0.0f,
    //     .init = fake_humidity_sensor_init,
    //     .read = fake_humidity_sensor_read
    // };

    // sensor_t battery_sensor =
    // {
    //     .name = "Battery sensor",
    //     .type = SENSOR_TYPE_BATTERY,
    //     .initialized = false,
    //     .value = 0.0f,
    //     .init = fake_battery_sensor_init,
    //     .read = fake_battery_sensor_read
    // };

    // sensor_t *sensors[] = 
    // {
    //     &temp_sensor,
    //     &humidity_sensor,
    //     &battery_sensor
    // };

    // int sensor_count = sizeof(sensors)/sizeof(sensors[0]);
    // printf("Sensors counter: %d sensor(s)\n",sensor_count);

    // for(uint8_t i = 0; i<sensor_count; i++)
    // {
    //     sensor_init(sensors[i]);
    //     sensor_read(sensors[i]);
    //     printf("%s value %.1f\n", 
    //         sensor_get_name(sensors[i]), 
    //         sensor_get_value(sensors[i]));
    // }


    // assert(sensor_read(&temp_sensor) == false);
    // assert(sensor_init(&temp_sensor) == true);
    // assert(temp_sensor.initialized == true);
    // assert(sensor_read(&temp_sensor) == true);
    // assert(sensor_get_value(&temp_sensor)== 12.5f);

    //printf("Sensor interface test passed\n");

    return 0;
}
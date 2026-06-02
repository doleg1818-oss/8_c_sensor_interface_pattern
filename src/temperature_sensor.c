#include "temperature_sensor.h"


static bool temperature_sensor_init(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->initialized = true;
    return true;
}
static bool temperature_sensor_read(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->value = 25.5f;
    return true;
}

sensor_t temperature_sensor_create(void)
{
    sensor_t sensor = 
    {
        .name = "Temperature sensor",
        .type = SENSOR_TYPE_TEMPERATURE,
        .initialized = false,
        .value = 0.0f,
        .init = temperature_sensor_init,
        .read = temperature_sensor_read
    };
    return sensor;
}
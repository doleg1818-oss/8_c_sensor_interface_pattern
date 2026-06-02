#include "humidity_sensor.h"

static bool humidity_sensor_init(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->initialized = true;
    return true;
}
static bool humidity_sensor_read(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->value = 60.5f;
    return true;
}

sensor_t humidity_sensor_create(void)
{
    sensor_t sensor =
    {
        .name = "Humidity sensor",
        .type = SENSOR_TYPE_HUMIDITY,
        .initialized = false,
        .value = 0.0f,
        .init = humidity_sensor_init,
        .read = humidity_sensor_read
    };
    return sensor;
}
#include "battery_sensor.h"

static bool battery_sensor_init(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->initialized = true;
    return true;
}
static bool battery_sensor_read(sensor_t *self)
{
    if(self == NULL)
    {
        return false;
    }
    self->value = 3.8f;
    return true;
}
sensor_t battery_sensor_create(void)
{
    sensor_t sensor =
    {
        .name = "Battery sensor",
        .type = SENSOR_TYPE_BATTERY,
        .initialized = false,
        .value = 0.0f,
        .init = battery_sensor_init,
        .read = battery_sensor_read
    };
    return sensor;
}


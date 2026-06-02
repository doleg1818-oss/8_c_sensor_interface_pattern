#include "sensor.h"

bool sensor_init(sensor_t *sensor)
{
    if(sensor == NULL || sensor->init == NULL)
    {
        return false;
    }
    return sensor->init(sensor);
}
bool sensor_read(sensor_t *sensor)
{
    if(sensor == NULL || sensor->read == NULL)
    {
        return false;
    }
    if(sensor->initialized == false)
    {
        return false;
    }
    return sensor->read(sensor);
}
float sensor_get_value(const sensor_t *sensor)
{
    if(sensor == NULL)
    {
        return 0.0f;
    }
    return sensor->value;    
}
const char *sensor_get_name(const sensor_t *sensor)
{
    if(sensor == NULL || sensor->name == NULL)
    {
        return "unknown";
    }
    return sensor->name;
}
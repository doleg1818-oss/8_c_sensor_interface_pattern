#ifndef SENSOR_H
#define SENSOR_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

typedef enum
{
    SENSOR_TYPE_TEMPERATURE = 0,
    SENSOR_TYPE_HUMIDITY,
    SENSOR_TYPE_BATTERY
}sensor_type_t;

typedef struct sensor sensor_t;

struct sensor
{
    const char *name;
    sensor_type_t type;
    bool initialized;
    float value;

    bool (*init)(sensor_t *self);
    bool (*read)(sensor_t *self);
};


bool sensor_init(sensor_t *sensor);
bool sensor_read(sensor_t *sensor);
float sensor_get_value(const sensor_t *sensor);
const char *sensor_get_name(const sensor_t *sensor);


#endif
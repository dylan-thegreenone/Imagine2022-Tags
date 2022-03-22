/*
* copy to config.h and add secrets
*/
#ifndef _CONFIG_H_
#define _CONFIG_H_
#include "esp_bt_defs.h"

#define DEVICE_MANUFACTURER "Prof D Glizzy"
#define BT_DEVICE_NAME "ESP tester"

static uint8_t whitelisted_bdas[][6] = {
    {0x18, 0x26, 0x49, 0x77, 0x59, 0x7e},
    {0x78, 0x21, 0x84, 0x7c, 0xC1, 0x3c}
    };
static uint8_t config_device_uuid[ESP_UUID_LEN_128] = {
    /* LSB <--------------------------------------------------------------------------------> MSB */
    //first uuid, 16bit, [12],[13] is the value
    0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xEE, 0x00, 0x00, 0x00,
    //second uuid, 32bit, [12], [13], [14], [15] is the value
    0xfb, 0x34, 0x9b, 0x5f, 0x80, 0x00, 0x00, 0x80, 0x00, 0x10, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00,
};

#endif
#ifndef ST7801_INIT_CMDS_H
#define ST7801_INIT_CMDS_H

#include "esp_lcd_st7801.h"

#ifdef __cplusplus
extern "C" {
#endif

// ==================== ST7801 初始化命令数组 ====================
static const st7801_lcd_init_cmd_t lcd_init_cmds[] = {
    //  {cmd, { data }, data_size, delay_ms}
    {0x11, (uint8_t []){0x00}, 0, 200},                          // Sleep Out
    {0x2A, (uint8_t []){0x00, 0x00, 0x01, 0xDF}, 4, 0},          // Column: 0~479
    {0x2B, (uint8_t []){0x00, 0x00, 0x01, 0xDF}, 4, 0},          // Row: 0~479
    {0x53, (uint8_t []){0x20}, 1, 0},
    {0x51, (uint8_t []){0x9F}, 1, 0},  // 亮度 0x00~0xFF
    {0x3A, (uint8_t []){0x55}, 1, 10}, // RGB565
    {0x35, (uint8_t []){0x00}, 1, 10}, // TE 使能
    {0x29, (uint8_t []){0x00}, 0, 200},
};

static const size_t lcd_init_cmds_size = sizeof(lcd_init_cmds) / sizeof(st7801_lcd_init_cmd_t);

#ifdef __cplusplus
}
#endif

#endif // ST7801_INIT_CMDS_H
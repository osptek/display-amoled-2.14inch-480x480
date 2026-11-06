file(GLOB_RECURSE srcs *.c
                    *.cpp
                    ScreenDriver/*.c
                    )
 
set(include_dirs 
    . 
    ScreenDriver
    )
 
idf_component_register(
    SRCS ${srcs}
    INCLUDE_DIRS ${include_dirs}
    REQUIRES esp_driver_gpio esp_driver_i2c esp_driver_spi esp_lcd esp_timer esp_lcd_st7801 esp_lcd_touch_cst9220 lvgl
    )

add_compile_definitions(LV_LVGL_H_INCLUDE_SIMPLE)

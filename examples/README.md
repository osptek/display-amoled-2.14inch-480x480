# 示例工程 / Sample Projects

本目录中的每个子文件夹都是一个独立的示例工程，请打开对应文件夹并按照其中的 README（如有）进行编译。这些工程为参考代码，引脚、背光、触摸等配置请根据实际硬件修改。选用前请对照仓库首页各型号的驱动 IC 和接口进行确认。

Each subfolder in this directory is an independent sample project. Open the folder and build it according to its README (if any). These projects are reference code only — please modify pin, backlight, touch and other settings according to your actual hardware. Before use, verify the driver IC and interface against the model information on the repository home page.

| 例程 / Project | 平台 / Platform | 驱动 IC / Driver IC | 接口 / Interface | 说明 / Description |
| --- | --- | --- | --- | --- |
| [`esp32s3-idf5_st7801-qspi-480x480_lvgl8-te`](./esp32s3-idf5_st7801-qspi-480x480_lvgl8-te/) | ESP32-S3 · ESP-IDF 5 | ST7801 | QSPI | LVGL 8、TE 防撕裂，含 CST9220 触摸 / LVGL 8, TE tear-free, with CST9220 touch |
| [`esp32s3-idf5_st7801-qspi-480x480_osptek-boot-anim_lvgl9-te`](./esp32s3-idf5_st7801-qspi-480x480_osptek-boot-anim_lvgl9-te/) | ESP32-S3 · ESP-IDF 5 | ST7801 | QSPI | 开机动画+LVGL 9、TE 防撕裂 / Boot Animation+LVGL 9, TE tear-free |
| [`esp32s31-idf6_st7801-qspi-480X480_osptek-boot-anim_lvgl9-te`](./esp32s31-idf6_st7801-qspi-480X480_osptek-boot-anim_lvgl9-te/) | ESP32-S31 · ESP-IDF 6 | ST7801 | QSPI | 开机动画+LVGL 9、TE 防撕裂 / Boot Animation+LVGL 9, TE tear-free |

如有问题请联系技术支持。 / Contact technical support if you have questions.

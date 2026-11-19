# 固件并包bin文件

```
/home/jin/.espressif/tools/python/v5.5.5/venv/bin/python -m esptool --chip esp32s3 merge_bin \
  --output esp32s3-idf5_st7801-qspi-480x480_osptek-boot-anim_lvgl9-te_0x0.bin \
  --flash_mode dio \
  --flash_freq 80m \
  --flash_size 16MB \
  0x0 bootloader/bootloader.bin \
  0x8000 partition_table/partition-table.bin \
  0x10000 esp32s3-idf5_st7801-qspi-480x480_osptek-boot-anim_lvgl9-te.bin \
  0x610000 mmap_build/assets/efc/efc.bin
```

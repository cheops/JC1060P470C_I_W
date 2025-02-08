# 请使用arduino_esp32_v3.1版本

# lv_conf.h文件必要设置(lvgl_v8)

```c
#define LV_COLOR_DEPTH 16

#define LV_COLOR_16_SWAP 0

#define LV_MEM_CUSTOM 1

#define LV_TICK_CUSTOM 1

#define LV_MEMCPY_MEMSET_STD 1

#define LV_ATTRIBUTE_FAST_MEM   IRAM_ATTR
```
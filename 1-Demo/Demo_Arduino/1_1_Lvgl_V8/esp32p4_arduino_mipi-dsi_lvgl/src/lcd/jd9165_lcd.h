#ifndef _JD9165_LCD_H
#define _JD9165_LCD_H
#include <stdio.h>

class jd9165_lcd
{
public:
    jd9165_lcd(int8_t lcd_rst);

    void begin();
    void example_bsp_enable_dsi_phy_power();
    void example_bsp_init_lcd_backlight();
    void example_bsp_set_lcd_backlight(uint32_t level);
    void lcd_draw_bitmap(uint16_t x_start, uint16_t y_start,
                         uint16_t x_end, uint16_t y_end, uint16_t *color_data);
    void draw16bitbergbbitmap(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint16_t *color_data);
    void fillScreen(uint16_t color);
    void te_on();
    void te_off();
    uint16_t width();
    uint16_t height();

private:
    int8_t _lcd_rst;
};
#endif

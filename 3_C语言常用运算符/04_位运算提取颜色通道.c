#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * 位运算符提取颜色通道
 */
int main() {
    uint32_t color = 0xFFFEFAFB; //ARGB : Alpha,Red,Green,Blue;
    uint32_t tmp = color&0x00FF0000;

    uint8_t red = tmp >> 16;
    printf("%d\n",red);

    return 0;
}
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * 位运算符
 *      & 位与
 *      | 位或
 *      ~ 位反
 *      ^ 异或
 *      >> 右移
 *      << 左移
 */
int main() {
    int a = 0b1;
    int b = 0b0;
    printf("%d\n", a & b);  //位与 有一位是0，则输出0
    printf("%d\n", a | b);  //位或 有一位是1，则输出1

    uint8_t c = 1;    //0b00000001  位反 0b11111110
    c = ~c;           //求反
    printf("%d\n", c);

    uint8_t d = 0b11111110;
    printf("%d\n", d);
    return 0;
}
#include <stdio.h>

/**
 * 整型数据
 */
int main() {
    int a = 10;         //占位4个字节
    int b = -10;
    long c = 20;        //32位系统占位long型占位4个字节，64位系统占位8个字节
    long long d = 30;  //32位和64位系统均占8个字节
    printf("a=%d,b=%d,c=%ld,d=%ld \n", a, b, c, d);

    int e = 0b100;  //0b:二进制变量
    int f = 010;    //0 八进制变量
    int g = 0xB;    //0x 十六进制变量
    printf("e=%d,f=%d,g=%d \n", e, f, g);

    unsigned int h=12;
    printf("h=%d \n",h);


    return 0;

}
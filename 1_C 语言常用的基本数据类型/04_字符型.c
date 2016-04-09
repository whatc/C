#include <stdio.h>

/**
 * 字符型数据
 */
int main() {
    /**
     * 字符常量
     */
    printf("\'HelloWorle\' \n");       // "\" 转义符
    printf("Hello\nWorld 1 \n");    // \n 换行符
    printf("Hello\rWrold 2 \n");    // \r 回车符 把指针移到后面部分，前面丢弃
    printf("Hello\bWorld 3 \n");    // \b 退格符 向前删除一个字符
    printf("Hello\tWorld 4 \nHello\tC 4 \n"); // \t 制表符  加一个tab空格
    printf("Hello\fWorld 5 \n");       //  \f换页符 换行缩进

    /**
     * 字符变量
     */
    char ch_a ='a';
    char ch_A='A';

    printf("a=%d \n",ch_a); // 编码
    printf("A=%d \n",ch_A); // 编码

    //编码表大小写之间相差32位，利用加减可以互转大小写
    printf("a=%c \n",ch_a-32);  //把a转换成A ,97-32=65,


    return 0;

}
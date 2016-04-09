#include <iostream>
#include <cstdio>
#include <cstdint>

typedef int_fast64_t jkxy_long;     //自定义长整型
// typedef int64_t jkxy_long;

typedef char jkxy_char;             //自定义字符类型

typedef uint_fast8_t jkxy_char1;    //自定义字符类型
//typedef unit8_t jkxy_char1;

/**
 * 自定义数据类型
 */
int main() {
    jkxy_long a = 20;
    printf("%d\n", a);

//    long int i = 20;
//    printf("%d\n", i);

    jkxy_char b = 'A';
    printf("%c \n", b);

    jkxy_char1 c = 'c';
    printf("%c \n", c);

    return 0;

}
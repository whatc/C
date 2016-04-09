#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * 联合体  关键字：union， 作用：节省内存空间
 *         所占字节数取决于占空间最大那个变量
 *
 */

union u {
    int num;    //4字节
    double d;   //8字节
};

//联合体占用内存大小统计
void sizeUnion() {
    union u u1;
    printf("union size:%d\n", sizeof(u1));  // 所占总字节数是：8
}

//联合体赋值
void valueUnion() {
    union u u2;
    u2.num = 123;
    u2.d = 123.456;
    printf("u2.num= %d\n", u2.num);  //446676599  使用同一块内存
    printf("u2.d  = %d\n", u2.d);    //446676599  使用同一块内存
}

int main() {

    sizeUnion();
    valueUnion();
    return 0;
}


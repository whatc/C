#include <stdio.h>

#define MY_AGE_1 1000           //定义一个常量
const int MY_AGE_2 = 1000;      //定义一个常量(推荐使用方式)

int main() {
    printf("Hello C \n");

    int a = 10;
    printf("The num is %d \n",a);

    printf("My age is : %d\n",MY_AGE_1);   //输出一个常量的值
    printf("My age is : %d\n",MY_AGE_2);    //输出一个常量的值

    return 0;

}
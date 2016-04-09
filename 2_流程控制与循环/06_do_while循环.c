#include <stdio.h>
#include <stdint.h>


/**
 * do..while循环
 */
int main() {

    int i = 0;
    while (i < 0) {     //不会执行
        printf("while:%d", i);
    }
    do{                 //先执行
        printf("do...while:%d",i);
    }while (i<0);      //再判断，跳出

    return 0;

}
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * 枚举 关键字：enum
 *      取值只能取枚举内的值
 */

enum weekday{
    mon,tue,wend,thur,fri,sat,sun   //默认索引 0-6
};
enum weekday2{
    mon=9,tue,wend,thur,fri,sat,sun   //指定索引9-15
};



int main() {
    enum weekday day = mon;
    printf("mon=%d\n",day);     //输出0

    return 0;
}


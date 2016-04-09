#include <stdio.h>
#include <stdint.h>


/**
 * goto语句
 */
int main() {
    int i = 0;
    label:printf("%d\n",i);
    i++;
    if (i < 100) {
        goto label; //调到标签位置执行
    }
    return 0;

}
#include <stdio.h>
#include <stdint.h>

/**
 * if语句
 */
int main() {
    int32_t a=8;
    int32_t b=10;

    printf("Max num is:");
    if (a>b){
        printf("%d \n",a);
    }else{
        printf("%d \n",b);
    }
    return 0;

}
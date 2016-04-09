#include <stdio.h>
#include <stdint.h>


/**
 * while循环
 */
int main() {

    int i = 0;
    while (i<80){
        if (i%2==1){    //求奇数
            printf("%d\n",i);
        }
        i++;
    }

    return 0;

}
#include <stdio.h>
#include <stdint.h>


/**
 * for循环
 */
int main() {
    //乘法口诀
    int i;
    int j;
    for (i = 1; i <= 9; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d*%d=%d \t", j, i, j * i);
            if (i * j >= 30) {
                goto end; //大于等级30跳出循环
            }
        }
        printf("\n");
    }
    end:    //任意字符串
    printf("\n");

    int k;
    for (k = 0; k <= 9; ++k) {
        if (k == 5) {
            continue;   //跳出等于5这次循环，往下继续执行
        }
        printf("num=%d\n", k);
    }

    return 0;

}
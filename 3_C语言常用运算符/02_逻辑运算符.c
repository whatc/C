#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define MALE 1
#define FEMALE 0

/**
 * 逻辑运算符
 */
int main() {
    int32_t score = 80;
    if (score >= 60 && score <= 100) {  //&& 和运算
        printf("ok \n");
    } else {
        printf("Fail or invalid score \n");
    }

    if (score<60 || score>100){     // || 或运算
        printf("Fail or invalid score \n");
    }else{
        printf("ok \n");
    }

    int sex = MALE;
    if (sex != MALE){               // 不等于 逻辑非运算
        printf("The person is female\n");
    }else{
        printf("The person is male\n");
    }
    return 0;
}
//
//  06_内存地址修改.c
//  HelloC
//
//  Created by iwan on 16/4/8.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(){

    int exp = 0; //保存经验
    printf("开始打怪\n");
    while (1) {
        printf("砍一刀，没砍死\n");
        sleep(2);

        printf("再砍一刀，砍死了，获得经验值\n");
        sleep(2);
        exp +=20;
        if (exp>50) {
            printf("恭喜你升级了\n");
            break;
        }else{
            printf("当前经验值%d,继续砍怪兽\n",exp);
            sleep(2);
        }
        
    }
    return 0;
}

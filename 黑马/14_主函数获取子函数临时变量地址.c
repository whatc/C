//
//  14_主函数获取子函数临时变量地址.c
//  HelloC
//
//  Created by iwan on 16/4/9.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>


void function(int* pointer){
    
    int i = 123;
    *pointer = &i;
    printf("i的地址：%#x\n",&i);

}
int main(){

    int* pointer1;
    function(pointer1);
    printf("pointer1的值：%#x\n",pointer1);

    
    return 0;}
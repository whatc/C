//
//  15_栈内存和静态内存分配.c
//  HelloC
//
//  Created by iwan on 16/4/9.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>

/* 栈内存 系统统一分配和回收，无法控制 */

int* getData(){                 //指针函数
    int array[] = {1,2,3,4,5};  //整形数组
    return &array;              //返回地址
}

int* getData2(){                 //指针函数
    int array[] = {5,4,3,2,1};  //整形数组
    return &array;              //返回地址
}

int main(){

    int* pointer = getData();
    
    getData2();
    
    printf("%d,%d,%d \n",*(pointer+0),*(pointer+1),*(pointer+2));
    
    return 0;}

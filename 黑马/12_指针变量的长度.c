//
//  12_指针变量的长度.c
//  HelloC
//
//  Created by iwan on 16/4/9.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>

/*
 32位系统总线32位，4个字节的变量来保存32位操作系统的内存地址，1byte=8位，4*8=32；
 32位操作系统的指针变量占4个字节
 64位操作系统的指针变量占8个字节
 */
int main(){

    int* pointer;
    double* pointerd;
    
    printf("int*长度%d字节\n",sizeof(pointer));
    printf("double*长度%d字节\n",sizeof(pointerd));
    return 0;
}
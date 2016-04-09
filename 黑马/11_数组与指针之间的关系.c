//
//  11_数组与指针之间的关系.c
//  HelloC
//
//  Created by iwan on 16/4/8.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>
int main(){

    char array[] = {'a','b','c','d','\0'};//数组
    
    /*十六进制地址*/
    printf("%#x \n",&array[0]);
    printf("%#x \n",&array[1]);
    printf("%#x \n",&array[2]);
    printf("%#x \n",&array[3]);
    
    char* pointer = &array[0];  //取首地址
    
    /*直接操作指针*/
    printf("*(pointer+0)=%c\n",*(pointer+0));//a
    printf("*(pointer+1)=%c\n",*(pointer+1));//b
    printf("*(pointer+2)=%c\n",*(pointer+2));//c
    printf("*(pointer+3)=%c\n",*(pointer+3));//d


    
    return 0;
}
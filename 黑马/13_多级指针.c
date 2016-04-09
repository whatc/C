//
//  13_多级指针.c
//  HelloC
//
//  Created by iwan on 16/4/9.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>
int main(){
    
    int i=123;
    int* pointer = &i;              //一级指针
    int** pointer2 = &pointer;      //二级指针
    int*** pointer3 = &pointer2;    //三级指针
    
    
    printf("三级指针：%d\n",***pointer3);  //123
    
    return 0 ;}
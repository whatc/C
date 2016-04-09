//
//  09_交换两个变量的值.c
//  HelloC
//
//  Created by iwan on 16/4/8.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//
#include <stdio.h>

/*交换函数*/
void swap(int* pointer, int* pointer2){
    int temp = *pointer;
    *pointer = *pointer2;
    *pointer2 = temp;
}

int main(){
    
    int i = 123;
    int j= 345;
    swap(&i, &j);
    
    printf("i=%d,j=%d \n",i,j);
    return 0;
}

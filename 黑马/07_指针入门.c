//
//  07_指针入门.c
//  HelloC
//
//  Created by iwan on 16/4/8.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

#include <stdio.h>
int main(){
    
    int i = 123;
    printf("%#x\n", &i); //十六进制输出， &i 取内存位置符
    
    /**
     int*: int类型的指针变量，pointer:指针，指针变量只能保存内存地址,
     用取地址符&i把变量i的地址取出来，用指针变量pointer保存起来
     此时指针pointer指向了i的地址
     */
    
    int* pointer = &i;
    
    //用指针的方式修改i对应的那块内存
    *pointer = 456;
    printf("i的值是%d\n",i);
    
    return 0 ;
}

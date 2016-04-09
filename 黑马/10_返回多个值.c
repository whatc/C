//
//  10_返回多个值.c
//  HelloC
//
//  Created by iwan on 16/4/8.
//  Copyright © 2016年 yanwanfu. All rights reserved.
//

void function(int* pointer,int* pointer2){
    *pointer *=2;
    *pointer2 *=2;
    
}

#include <stdio.h>
int main(){
    
    int i=1;
    int j=2;
    
    function(&i,&j);
    
    printf("i=%d,j=%d\n",i,j);
    
    return 0;
}

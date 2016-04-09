#include <stdio.h>

/*
 要求：
    保存班级人数
    申请一块堆内存保存学生的学号
    来了几个插班生
    扩展一下堆内存
    保存插班生的学号
 
 */

int main(){

    printf("请输入班级人数:");
    int count;
    scanf("%d",&count);
    //申请堆内存
    int* pointer = malloc(sizeof(int)*count);
    
    int i;
    for (i=1; i<=count; i++) {
        printf("请输入%d个学生的学号:",i);
        scanf("%d",pointer+i);
    }
    
    for (i=1; i<=count; i++) {
        printf("第%d个学生的学号是：%d\n",i,*(pointer+i));
    }
    
    /*插班生*/
    printf("请输入插班生的人数：");
    int increment;
    scanf("%d",&increment);
    
    //重新申请对内存
    //如果malloc申请的空间未用完，realloc就在malloc申请的内存空间后面继续申请
    //如果malloc申请的空间已经用完，realloc会自动寻找新的内存空间，同时把会malloc空间的值复制过来
    pointer = realloc(pointer,sizeof(int)*(count+increment));
    
    for (i=count; i<count+increment; i++) {
        printf("请输入%d个学生的学号：",i+1);
        scanf("%d",pointer+i);
    }
    
    for (i=count; i<count+increment; i++) {
        printf("第%d个学生的学号是:%d\n",i+1,*(pointer+1));
    }
    
    
    return 0;}

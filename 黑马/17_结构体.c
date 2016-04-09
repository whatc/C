#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * 结构体(类)
 *      java => class
 *      c    => struct
 *      结构体的总大小是所有变量字节总和，是最大那个变量所占字节的整倍数
 *      结构体中不能有函数
 *
 */

/*结构体*/
struct Student {
    int age;
    int score;
    char sex;
    void(*studypointer); //声明一个函数指针
};
/*函数*/
void study(){
    printf("jikexueyuan\n");
}

int main() {
    struct Student stu = {18,100,'c'};         //实例化结构体对象

    stu.studypointer = &study;                  //把study内存地址赋给结构体的函数指针
    stu.studypointer;                           //输出函数 stu.studypointer();

    struct Student* stuPointer = &stu;          //取结构体地址给结构体类型的指针，
    printf("*stuPointer.age = %d\n",(*stuPointer).age);//输出结构体属性

    (*stuPointer).sex = 'm';                    //修改结构体内的属性值
    printf("%c\n",stu.sex);
    //第二种取值方式
    printf("%d\n",stuPointer ->age);            // 一级指针+间接运算符（->）+ 属性名



//    stu.age = 100;              //属性赋值
//    printf("%d\n", stu.age);

    return 0;
}
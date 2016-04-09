
/**
 1、 C语言的数据类型
 char, int, float, double, long, short, signed, unsigned, void
 
 2、 输入输出函数
 %d     - int
 %ld    – long int
 %lld   - long long
 %hd    – short 短整型
 %c     -
 %f     - float
 %lf    – double
 %u     – unsigned 无符号数
 %x     – 十六进制输出 int 或者long int 或者short int
 %o     - 八进制输出
 %s     – 字符串
 
 Int len;
 Scanf(“%d”,&len);
 
 */

//  占位符的使用

#include <stdio.h>


int main(int argc, const char * argv[]) {
    
    char c = 'a';
    printf("c=%c\n",c);
    
    short s = 123;
    printf("s=%hd\n",s);
    
    int i = 12345678;
    printf("i=%d\n",i);
    //十六进制输出, 0x代表十六进制
    printf("%#x\n",i);
    //八进制输出 0代表八进制
    printf("%#o\n",i);
    
    long l = 1234567890;
    printf("l=%ld\n",l);
    
    float f = 3.1415;
    printf("f=%f\n",f);
    
    double d = 3.1415926;
    printf("d=%lf\n",d);
    
    //字符串
    char cArray[] = "how are you \n";
    printf("cArray=%s",cArray);
    
    //字符串另一种形式 \0 表示字符串结束位置,这种类型不能使用中文
    char bArray[] = {'a','b','c','\0'};
    printf("bArray=%s\n",bArray);
    
    
    
    
    printf("Hello C\n");
    return 0;
}

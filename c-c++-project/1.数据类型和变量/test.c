#include<stdio.h>


// 数据类型
// 字符型----char
// 整型  ----short - int - long - long long 
// 浮点型----float(单精度) - double(双精度) - long double(精度更长)
// 布尔型----_Bool(bool) --得包含头文件 #include<stdbool.h>

// signed short int的取值范围为-32768 ~ 32767，最大位32767
// unsigned short int 的取值范围为0~65535  无符号数的取值会比有符号数的取值大一倍

//2^16 = 65536个, 因为是从0开始计数的，所以最大值是65535。
//%d是打印有符号的整数，%u是打印无符号的整数 %lu是打印unsiged long %llu 是打印 unsiged long long 

//数据类型的取值范围
//可以去查看limits.h和float.h这两个文件进行可以查询数据类型的取值范围


// 全局变量和局部变量在内存中存储在哪呢？
// 局部变量是放在内存的栈区
// 全局变量是放在内存的静态区
// 堆区是用来动态内存管理


// 占位符(常用的占位符)
// %c是字符      %s是字符串
// %d是int  %5d是int，输出的宽度是5位，不够5位的前面补空格       
// %ld是long int  %lld是 long long int
// %f是float和double
// %.2f是保留两位小数
// %p是指针


// 输入变量scanf 
// scanf()处理用户输入的原理是，用户的输入先放入缓存，等到按下回车键后，按照占位符对缓存进行解读
// 解读用户输入时，会从上一次解读遗留的第一个字符开始，直到读完缓存，或者遇到第一个不符合条件的字符为止
// scanf的返回值是一个整数，表示成功读取变量的个数，若未读取则返回0，若读取失败则返回EOF(-1)

// %c 是读取字符 scanf("%c", &ch);  //它遇到空白字符就会停止读取，除了%c以外，都会自动忽略起首的空白字符
// %s 是读取字符串 scanf("%s", str);  //它遇到空白字符就会停止读取,它会在字符串变量的末尾存储一个空字符\0，表示字符串的结束
// 处理多组数据的时候
// while(scanf("%d", &score) != EOF)

int main(){
        printf("%zd\n",sizeof(char)); //1byte
        printf("%zd\n",sizeof(short));//2byte
        printf("%zd\n",sizeof(int));  //4byte
        printf("%zd\n",sizeof(long)); //4byte
        printf("%zd\n",sizeof(long long)); //8byte
        printf("%zd\n",sizeof(float));  //4byte
        printf("%zd\n",sizeof(double)); //8byte
        printf("%zd\n",sizeof(long double)); //16byte

        int score = 0;
        // while(scanf("%d", &score) != EOF){
        //     printf("score = %d\n", score);
        // }


        // scanf(" %d", &score);
        // printf("score = %d\n", score);
        char c = 0;
        // scanf("%c" , &c);
        // 这里面在占位符之前加一个空格，scanf就会忽略1个或多个空白字符了。
        // scanf(" %c" , &c);
        // printf("%c\n",c);

        char arr[20] = {0};
        // 它在读取一个字符串的时候，若遇到空格，它就会停止读取
        // scanf("%s",arr);
        
        // 这个就不会，它直至遇到换行才会停止读取。
        scanf("%[^\n]s",arr);
        printf("%s\n",arr);

    return 0;
}
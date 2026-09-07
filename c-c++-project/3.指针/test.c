#include<stdio.h>


// 指针的基本用法
// int main(){

//     int a = 10;
//     // 创建变量本质就是在内存中创建4个字节的空间，在这个空间中存储了10
//     // 指针就是地址，对a进行取地址，存到p中,p就是变量a的地址。p就是指针变量
//     // *在说明p是指针变量，int代表p指向的变量是int类型的
//     // 指针就是地址，指针变量就是存地址的变量
//     int* p = &a;

//     // 打印地址
//     // %p是十六进制
//     printf("%p\n",p);

//     // 解引用
//     printf("%d\n",*p);

//     *p =66; //通过解引用，进而改变了a的值
//     printf("%d\n",*p);    


//     // 64位，指针变量为8个字节 ; 32位, 指针变量位4个字节
//     printf("%zd\n",sizeof(char *));
//     printf("%zd\n",sizeof(short *));
//     printf("%zd\n",sizeof(int *));
//     printf("%zd\n",sizeof(long *));
//     printf("%zd\n",sizeof(long long *));
//     printf("%zd\n",sizeof(float *));
//     printf("%zd\n",sizeof(double *));
//     printf("%zd\n",sizeof(long double *));


//     return 0;
// }



//  指针类型的意义
//  int main(){

//      //指针类型决定了你解引用后能够访问几个字节，
//      //例如char* 解引用后只能访问1个字节
//      //int* 解引用后只能访问4个字节
//      int a = 0x11223344;
//      int* pa = &a;
//      char* pb = &a;
//      *pa = 0;
//      *pb = 0;

//      printf("%d\n",*pa);
//      printf("%d\n", *pb);
//      return 0;
//  }



指针类型的加法
int main() {

    int a = 10;
    int* pi = &a;
    char* pc = (char*)&a;

    printf("a = %p\n", &a);
    printf("pi = %p\n", pi);
    printf("pc = %p\n", pc);

	//整型指针加1，地址增加4
    printf("pi+1=%p\n", pi + 1);
	//字符型指针加1，地址增加1
    printf("pc+1 = %p\n",pc + 1);

    return 0;
}
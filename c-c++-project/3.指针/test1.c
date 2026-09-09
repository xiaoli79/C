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


//指针类型的加法
// int main() {

//     int a = 10;
//     int* pi = &a;
//     char* pc = (char*)&a;

//     printf("a = %p\n", &a);
//     printf("pi = %p\n", pi);
//     printf("pc = %p\n", pc);

// 	//整型指针加1，地址增加4
//     printf("pi+1=%p\n", pi + 1);
// 	//字符型指针加1，地址增加1
//     printf("pc+1 = %p\n",pc + 1);

//     return 0;
// }

// void* 指针的用法，只是用来存储指针的地址，不能解引用，也不能进行指针的加减操作
// int main()  {

//     int a = 10;
//     int* pa=  &a; //int*
//     void* pv = &a; //int*
//     // *pv err
//     // pv++ err

//     return 0;
// }


// 指针的运算
// 指针的加减整数
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int len = sizeof(arr) / sizeof(arr[0]);
//     // 方式1
//     // for(int i = 0 ; i < len ; i++){
//     //     printf("%d ",arr[i]);
//     // }

//     // 方式2
//     // 通过指针加法进而实现对数组的遍历
//     int* p = &arr[0];
//     for(int i = 0 ; i<len ; i++){
//         printf("%d ", *p);
//         p++;  //通过指针的加法，进而实现对数组的访问
//     }

//     printf("\n");
//     // 方式三
//     int* pc = &arr[0];
//     for(int i = 0 ; i< len ; i++){
//         printf("%d ",*(pc+i));
//     }

//     printf("\n");

//     // 通过指针的减法，进而对数组实现倒序遍历
//     int* pb = &arr[len-1];
//     for(int i =0 ; i< len ; i++){

//         printf("%d ",*pb);
//         pb--;
//     }

//     return 0;
// }


#include<string.h>

// strlen的实现方式
// size_t my_strlen(char* p){

//     size_t cnt = 0 ;
//     while(*p != '\0'){
//         cnt++;
//         p++;
//     }
//     return cnt;
// }


// 指针-指针
// size_t my_strlen(char* p){
//     char* start = p;
//     while(*p){
//         p++;
//     }
//     return p -start;
// }


// // 指针-指针
// int main(){


//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     // 指针-指针就是数组元素的个数
//     printf("%d\n",&arr[9] - &arr[0]);


//     char char_arr[] = "abcdef";

//     // strlen求字符串的长度
//     数组名是首元素的地址
//     // size_t len = strlen(char_arr);

//     size_t len = my_strlen(char_arr);
//     printf("len = %zd\n",len);

//     return 0;
// }

// 指针的关系运算
// 指针的大小运算

// 数组的遍历
// int main(){

//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int* p = arr;

//     int len = sizeof(arr) / sizeof(arr[0]);
    
//     // arr+len，代表的是首元素的地址+len
//     while(p < arr+len){
//         printf("%d ",*p);
//         p++;
//     }

//     return 0;
// }
#include<stdio.h>
// 使用指针来进行对数组的操作


//sizeof(数组名),sizeof中单独放数组名，这里的数组名表示整个数据，sizeof计算的是整个数组的大小
// &arr。这里的数组名表示整个数组，取出的是整个数组的地址
//除了以上两个例外，数组名就是首元素的地址

// int main(){

//     int arr[10] = {0};

//     // 数组名是数组首元素的地址
//     printf("arr = %p\n",arr);
//     printf("&arr[0] = %p\n",&arr[0]);
//     printf("&arr = %p\n",&arr);

//     printf("arr + 1 = %p\n", (arr+1)); //这里加了4个字节
//     printf("&arr[0] + 1 = %p\n", (&arr[0] + 1)); //4个字节

//     // 这里面就是数组指针类型  int(*)[10]
//     printf("&arr + 1 = %p\n",&arr + 1); //0x28转为十进制也就是40个字节 , 也就是说&arr + 1 就是跳过整个数组

//     return 0;
// }


// 使用指针实现数组相关的操作
// int main(){

//     int arr[10] = {0};

//     int* p = arr;

//     // 大小
//     int len = sizeof(arr) / sizeof(arr[0]);

//     // 输入
//     for(int i = 0 ; i < len ; i++ ){
//         scanf("%d",(p+i));
//     }

//     // 输出
//     for(int i = 0; i < len ; i++){


//         // 两种写法
//         // printf("%d ",*(p+i));
//         printf("%d ",*(arr+i));
//     }

//     return 0;
// }


// 这里面的int[] arr接收的就是首元素的地址，也就是int* p
    
// void test(int* p){}
// void test(int arr[]){

//     int len = sizeof(arr) / sizeof(arr[0]);   //8 / 4 = 2
//     printf("传参后的len = %d",len);
// }

// // 一维数组传参的本质
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int len = sizeof(arr) / sizeof(arr[0]); //40 / 4 = 10
//     printf("原len = %d ",len);

//     // 数组名是首元素的地址  
//     // 数组传参传的是数组首元素的地址
//     test(arr);
//     return 0;
// }
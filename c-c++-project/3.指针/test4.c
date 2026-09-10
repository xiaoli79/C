#include<stdio.h>




// 字符指针变量
// int main(){

//     // p指向了字符串首元素的地址,字符串的地址在内存中也是连续的
//     const char* p = "abcdef";
//     printf("%s\n", p);

//     // 遍历
//     while( *p != '\0'){
//         printf("%c",*p);
//         p++;
//     }


//     return 0;
// }



// 数组指针变量
// 存放数组的地址
// int (*p) [5]   *p 代表我p是指针变量,p指向了数组的5个元素,数组的类型是int
// int main(){

//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int(*p)[10] = &arr;


//     for(int i = 0 ; i < 10 ;i++){

//         // p指向了整个数组的地址,如果加1则会跳过整个数组
//         // p = &arr , *p = arr  由此可以看出对p进行解引用,就可以得到数组名,数组名是首元素的地址,然后对数组名进行访问即可.
//         printf("%d ",((*p)[i]));

//     }
//     return 0;

// }



// 二维数组传参的本质就是传的首元素的地址
// 这个首元素的地址就是第一行的地址
void Print(int (* arr)[5],int n,int m){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            // printf("%d ",(*(arr+i))[j]);
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

// 二维数组传参
int main()
{
    int arr[3][5] = {1,1,1,1,1,2,2,2,2,2,6,6,6,6,6};
    Print(arr,3,5);
   
    return 0;
}
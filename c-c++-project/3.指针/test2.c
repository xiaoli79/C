#include<stdio.h>
#include<assert.h>

//const修饰指针变量
// 1.const放在*的左边
// 2.const放在*的右边

// int main(){

//     //const是一个常变量，虽然不能直接修改，但可通过指针来间接修改被const修饰变量的值,但是破坏了本意。
//     // 在c里面是个常变量，但是在c++,const代表是个常量
//     // const int n = 10;
//     // const int m = 66;
//     // n = 100;
//     // printf("%d\n",n);


//     // 间接修改被const修改的值
//     // int* p = &n;
//     // *p=66;
//     // printf("n = %d\n",n);

//     // const放在*号的左边
//     // 不能通过指针变量p来改变*p的内容
//     // 但是p的内容可以改变的,p可以指向其他变量
//     // const int* p = &n; 
//     // // *p = 100; err
//     // p = &m;
//     // printf("%d\n",*p);

//     // const放在*右边
//     // 可以通过指针变量p来改变*p的内容
//     // 但是p的内容可以不能够改变的,p不可以指向其他变量    
//     // int * const p = &n;
//     // *p= 100;
//     // // p = &m; //err
//     // printf("%d\n",*p);


//     // 如果两边都放了const,那么p和p指向的内容都不能够修改了
//     // const int* const p = & n;
//     return 0;
// }


// int* test(){
//     int n = 100;
//     printf("%d\n",n);
//     return &n;
// }



// 野指针
// 野指针就是指针指向的位置是不可知的(随机的 不正确的 没有明确限制的)
// int main(){


//     // 指针没有初始化,指向的位置是随机的,为野指针.
//     int* p;
//     *p = 20;

//     // 解决办法
//     int* p =NULL;
//     if( p != NULL){


//         // ....
//     }


//     // 当指针指向的范围超出数组arr的范围时,p就是野指针
//     int arr[10] = {0};
//     int* p = arr;

//     int i = 0;
//     for(i = 0 ; i<= 11 ; i++){
//         *(p++) = i;
//     }


//     // 因为n是函数中的局部变量，n的空间被释放，p指向的那块位置消失，p也就成了野指针。
//     int* p = test();
//     return 0;

// }


// assert断言,用于判断程序在运行是否符合某个条件，如果符合，继续运行，如果不符合，就会报错终止运行
// int main(){
//     int a = 10;

//     int*p = &a;
//     // p =  NULL;

//     assert(p != NULL);  //断言直接报错



//     return 0;
// }

// 修改my_strlen使其保持安全,避免出现野指针的问题
// size_t my_strlen(const char* p){

//     size_t cnt = 0 ;
//     assert(p);
//     while(*p != '\0'){
//         cnt++;
//         p++;
//     }
//     return cnt;
// }

// int main(){

//     int len = my_strlen("abcdef");
//     printf("len = %d\n",len);
//     return 0;
// }



// x y单独开辟了空间存放a的值和b的值
// 然后这个函数也就是在x，y空间中进行了值的交换,也就是说原来a和b的空间的值没有发生值的交换
void Swap1(int x,int y){
    int z = x;
    x = y;
    y = z;
}


void Swap2(int* pa,int* pb){

    int z = *pa;
    *pa = * pb;
    *pb = z;
}


int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    //传值调用 
    printf("交换前：a=%d , b=%d\n",a,b);
    Swap1(a,b);
    // a和b的内存空间的值没有发生变化
    printf("交换后：a=%d , b=%d\n",a,b);
    // 传址调用
    // printf("交换前：a=%d , b=%d\n",a,b);
    // Swap2(&a,&b);
    // printf("交换后：a=%d , b=%d\n",a,b);

    return 0;
}
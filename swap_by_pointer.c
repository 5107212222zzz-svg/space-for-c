/*由于函数作用域的限制，单纯的输入整数值只是拷贝，而输入地址，指针，让函数
在内部依旧可以根据指针加上解引用找到内存中的值并改变*/
#include <stdio.h>

//声明函数
void swap (int *p,int *q);
int main (void)
{
     int a;
    int b;

    //输入数据
    scanf("%d %d",&a,&b);

    

    //swap函数是一个动作，无返回值
    swap(&a,&b);

    printf("%d %d",a,b);

    return 0;
}

   

    





void swap (int *p,int *q)
{
     int temp;
    temp=*p;

    *p=*q;

    *q=temp;

}


    
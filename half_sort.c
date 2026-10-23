#include <stdio.h>
int main ()
{
    //提示用户输入
    printf("Please enter 4 numbers\n");

    int num[4];
//读取四个数
    for (int i=0;i<4;i++)

    {
        scanf("%d",&num[i]);

        printf("get a %d\n",num[i]);
    }

    //通过逐个换位，依次排列
    for (int i=0;i<3;i++)

    {

        for(int j=i+1;j<4;j++)

        {
            int x=0;
            if(num[i]>num[j])
            {
                //比大小换位
                x=num[i];
                num[i]=num[j];
                num[j]=x;
                
            }
        }
    }

    //输出答案
    printf("%d<%d<%d<%d",num[0],num[1],num[2],num[3]);



}
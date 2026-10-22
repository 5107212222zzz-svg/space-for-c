#include <stdio.h>

  float average (int length,int scores[]);
int pass(int times,int scores[]);
int exll(int times,int scores[]);

int highest(int length,int scores[]);
int lowest(int length ,int scores[]);
int main(){

int n=0;

//输入学生人数
printf("Please enter the mumber of students ");

scanf ("%d", &n);

int scores[n];

//输入成绩
for (int i=0;i<n;i++)
{
    scanf("%i",&scores[i]);


    
}

//输出结果
printf("The average is %f\n%d students is passed\n%i student is exllent\nThe highest is %i\nThe lowest is %i\n",average(n,scores),pass(n,scores),exll(n,scores),highest(n,scores),lowest(n,scores));
}



    

//求平均值
float average (int length,int scores[])
{    int i;
    float sum=0;
    for(i=0,sum=0;i<length;i++)
    {
        sum+=scores[i];
    }

    return sum/length;
}
//及格人数
int pass(int times,int scores[])

{int num=0;int i;
    for (i=0;i<times;i++)
    {
        if (scores[i]>=60)
        {
            num++;
        }
    }

    return num;
}
//优秀人数
int exll(int times,int scores[])

{int num=0;
    int i;
    for (i=0;i<times;i++)
    {
        if (scores[i]>=90)
        {
            num++;
        }
    }

    return num;
}
//最高分
int highest(int length,int scores[])

{  
    int i;int higher=scores[0];

    for (i=0;i<(length-1);i++)
    {
        if(higher<scores[i+1])
        {
            higher=scores[i+1];
        }
    }

    return higher;
}

//最低分
int lowest(int length,int scores[])

{int lower=scores[0]   ;
    int i;

    for (i=0;i<(length-1);i++)
    {
        if(lower>scores[i+1])
        {
            lower=scores[i+1];
        }
    }

    return lower;
}



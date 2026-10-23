#include <stdio.h>
#include <string.h>

int main ()
{
   //定义结构体，person是类型名，like char int
    typedef struct {
       char  name[10] ;
       char  number [10];
    } person;

    
//定义数组
    person people[101];

    for (int i=0 ;i<101;i++)

    {
        //输入名字和数字
         printf ("Plesse enter all names(less than 100) and numbers\n");

    scanf("%s %s",people[i].name,people[i].number);

      char str[]="over";

      //检查结束条件，输入两个over
        if (strcmp(people[i].name,str)==0){
        break;

        //直接结束程序
        return 0;

        //返回输入值，验证输入
    printf("Your name is %s  and your number is %s\n",people[i].name,people[i].number);

  


    }
      }



}
/*读取输入字符的总类与个数，难点在于读取空格
有意思的时不管可以按ascll值分类，也可以直接按‘a’<word(i),这样来来看，interesting
而且读取字符的时候，最后的回车换行也会被读进去，如果数组还没有满的话*/




#include <stdio.h>
#include<string.h>
int main(void){
//定义数量变量
    int lowercase=0;
    int uppercase=0;
    int num=0;
    int space=0;
    int others=0;
//提示用户，读取字符串，并计数，方便后续循环
    char word[102];
     printf("Please enter some chars less than 100\n");
    fgets(word,sizeof(word),stdin);
    int n=strlen(word);
     
    while(n>100)
    {
        printf("Please enter some chars less than 100\n");
    fgets(word,sizeof(word),stdin);
    }
    
    
//循环加条件计数
    for(int i=0;i<n;i++)

    {
        if (word[i]<91&&word[i]>64)
        {
            uppercase++;
        }

        else if(word[i]>96&&word[i]<123)
        {
            lowercase++;
        }

        else if (word[i]==32)
        {
            space++;
        }

        else if (word[i]>47&&word[i]<58)
        {
            num++;
        }

        else {
            others++;
        }
    }
    printf("There is %d lowercase\nThere is %d uppercase\nTHere is %d space\nThere is %d number\nThere is %d other char",lowercase ,uppercase ,space,num,others-1);
}

#include <stdio.h>
#include<string.h>
int main(void){

    int lowercase=0;
    int uppercase=0;
    int num=0;
    int space=0;
    int others=0;

    char word[102];
     printf("Please enter some chars less than 100\n");
    fgets(word,sizeof(word),stdin);
    int n=strlen(word);
     
    while(n>100)
    {
        printf("Please enter some chars less than 100\n");
    fgets(word,sizeof(word),stdin);
    }
    
    

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

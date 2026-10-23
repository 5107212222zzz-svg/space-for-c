#include <stdio.h>
int main(int argc,char *argv[])
{
    if (argc!=3)
    {
        printf("Please enter two chars \n");

        return 1;
    }
    printf("U have entered %s %s ",argv[1],argv[2]);


    return 0;
}
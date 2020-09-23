
#include <stdio.h>
#include <conio.h>
void main()
{
    int per=0;
    printf("enter the number\n");
    scanf("%d",&per);
    if(per > 80)
    {
        printf("A grade");
    }
    else if(per >= 75)
    {
        printf("B grade");
    }
    else if(per >= 60)
    {
       printf("C grade");
    }
    else if(per >=45)
    {
        printf(" D grade");
    }
    else{
        printf("FAIL");
    }

}


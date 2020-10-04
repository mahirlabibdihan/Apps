#include<windows.h>
#include<stdio.h>
int hour,minute,second;
void main()
{
    system("mode con: lines=3 cols=27");

    while(1)
    {
        printf("\n\t ");
        scanf("%d",&hour);
        system("cls");
        if(hour<1000) break;
    }

    while(1)
    {
        printf("\n\t%3d:",hour);
        scanf("%d",&minute);
        system("cls");
        if(minute<60) break;
    }

    while(1)
    {
        printf("\n\t%3d:%02d:",hour,minute);
        scanf("%d",&second);
        system("cls");
        if(second<60) break;
    }

    printf("\n\t");
    for(; hour>-1 ; hour--,minute=59)
        for(; minute>-1; minute--,second=59)
            for(; second>-1; second--)
            {
                printf("%3d:%02d:%02d",hour,minute,second);
                printf("\b\b\b\b\b\b\b\b\b"); Sleep(1000);
            }

    printf("TIME OVER");
    char c; scanf("%c",c);
}

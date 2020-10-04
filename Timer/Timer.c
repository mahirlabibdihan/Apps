#include<windows.h>
#include<stdio.h>
void main()
{
    system("mode con: lines=3 cols=27");

    int hour,minute,second;

    printf("\tHour : ");
    scanf("%d",&hour);

    printf("      Minute : ");
    scanf("%d",&minute);

    printf("      Second : ");
    scanf("%d",&second);

    system("cls");

    printf("\n\t");
    for(;hour>-1 ; hour--,minute=59)
        for(; minute>-1; minute--,second=59)
            for(; second>-1; second--)
            {
                printf(" %02d:%02d:%02d",hour,minute,second);

                printf("\b\b\b\b\b\b\b\b\b");
                Sleep(1000);
            }

    printf("TIME OVER");
    char c;scanf("%c",c);

}

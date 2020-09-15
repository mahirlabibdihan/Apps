#include <stdio.h>
#include <windows.h>
#include <conio.h>

void gotoxy(int x, int y)
{COORD c;c.X=x;c.Y=y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);}

unsigned long long intconvert(unsigned long long n,int from,int to)
{
	unsigned long long i,a,c=n;
	
	for(i=1,a=0;c!=0;i*=from) 
		{
			a+=(c%to)*i;
	        c/=to;
	    }
   
	return a;
}

long long fracconvert(double n,int from,int to)
{
	 double j,d=n;   
         long long b; 
	 for(j=1,b=0;d!=0&j<12;j++) 
		{   
			b=(b*from)+(long long)d;
			d=(d-(long long)d)*to;
		}
	return b;
}

int main()
{
	system("mode con: lines=22 cols=58");

    
    while(1)
	{
	system("cls");
        char c;
	int from,to; double n;
	long long a,b;
    
        gotoxy(10,1);printf("DECIMAL-BINARY-OCTAL CONVERTER");
        gotoxy(8,2);printf("----------------------------------");
	gotoxy(1,4);printf("(2->Binary , 8->Octal , 10->Decimal) \n Base of the number to be converted -> ");
        gotoxy(39,6);printf("----");
	gotoxy(40,5);scanf("%d",&from);

	gotoxy(1,9);  printf("Enter the number : ");
	gotoxy(20,7); printf(" _________________________________");
	gotoxy(20,8); printf("|                                 |");
        gotoxy(20,9); printf("|                                 |");
        gotoxy(20,10);printf("|_________________________________|");
	gotoxy(22,9); scanf("%lf",&n);

	gotoxy(1,12);printf("Base of the number converted to -> ");
	gotoxy(36,13);printf("----");
	gotoxy(37,12);scanf("%d",&to);

	gotoxy(1,16); printf("Converted number : ");
	gotoxy(20,14);printf(" _________________________________");
	gotoxy(20,15);printf("|                                 |");
        gotoxy(20,16);printf("|                                 |");
        gotoxy(20,17);printf("|_________________________________|");
	gotoxy(22,16);printf("%20llu.%lld",intconvert(n,from,to),fracconvert(n-(long long)n,from,to));
	gotoxy(1,19);printf("Press x to exit.... "); c=getch();
	if(c=='x') break;
    }
}

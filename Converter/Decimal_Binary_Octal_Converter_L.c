#include <stdio.h>
#include <windows.h>

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
	system("mode con: lines=20 cols=58");

    int end=1;
    system("cls");
	int from,to; double n;
	long long a,b;
    
    gotoxy(10,1);printf("DECIMAL-BINARY-OCTAL CONVERTER");
	gotoxy(1,3);printf("(2->Binary , 8->Octal , 10->Decimal) \n Base of the number to be converted -> ");
	scanf("%d",&from);

	gotoxy(1,7);  printf("Enter the number : ");
	gotoxy(20,5); printf(" _________________________________");
	gotoxy(20,6); printf("|                                 |");
    gotoxy(20,7); printf("|                                 |");
    gotoxy(20,8); printf("|_________________________________|");
	gotoxy(22,7); scanf("%lf",&n);

	gotoxy(1,10);printf("Base of the number converted to -> ");
	scanf("%d",&to);

	gotoxy(1,13); printf("Converted number : ");
	gotoxy(20,11);printf(" _________________________________");
	gotoxy(20,12);printf("|                                 |");
    gotoxy(20,13);printf("|                                 |");
    gotoxy(20,14);printf("|_________________________________|");
	gotoxy(22,13);printf("%20llu.%lld",intconvert(n,from,to),fracconvert(n-(long long)n,from,to));
	gotoxy(20,15);printf("\n");
}
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define ll long long
#define ull unsigned long long
void gotoxy(int x, int y)
{COORD c;c.X=x;c.Y=y;SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);}

ull intconvert(ull n,int from,int to)
{
	ull i,a,c=n;
	
	for(i=1,a=0;c!=0;i*=from) 
		{
			a+=(c%to)*i;
	        c/=to;
	    }
   
	return a;
}

ll fracconvert(double n,int from,int to)
{
	 double j,d=n;   
     ll b; 
	 for(j=1,b=0;d!=0&j<12;j++) 
		{   
			b=(b*from)+(ll)d;
			d=(d-(ll)d)*to;
		}
	return b;
}

char base[11][8]={"","","Binary","","","","","","Octal","","Decimal"};
int main()
{
	system("mode con: lines=22 cols=58");
    

    
    while(1)
	{
	system("cls");
	printf(" --------------------------------------------------------\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf("|                                                        |\n");
	printf(" --------------------------------------------------------");

    char c;
	int from,to; double n;
	ll a,b;
    
    gotoxy(10,1);printf("DECIMAL-BINARY-OCTAL CONVERTER");
    gotoxy(8,2);printf("----------------------------------");
	gotoxy(1,4);printf("Base of the input number -> ");
    gotoxy(28,5);printf("----");
	gotoxy(29,4);scanf("%d",&from);


	gotoxy(1,8); if(from==2|from==8|from==10) printf("%s",base[from]); else continue; printf(" number : ");
	gotoxy(18,6); printf(" __________________");
	gotoxy(18,7); printf("|                  |");
    gotoxy(18,8); printf("|                  |");
    gotoxy(18,9); printf("|__________________|");
	gotoxy(20,8); scanf("%lf",&n);

	gotoxy(1,13);printf("Base of the output number -> ");
	gotoxy(29,14);printf("----");
	gotoxy(30,13);scanf("%d",&to);

	gotoxy(1,17); if(to==2|to==8|to==10) printf("%s",base[to]); else continue;printf(" number : ");
	gotoxy(18,15);printf(" _________________________________");
	gotoxy(18,16);printf("|                                 |");
    gotoxy(18,17);printf("|                                 |");
    gotoxy(18,18);printf("|_________________________________|");
	gotoxy(20 ,17);
	if(from==10&to==2&n>=1048576) printf("  Number too large to convert");
    else 
    {
    	ll a=fracconvert(n-(ll)n,from,to);
    	ull b=intconvert(n,from,to);

    	if(a>0) printf("%20llu.%lld",b,a);
    	else printf("%31llu",b);
    }
	gotoxy(1,20);printf("Press x to exit.... "); c=getch();
	if(c=='x') break;
    }
}
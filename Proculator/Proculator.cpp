#include<bits/stdc++.h>
#include <windows.h>
#include <time.h>
#include<conio.h>
using namespace std;
#define gcd __gcd
#define lcm(a,b) a*b/gcd(a,b)
#define ll long long
#define pi 3.14159265

/*
 cout<<"█████████████████████████████████████████████████"<<endl;
 cout<<"██▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀██"<<endl;
 cout<<"██                                             ██"<<endl;
 cout<<"██                                             ██"<<endl;
 cout<<"██                                             ██"<<endl;
 cout<<"██                                             ██"<<endl;
 cout<<"██▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄██"<<endl;
 cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█  BIN  █  OCT  █  HEX  █  DEC  █  DEG  █  RAD  █"<<endl;
 cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█  nPr  █  nCr  █  EXP  █  MOD  █  log  █  POW  █"<<endl;
 cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█      1      █      2      █     3     █   +   █"<<endl;
 cout<<"█             █             █           █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█      4      █      5      █     6     █   _   █"<<endl;
 cout<<"█             █             █           █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█      7      █      8      █     9     █   X   █"<<endl;
 cout<<"█             █             █           █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█      0      █   |x|   █   x!  █  √x   █   %   █"<<endl;
 cout<<"█             █         █       █       █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀█▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<"█   &   █   ||   █  <<  █  >>   █   π   █   =   █"<<endl;
 cout<<"█       █        █      █       █       █       █"<<endl;
 cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀█"<<endl;
 cout<<"█  GCD  █  LCM  █     PRIME    █   π   █  EXIT  █"<<endl;
 cout<<"█       █       █              █       █        █"<<endl;
 cout<<"▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀"<<endl;
 */
void delay(unsigned int ms)
{
    clock_t goal = ms + clock();
    while (goal > clock());
}
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x; coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

double decoct(ll n) 
{ 
    vector<int> oct; double s=0;
  
    while (n != 0) 
    { 
        oct.push_back(n % 8); 
        n = n / 8; 
    } 
 cout<<s;

    for(int i=oct.size()-1;i>-1;i--)
      {
        s*=10;s+=oct[i];
      }  



      return s;
} 

double decbin(ll n) 
{ 
    vector<int> bin; ll s=0;
  
    while (n != 0) 
    { 
        bin.push_back(n % 2); 
        n = n / 2; 
    } 

    for(int i=bin.size()-1;i>-1;i--)
      {
        s*=10;s+=bin[i];
      } 

      return s; 
} 

double bindec(string x) 
{ 
    double dec= 0; 
    int base = 1,fp,i,j; 

    for(i=0;i<x.size();i++)
      if(x[i]=='.') break;
    fp=i;

    for(i=fp-1,j=0;j<x.size();i--,j++)
      {if(x[j]!='.')dec+=(x[j]-'0')*pow(2,i);
      else i++;}
    return dec; 
} 

double fact(double n)
{
    double c=1,i;for(i=2;i<n+1;i++) c*=i;return c;
}

double npr(double n,double r)
{
  double s=1,i;for(i=n-r+1;i<n+1;i++)s*=i;return s;
}

double ncr(double n,double r)
{
  double  s=1,i;if(r>n-r)r=n-r;
  for(i=1;i<r+1;i++)s=(s*(n-r+i))/i; return s;

}
double strdbl(string x)
{
   int n=x.size();
   double a=10,b=1,s=0,c; bool fl=false;
   for(int i=0;i<n;i++)
   {
      if(x[i]=='.') {fl=true; a=1;  continue;}if(fl) b/=10;
      s*=a;x[i]-='0';c=x[i]*b;s+=c;
   }
   return s;
}

bool prime(long long n)
{
  if(n<=1)return 0;if(n<=3)return 1;if(n%2==0|n%3==0)return 0;
for(int i=5;i*i<=n;i=i+6)if((n%i==0)|(n%(i+2)==0))return 0;return 1;
}  

bool EXIT;
char a=219,b=220,c=223,d=227,e=251;
unsigned char in,sign=' ';
string num;

double ans=0;
void setup()
{
 cout<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<a<<endl;// cout<<"█████████████████████████████████████████████████"<<endl;
 cout<<a<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<a<<endl;// cout<<"██▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀██"<<endl;
 cout<<a<<a<<"                                             "<<a<<a<<endl;// cout<<"██                                             ██"<<endl;
 cout<<a<<a<<"                                             "<<a<<a<<endl;// cout<<"██                                             ██"<<endl;
 cout<<a<<a<<"                                             "<<a<<a<<endl;// cout<<"██                                             ██"<<endl;
 cout<<a<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<a<<a<<endl;// cout<<"██▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄██"<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;// cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<a<<"_ D>B  "<<a<<"_ D>O  "<<a<<"_ B>D  "<<a<<"_ GCD  "<<a<<"_ LCM  "<<a<<"_PRIME "<<a<<endl;//cout<<"█  BIN  █  OCT  █  HEX  █  DEC  █  DEG  █  RAD  █"<<endl;
 cout<<a<<"b|     "<<a<<"o|     "<<a<<"h|     "<<a<<"G|     "<<a<<"L|     "<<a<<"P|     "<<a<<endl;//cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;// cout<<"█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<a<<"_ nPr  "<<a<<"_ nCr  "<<a<<"_ EXP  "<<a<<"_ MOD  "<<a<<"_ log  "<<a<<"_ POW  "<<a<<endl;//cout<<"█  nPr  █  nCr  █  EXP  █  MOD  █  log  █  POW  █"<<endl;
 cout<<a<<"p|     "<<a<<"C|     "<<a<<"e|     "<<a<<"%|     "<<a<<"l|     "<<a<<"^|     "<<a<<endl;//cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;// cout<<"█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀▀▀▀▀█▀▀▀▀▀▀▀█"<<endl;
 cout<<a<<"      1      "<<a<<"      2      "<<a<<"     3     "<<a<<"   +   "<<a<<endl;
 cout<<a<<"             "<<a<<"             "<<a<<"           "<<a<<"       "<<a<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;
 cout<<a<<"      4      "<<a<<"      5      "<<a<<"     6     "<<a<<"   -   "<<a<<endl;
 cout<<a<<"             "<<a<<"             "<<a<<"           "<<a<<"       "<<a<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;
 cout<<a<<"      7      "<<a<<"      8      "<<a<<"     9     "<<a<<"   X   "<<a<<endl;
 cout<<a<<"             "<<a<<"             "<<a<<"           "<<a<<"       "<<a<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;
 cout<<a<<"      0      "<<a<<"_    "<<d<<"   "<<a<<"_  x!  "<<a<<"_ "<<e<<"x   "<<a<<"_  %   "<<a<<endl;
 cout<<a<<"             "<<a<<"p|       "<<a<<"!|     "<<a<<"s|     "<<a<<"/|     "<<a<<endl;
 cout<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<c<<c<<c<<c<<c<<c<<c<<a<<endl;//cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<a<<"   &   "<<a<<"   ||   "<<a<<"_ <<  "<<a<<"_ >>   "<<a<<"       "<<a<<"   =   "<<a<<endl;
 cout<<a<<"       "<<a<<"        "<<a<<"<|    "<<a<<">|     "<<a<<"       "<<a<<"       "<<a<<endl;//cout<<"█       █       █       █       █       █       █"<<endl;
 cout<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<c<<endl;
}

void draw()
{
   gotoxy(2,2);cout<<"                                             ";
   gotoxy(46-num.size()-1,2); cout<<sign<<num;  
}

void input()
{
   in=getch();
}

void logic()
{
   if((in>47&in<59)|in=='.') {num+=in; if(sign=='_') sign=' ';}
   else if(in=='p')  num="3.14159265";
   else
   {
      switch(sign)
      { 
         case 'X': ans*=strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '+': ans+=strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '-': ans-=strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '/': ans/=strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'o': ans=decoct(strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'b': ans=decbin(strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'd': ans=bindec(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '<': ans=(ll)ans<<(ll)strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '>': ans=(ll)ans>>(ll)strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;         

         case 'e': ans=exp(strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'l': ans=log(strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '%': ans=(ll)ans%(ll)strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'P': ans=npr(ans,strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'C': ans=ncr(ans,strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'G': ans=gcd((ll)ans,(ll)strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'L': ans=lcm((ll)ans,(ll)strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '|': ans=(ll)ans|(ll)strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;
         
         case '&': ans=(ll)ans&(ll)strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 251: ans+=sqrt(strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '^': ans=pow(ans,strdbl(num)); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case '!': ans=fact(strdbl(num));sign=' '; gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans;break;

         case 'p': gotoxy(2,4);(prime(strdbl(num)))?cout<<"                                       PRIME":
         cout<<"                                   NOT PRIME";break;

         case '_': if(num.size()>0) num.pop_back();else sign=' '; break;

         default : if(in!=8)ans=strdbl(num); gotoxy(2,4);cout<<setfill(' ')<<setw(44)<<setprecision(44)<<ans; break;
      }

     switch(in)
     {
       case '*': num.clear(); sign='X'; break;
       case '+': num.clear(); sign='+'; break;
       case '-': num.clear(); sign='-'; break;
       case '/': num.clear(); sign='/'; break;
       case '=': num.clear(); sign=' '; break;
       case '%': num.clear(); sign='%'; break;
       case 's': num.clear(); sign=251; break;
       case '^': num.clear(); sign='^'; break;
       case '!': num.clear(); sign='!'; break;
       case '#': num.clear(); sign='#'; break;
       case '|': num.clear(); sign='|'; break;
       case '&': num.clear(); sign='&'; break;
       case 'G': num.clear(); sign='G'; break;
       case 'L': num.clear(); sign='L'; break;
       case 'N': num.clear(); sign='N'; break;
       case 'P': num.clear(); sign='P'; break;
       case 'l': num.clear(); sign='l'; break;
       case 'e': num.clear(); sign='e'; break;
       case '>': num.clear(); sign='>'; break;
       case '<': num.clear(); sign='<'; break;
       case 'o': num.clear(); sign='o'; break;
       case 'b': num.clear(); sign='b'; break;
       case 'd': num.clear(); sign='d'; break;
       case 8: sign='_'; break;
       case 27: EXIT=true; break;
     }
   }
}



int main()
{
  system("mode con: lines=29 cols=50");
  setup();
   while(!EXIT)
   {
     input();
     logic();
     draw();  
     delay(50);
   }
   system("cls");
}
#include<conio.h>
#include<iomanip.h>
#include<iostream.h>
int main()
{
int st;
static int jam=21;
clrscr();
cout<<setw(10)<<"\n\t\t\tNUMBER OF MATCHSTICKS ARE 21";
cout<<setw(5)<<"\n\t Whosever is forced to pick the last stick will loose.....";
cout<<"\n\n\tPick your first stick :";
cin>>st;
while(jam!=1)
{
if(st==4)
{
cout<<"\n\tSticks left:"<<(jam-st)  ;
cout<<"\n\n\tComputer picks:1";
jam-=5;
}
else if(st==3)
{
cout<<"\n\tSticks left:"<<(jam-st);
cout<<"\n\n\tComputer picks:2";
jam-=5;
}
else if(st==2)
{
cout<<"\n\tSticks left:"<<(jam-st);
cout<<"\n\n\tComputer picks:3";
jam-=5;
}
else if(st==1)
{
cout<<"\n\tSticks left:"<<(jam-st);
cout<<"\n\n\tComputer picks:4";
jam-=5;
}
else
{
cout<<setw(15)<<"\n\t\tPLEASE READ CAREFULLY !!";
break;
}
cout<<"\n\tSticks left:"<<jam;
if(jam!=1)
{
cout<<"\n\n\tPick your next stick :";
cin>>st;
}
};
if(jam==1)
cout<<"\n\n\t\tOH NOO!! you loose";
getch();
return 0;
}


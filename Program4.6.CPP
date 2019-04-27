#include <iostream.h>
#include <conio.h>
void main ()
{
int bil;
clrscr();
cout<<"masukkan bilangan:";
cin>>bil;
switch(bil)
{
case 1 : cout<<"anda memasukkan bil satu";
break;
case 2 : cout<<"anda memasukkan bil dua";
break;
case 3 : cout<<"anda memasukkan bil tiga";
break;
default :cout<<"anda memasukkan bil 1,2,dan 3";
break;
}
getch();
}

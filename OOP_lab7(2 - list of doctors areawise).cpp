/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>

#include<string.h>

using namespace std;

class Doctor

{

public:

char name[30];

char area[10];

void read()

{

cout<<"Name: ";

cin>>name;

cout<<"Area: ";

cin>>area;

}

int operator <(Doctor d)

{

if(strcmp(name,d.name)>0)

return 1;

else

return 0;

}

void displaylist()

{

cout<<name<<" "<<area<<endl;

}

};

int main()

{

Doctor d1[2];

Doctor temp;

for(int i=0;i<2;i++)

{

d1[i].read();

}

for(int i = 0; i <2; i++)

{

for(int j = 0; j <1-i; j++)

{

if(d1[j]<d1[j+1])

{

temp=d1[j];

d1[j]=d1[j+1];

d1[j+1]=temp;

}

}

}

for(int i=0;i<2;i++)

{

d1[i].displaylist();

}

}
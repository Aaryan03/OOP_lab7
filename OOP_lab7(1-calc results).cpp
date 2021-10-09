/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class External1;

class Internal1

{

int math, oop, se, ds;

public:

Internal1()

{

}

Internal1(int m, int o, int s, int d)

{

math = m;

oop = o;

se = s;

ds = d;

}

friend void sum(Internal1 internal, External1 external);

void printData()

{

cout << math << " " << oop << " " << se << " " << ds << endl;

}

friend int operator+(Internal1, External1);

};

class External1

{

int math, oop, se, ds;

public:

External1(int m, int o, int s, int d)

{

math = m;

oop = o;

se = s;

ds = d;

}

friend Internal1 operator+(External1);

friend int operator+(Internal1, External1);

};

int operator+(Internal1 inte, External1 ext)

{

Internal1 total;

int flag = 0;

total.math = inte.math + ext.math;

total.oop = inte.oop + ext.oop;

total.se = inte.se + ext.se;

total.ds = inte.ds + ext.ds;

total.printData();

if (total.math < 50 || total.oop < 50 || total.se < 50 || total.ds < 50)

{

cout << "Fail";

flag = 1;

}

cout << "Marks:" << total.math + total.oop + total.se + total.ds << endl;

if (flag == 0)

{

cout << "Percentage:" << float(total.math + total.oop + total.se + total.ds) * 0.25;

}

return 0;

}

int main()

{

Internal1 inte(35,36,48,43);

External1 ext(45,38,50,43);

inte + ext;

return 0;

}

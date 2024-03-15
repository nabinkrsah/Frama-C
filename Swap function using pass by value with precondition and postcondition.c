
//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
#include<limits.h>
/*@
requires INT_MIN<=a<=INT_MAX && INT_MIN<=b<=INT_MAX;
assigns \nothing;
ensures a==\old(b) && b==\old(a);

*/
void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int m=10;
//@ assert m==10;
int n=30;
//@ assert n==30;
swap (m,n);

//@ assert (m==30 && n==10);
}






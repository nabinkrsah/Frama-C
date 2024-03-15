//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129


#include<stdio.h>
#include<limits.h>

/*@
requires n>0;
ensures \result==n*(n+1)/2;
*/


int add(int n)
{
int i=1;
int s=0;
/*@
loop invariant s==(i-1)*i/2;
loop invariant 1<=i<=n+1;

loop assigns i,s;
loop variant n-i;
*/
while(i<=n)
{
s=s+i;
i++;
}
return s;
//@ assert i==10;

}
int main()
{
int k;
k=add(5);
//@ assert k==15;

}

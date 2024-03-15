#include<stdio.h>
/*@ 
requires n>0;
ensures \result==(3*(n*(n+1)/2));
*/
int dsum(int n)
{
int i=1;
int sum=0;
/*@
loop invariant 1<=i<=n+1;
loop invariant sum==(3*((i-1)*i/2));
loop assigns sum,i;
loop variant n-i;

*/
for(i=1;i<=n;i++)
{
sum=sum+3*i;
}
return sum;
}
int main()
{
int k=dsum(3);
//@ assert k==18;

}

//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
#include<limits.h>
/*@ requires -100000<=n<=100000;
ensures \result==n+1;
*/
int inc(int n)
{
return n+1;

}
void main()
{
int a=10;
int k=inc(a);
//@ assert k==11;


}


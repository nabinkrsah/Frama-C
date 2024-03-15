//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
#include<limits.h>
/*@
requires INT_MIN<a<=INT_MAX;
assigns \nothing;
ensures (a%2==0) ==> \result==0
|| ( a%3==0) ==> \result==0;
ensures (a%2!=0) ==> \result==1
|| (a%3!=0) ==> \result==1;
*/

int div(int a)
{
if(a%2==0 || a%3==0)
return 0;
else 
return 1;
}

int main()
{
int m=div(6);
//@ assert m==0;
}


//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
#include<limits.h>
/*@ 
requires INT_MIN<=a<=INT_MAX;
requires INT_MIN<=b<=INT_MAX;
assigns \nothing;
ensures \result==a && \result>b
|| \result==b && \result>a
|| \result==a && \result==b;
*/
int max(int a,int b)
{
return a>b?a:b;
}
int main()
{
int k=max(55,66);
//@assert k==66;
int m=max(89,66);
//@assert m==89;
}

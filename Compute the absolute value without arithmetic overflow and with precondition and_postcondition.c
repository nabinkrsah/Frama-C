//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
#include<limits.h>
/*@
requires INT_MIN<val;
assigns \nothing;
ensures \result>=0;
ensures (val>=0 ==> \result==val) &&
        (val<0 ==> \result==-val);
*/
int abs (int val)
{
if(val<0)
{
return -val;
}
else
{
return val;
}
}
int main()
{
int k=abs(33);
//@assert k==33;
int m=abs(-88);
//@assert m==88;
}


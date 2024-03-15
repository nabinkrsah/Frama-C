//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<stdio.h>
/*@
requires n>0;
ensures \result==n*(n+1)/2;
*/

int sum(int n) {
int sum = 0;
int i;
/*@
loop invariant sum==(i-1)*i/2;
loop invariant 1<=i<=n+1;
loop assigns sum,i;
loop variant n-i;
*/
for(i = 1; i <= n; ++i) {
	
sum=sum+i;
}	
return sum;
}

void main() {
int a = 5;
//@assert a==5;
int s = sum(a);
//@assert s==15;
}

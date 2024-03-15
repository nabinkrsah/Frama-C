//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129


#include<stdio.h>
/*@
requires n>0;
ensures \result==n*(n+1)*(2*n+1)/6;
*/

int sum_of_squares(int n)
 {
int sum = 0;
int i = 1;
/*@
	
loop invariant 1<=i<=n+1;
loop invariant sum==(i-1)*(i)*(2*i-1)/6;
loop assigns sum,i;
loop variant n-i;
*/
for(i=1;i<=n;i++) {
sum=sum+i*i;

}	
return sum;
}

void main() {
int a = 6;
//@assert a==6;
int s = sum_of_squares(a);
//@assert s==91;
}

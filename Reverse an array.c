
//Name:Nabin Kumar Sah
//Reg no;-BL.EN.U4CSE21129
// REVERSE AN ARRAY ELEMENT

#include<stdio.h>

/*@
	requires n>=0 && \valid_read(a+(0..n-1));
	assigns b[0..n-1];
	ensures \forall integer m;0<=m<n==>a[n-m-1]==\result[m]; 	
*/

int* reverse(int a[], int n, int b[]) {
	int i ;
	/*@
		loop invariant 0<=i<=n;
		loop invariant \forall integer m;0<=m<i==>a[n-m-1]==b[m];
		loop assigns b[0..n-1],i;
		loop variant n-i;
	*/
	for(i=0;i<n;i++) {
		b[i]=a[n-(i+1)];
		
	}
	return b;
}

void main() {
	int arr1[] = {4,5,2,6,8};
	int arr2[10];
	int* c = reverse(arr1, 5, arr2);
}


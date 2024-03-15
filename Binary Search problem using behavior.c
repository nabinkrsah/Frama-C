
//Name:Nabin kumar sah
//reg no:-BL.EN.U4CSE21129
// BINARY SEARCH USING BEHAVIOUR



#include<stdio.h>
/*@
predicate sorted(int* a, int length)=\forall integer i,j;0<=i<=j<length==>a[i]<=a[j];
*/

/*@
	requires n>=0&&\valid_read(a+(0..n-1));
  	requires sorted(a,n);
	assigns \nothing;
	behavior exists:
		assumes \exists integer i;0<=i<n&&a[i]==v;			
		ensures 0<=\result<n&&a[\result]==v;
	behavior not_exists:
		assumes \forall integer i;0<=i<n==>a[i]!=v;
		ensures \result==-1;
	complete behaviors;
	disjoint behaviors;
*/

int binary_search(int* a, int n, int v) {
	int l=0,u=n-1;
	/*@
		loop invariant 0<=l<=u+1;
		loop invariant u<n;
		loop assigns l,u;
		loop invariant \forall integer k;0<=k<l==>a[k]<v;
		loop invariant \forall integer k;u<k<n==>a[k]>v;
		loop variant u-l;
	*/
	while(l<=u) {
		int m=l+(u-l)/2;
		if(a[m]==v) return m;
		else if(a[m]<v) l=m+1;
		else u=m-1;
	}
	return -1;
}

void main() {
	int a[] = {1, 9, 3, 4, 5};
	int res = binary_search(a, 5, 5);
	//@assert res==4;
}



//Name:-Nabin Kumar Sah
//reg no:- BL.EN.U4CSE21129
// BUBBLE SORT

#include<limits.h>
/*@
 requires 0<n<INT_MAX;
 requires \valid(arr+(0..n-1));
 ensures \forall integer i;
 0<=i<n-1 ==> arr[n-1]>=arr[i];
*/
void BubbleSort(int arr[],int n)
{
 /*@
 loop invariant \forall integer x;0<=x<=i ==> arr[x]<=arr[i];
 loop invariant 0<=i<=n-1;
 loop assigns i,arr[0..n-1];
 loop variant n-1-i;
 */
 for(int i=0;i<n-1;i++)
 {
 if(arr[i]>arr[i+1])
 {
 int temp = arr[i];
 arr[i] = arr[i+1];
 arr[i+1] = temp;
 }
 }
}
int main()
{
int len=5;
int a[]={4,6,2,88,22};
}


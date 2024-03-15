#include<limits.h>
/*@
 requires 0<n<INT_MAX;
 requires \valid(arr+(0..n-1));
 ensures \forall integer i,j;
 0<=j<i<n ==> arr[j]<=arr[i];
*/
void SelectionSort(int arr[],int n)
{
 int i,j,temp;
 /*@
 loop invariant \forall integer p,q;
 0<=p<=q<n ==> arr[p]<=arr[q];
 loop invariant 0<=i<=n;
 loop assigns temp,i,j,arr[0..n-1];
 loop variant n-i;
 */
 for(i=0;i<n;i++)
 {
 /*@
 loop invariant \forall integer p;
 i+1<=p<n ==> arr[p]<=arr[n];
 loop invariant i+1<=j<=n;
 loop assigns temp,j,arr[0..n-1];
 loop variant n-j;
 */
 for(j=i+1;j<n;j++)
 {
 if(arr[i]>arr[j])
 {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = arr[i];
 }
 }
 }
}

int main()
{
int a=5
int arr[]={4,5,6,8,3}

}


//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129
//maximum eloement in an array

#include<limits.h>
/*@
 requires 0<n<INT_MAX;
 requires \valid_read(arr+(0..n-1));
 ensures \forall integer i;
 0<=i<n ==> \result>=arr[i];
*/
int Max_in_Array(int arr[],int n)
{
 int max=arr[0];
 /*@
 loop invariant \forall integer i;
 0<=i<j ==> max>=arr[i];
 loop invariant 0<=j<=n;
 loop assigns j,max; 
 loop variant n-j; 
 */
 for(int j=0;j<n;j++)
 {
 if(arr[j]>max)
 {
 max=arr[j];
 }
 }
 return max;
}
int main()
{
int n=5;
int arr[]={50,44,33,2,88};
int k=Max_in_Array(arr,n);


}

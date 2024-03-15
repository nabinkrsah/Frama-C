
//Name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129
// SEARCH AND REPLACE THE ELEMENT


#include<stddef.h>
/*@
requires \valid(array+(0 .. length-1));
assigns array[0 .. length-1];
ensures \forall size_t i;0 <= i < length && \old(array[i]) == old ==> array[i] == new;
ensures \forall size_t i;0 <= i < length && \old(array[i]) != old ==> array[i] == \old(array[i]);
*/
void search_and_replace(int* array,size_t length,int old,int new)
{
/*@
loop invariant 0 <= i <= length;
loop invariant \forall size_t j;0 <= j < i && \at(array[j],Pre) == old ==> array[j] == new;
loop invariant \forall size_t j;0 <= j < i && \at(array[j],Pre) != old ==> array[j] ==\at(array[j],Pre);
loop invariant \forall size_t j;i <= j < length ==>array[j]==\at(array[j],Pre);
loop assigns i,array[0 .. length-1];
loop variant length-i;
*/
for (size_t i=0;i<length;++i){
if (array[i]==old)
{
array[i]=new;
}
}
}
int main()
{
int len=5;
int arr[5]={5,3,7,9,44};
int old_value=9;
int new_value=55;
search_and_replace(arr,len,old_value,new_value);
}


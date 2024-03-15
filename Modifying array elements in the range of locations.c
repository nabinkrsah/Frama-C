


#include<stdio.h>

/*@ requires 0 <= lower <= upper <= N;
    requires \valid(array + (lower .. upper));
    requires \valid(value);
    assigns array[lower ..upper];
    ensures \forall integer i; lower <= i < upper ==> array[i] == *value;
*/
void modify_array_elements(int* array, int lower, int upper, int* value, int N) {
  /*@ loop invariant lower <= i <= upper;
      loop invariant \forall integer j; lower <= j < i ==> array[j] == *value;
      loop assigns i, array[lower .. upper];
  */
  for (int i = lower; i < upper; i++) {
    array[i] = *value;
  }
}

int main() {
  int N = 10;
  int array[N];
  int lower = 2;
  int upper = 7;
  int value = 5;

  modify_array_elements(array, lower, upper, &value, N);

  /*@ assert \forall integer i; lower <= i < upper ==> array[i] == value; */
  return 0;
}

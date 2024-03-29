// Linear search problem using behavior.
//Name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include <stddef.h>
/*@
	requires \valid_read(array+(0..length-1));
	assigns \nothing;
	behavior in:
		assumes \exists size_t off;0<=off<length&&array[off]==element;
		ensures array<=\result<array+length&&*\result==element;

	behavior notin:	
		assumes \forall size_t off;0<=off<length==>array[off]!=element;
		ensures \result==NULL;
	
	disjoint behaviors;	
	complete behaviors;	
*/
int* search(int* array, size_t length, int element) {
	/*@
		loop invariant 0<=i<=length;
		loop invariant \forall size_t j;0<=j<i==>array[j]!=element;
		loop assigns i;	
		loop variant length-i;
	*/
	for(size_t i = 0; i < length; i++) 
		if(array[i]==element) return &array[i];
	return NULL;
}

void main() {
	int a[] = {1, 5, 6, 7};
	int* res = search(a, 4, 5);
}

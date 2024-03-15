
//name:-Nabin kumar sah
//reg no:-BL.EN.U4CSE21129

#include<limits.h>
#include<math.h>

/*@ requires 0<=a;
    ensures \result>=0;
    ensures \result*\result>=a;
*/
double my_sqrt(double a) {
	return sqrt(a);
}

void main() {
	double x = my_sqrt(100);
	double y = my_sqrt(10);
}

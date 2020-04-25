#include <stdio.h>
void kareyiYaz(  int *x) {
	*x=(*x)*(*x);
}
int main() {
	int a = 11, b = 20;
	printf("A nin adresi: %d\n",&a);
	printf("a = %d\tb = %d\n", a, b);
	kareyiYaz(&a);
	kareyiYaz(&b);
	printf("a = %d\tb = %d\n", a, b);
	printf("A nin adresi: %d\n",&a);
return 0;
}


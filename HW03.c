#include<stdio.h>
int main(){
	int x;
	printf("x (0<x<10^5):", x);
	scanf("%d", &x);
	int A;
	A=pow(x,3)+3*pow(x,2)+x+1;
	printf("A(x) = %d", A);
	return 0;
}

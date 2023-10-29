#include<stdio.h>
int main(){
	int a,b;
	printf("a, b (b!=0, -10^9<=a,b<=10^9): ", a,b);
	scanf("%d %d", &a, &b);
	int c,d,e;
	c=a+b; d=a-b; e=a*b;
	float f=a/b;
	printf("Tong: %d\n", c);
	printf("Hieu: %d\n", d);
	printf("Tich: %d\n", e);
	printf("Thuong: %.2f", f);
	return 0;
}

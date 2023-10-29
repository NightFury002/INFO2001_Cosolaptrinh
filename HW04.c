#include<stdio.h>
int main(){
	int a,b,c;
	printf("a b,c (0<|a|,|b|,|c|<10^9):", a, b, c);
	scanf("%u %u %u", &a, &b, &c);
	int S = a*(b+c) + b*(a+c);
	printf("S : %d", S);
	return 0;
}

#include<stdio.h>
int main(){
	double C,F;
	printf("C:", C);
	scanf("%lf", &C);
	if (C<0 || C>106){
		printf("khong hop le");
	} else{
		F=(C*9/5) + 32;
		printf("F: %.2lf", F);
	}
	return 0;
}

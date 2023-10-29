#include<stdio.h>
#include<math.h>
int sum (int n){
	int sum =0;
	while (n!=0){
		int x=n%10;
		sum+=x*x*x;
		n/=10;
	}
	return sum;
}
int main (){
	int i;
	for (i=100;i<=999;i++){
		if (sum(i)==i){
			printf ("%d ",i);
		}
			}
	return 0;
}

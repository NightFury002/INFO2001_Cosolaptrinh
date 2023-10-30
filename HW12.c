#include <stdio.h>

int main () {
	int t, n;
	printf ("Nhap so thang va nam (-10^6 <= t, n <= 10^6):");
	scanf ("%d %d", &t, &n);
	
	if (t < 1 || t > 12 & n < 0) {
		printf ("INVALID");
	} else if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12) {
		printf ("31");
	} else if (n % 400 == 0 || n % 4 == 0 &n % 100 != 0 & t == 2) {
		printf ("29");
	} else if (t == 2) {
		printf ("28");
	} else if (t == 4 || t == 6 || t == 9 || t == 11) {
		printf ("30");
	}
	return 0;
}

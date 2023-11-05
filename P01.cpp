#include <stdio.h>
#include <math.h>
double tinhmu(int a, int b) {
	int k = 1;
	for (int i = 1; i <= b; i++) {
		k = k * a;
	}
	if (b == 0) k = 1;
	return k;
}
long haisang10(long n) {
	long c = 0;
	long t = 0;
	long sum = 0;
	int dem = 0;
	while (n > 0)
	{
		c = n % 10;
		n = n / 10;
		dem++;
		sum = sum + c * tinhmu(2, dem-1);
	}
	return sum;
}
long muoisanghai(long n){
	int rem, i = 1, sum = 0;
	do
	{
		rem = n % 2;
		sum = sum + (i * rem);
		n = n / 2;
		i = i * 10;
	} while (n > 0);
	return sum;
}

int main() {
	long a, b;
	printf("Hay nhap so can chuyen doi tu he hai sang 10: ");
	scanf_s("%ld", &a);
	long k = haisang10(a);
	printf("%ld \n", k);
	printf("Hay nhap so can chuyen doi tu he 10 sang 2: ");
	scanf_s("%ld", &b);
	long f = muoisanghai(b);
	printf("%ld", f);
}

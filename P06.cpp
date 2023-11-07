#include <stdio.h>
#include <math.h>
long tinhgiaithua(int n) {
	long tich = 1;
	if (n % 2 == 0) {
		for (int i = 2; i <= n ; i=i+2)
		{
			tich = tich * i;
		}
	}
	else
	{
		for (int i = 1; i <= n; i = i + 2) {
			tich = tich * i;
		}
	}
	return tich;
}
int main() {
	printf("nhap n: ");
	int n;
	scanf_s("%d", &n);
	long dapan = tinhgiaithua(n);
	printf("n!!=%ld",dapan);
}
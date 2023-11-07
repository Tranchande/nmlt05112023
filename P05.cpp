#include <stdio.h>
#include <math.h>
void timk(int n,int k) {
	int a[100];
	int m = n;
	int c;	int t = 0;
	while (n>0)
	{
		c = n % 10;
		n = n / 10;
		a[t] = c;
		t++;
	}
	if (k > t) printf("ko co");
	else
	{
	printf("so hang thu k la: %d", a[k - 1]);
	}

}
int main() {
	int n, k;
	printf("Hay nhap n: ");
	scanf_s("%d", &n);
	printf("so thu tu K tu phai qua la: ");
	scanf_s("%d", &k);
	timk(n, k);
}
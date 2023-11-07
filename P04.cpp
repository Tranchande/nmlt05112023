#include <stdio.h>
#include <math.h>
double lamtron(double x, int n) {
	double ketqua;
	double scale = pow(10, n);
	x = x * scale;
	if (x >= 0) ketqua = floor(x + 0.5) / scale;
	else
	{
		ketqua = -floor(-x + 0.5) / scale;
	}
	return ketqua;
}
int main() {
	double x;
	int n;
	printf("nhap so thuc x: ");
	scanf_s("%lf", &x);
	printf("nhap so chu so lam tron: ");
	scanf_s("%d", &n);
	double t = lamtron(x, n);
	printf("so sau khi lam tron la: %lf", t);
}
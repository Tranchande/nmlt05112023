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
		sum = sum + c * tinhmu(2, dem - 1);
	}
	return sum;
}
long muoisanghai(long n) {
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
#include <iostream>
#include <string>
using namespace std;
void tu10sang16(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int sodu;
    char hex[100];
    int i = 0;
    while (n > 0) {
        sodu = n % 16;
        if (sodu < 10) {
            hex[i] = sodu + '0';
        }
        else {
            hex[i] = sodu + 'A' - 10;
        }
        n = n / 16;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
}
int tu16sang10(string hex) {
    int chuso = 0;
    int base = 1;

    for (int i = hex.length() - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            chuso += (hex[i] - '0') * base;
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            chuso += (hex[i] - 'A' + 10) * base;
        }
        base *= 16;
    }

    return chuso;
}
int main() {
    int n;
    string hexa;
    int check;
    printf("Nhap so he 2: ");
    scanf_s("%d", &n);
    int m = n;
    while (n > 0)
    {
        check = n % 10;
        n = n / 10;
        if (check != 0 && check != 1) {
            printf("ban da nhap sai");  return 0;
        }
 
    }
    int t1 = haisang10(m);
    printf("So he 16 : ");
    tu10sang16(t1);
    printf("\n");
    cout << "Nhap so he muoi sau: ";
    cin >> hexa;
    int t2 = tu16sang10(hexa);
    int t3 = muoisanghai(t2);
    printf_s("he 2 la: %d", t3);
    return 0;
}
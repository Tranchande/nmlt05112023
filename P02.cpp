#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <string>
using namespace std;
void tu10sang16 (int n) {
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
    printf("Nhap so he thap phan: ");
    scanf_s("%d", &n);
    printf("So he 16 : ");
    tu10sang16(n);
    printf("\n");
    cout << "Nhap so he muoi sau: ";
    cin >> hexa;
    int dapan = tu16sang10(hexa);
    cout << "he 10 la " << dapan << endl;
    return 0;
}
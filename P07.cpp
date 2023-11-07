#include <stdio.h>
#include <math.h>
typedef struct {                      //khai mo struct bao gom tu va mau
    int tu;
    int mau;
} Fraction;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
Fraction    rutgon(Fraction fraction) {             //tao ham rutgon bang struc trong do mo dau bang struct de tra ve 2kq
    int uochung = gcd(fraction.tu, fraction.mau);
    fraction.tu /= uochung;
    fraction.mau /= uochung;
    return fraction;
}
Fraction tong(Fraction so1, Fraction so2) {
    Fraction kq;
    kq.tu = so1.tu * so2.mau + so2.tu * so1.mau;
    kq.mau = so1.mau * so2.mau;
    Fraction dapan = rutgon(kq);
    return dapan;
}
Fraction hieu(Fraction so1, Fraction so2) {
    Fraction kq;
    kq.tu = so1.tu * so2.mau - so2.tu * so1.mau;
    kq.mau = so1.mau * so2.mau;
    Fraction dapan = rutgon(kq);
    return dapan;
}
int main() {
    Fraction ps1, ps2;
    printf("Nhap phan so 1: ");
    scanf_s("%d/%d", &ps1.tu, &ps1.mau);
    printf("Nhap phan so 2: ");
    scanf_s("%d/%d", &ps2.tu, &ps2.mau);

    Fraction rut1 = rutgon(ps1);
    Fraction rut2 = rutgon(ps2);

    printf("Phan so 1 sau khi rut gon: ");
    printf("%d/%d\n", rut1.tu, rut1.mau);

    printf("Phan so 2 sau khi rut gon: ");
    printf("%d/%d\n", rut2.tu, rut2.mau);
    Fraction tongg = tong(rut1, rut2);
    printf("tong cua hai phan so la: %d/%d\n", tongg.tu,tongg.mau );
    Fraction hieuu = hieu(rut1, rut2);
    printf("hieu cua hai phan so la: %d/%d", hieuu.tu, hieuu.mau);
}
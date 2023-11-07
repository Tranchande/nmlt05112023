#include <stdio.h>
#include <math.h>
int namnhuan(int y) {
	if (y < 1900 || y>10000) return -1;
	else if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 1;
	else return 0;
}
int ngaythang(int n, int m) {
	int leap = namnhuan(m);
	if (leap == -1 || n < 1 || n>12) return -1;
	else {
		switch (n) {
		case 1:case 3:case 5:case 7:case 8: case 10: case 12: return 31;
		case 4: case 6: case 9: case 11: return 30;
		default: if (leap == 1) return 29;
			   else return 28;
		}
	}
}
int ngaytieptheo(int d, int m, int y) {
	int ngaytrongthang = ngaythang(m, y);
	if (ngaytrongthang == -1 || d<1 || d>ngaytrongthang) return -1;
	else {
		if (d < ngaytrongthang)d++;
		else if (m < 12) {
			d = 1; m++;
		}
		else {
			d = m = 1; y++;
		}
	}
	printf("%d %d %d\n", d, m, y);
	return 1;
}
int kngaytieptheo(int d, int m, int y,int k) {
	for (int i = 1; i <= k; i++) {
		int ngaytrongthang = ngaythang(m, y);
		if (ngaytrongthang == -1 || d<1 || d>ngaytrongthang) return -1;
		else {
			if (d < ngaytrongthang)d++;
			else if (m < 12) {
				d = 1; m++;
			}
			else {
				d = m = 1; y++;
			}
		}
	}
	printf("%d %d %d\n", d, m, y);
	return 1;
}
int ngaytruoc(int d, int m, int y) {
	int ngaytrongthang = ngaythang(m, y);
	if (ngaytrongthang == -1 || d<1 || d>ngaytrongthang) return -1;
	else {
		if (1 < d)d--;
		else if (1 < m) {
			d = ngaythang(m - 1, y); m--;
		}
		else {
			d = 31; m = 12; y--;
		}
	}
	printf("%d %d %d\n", d, m, y);
	return 1;
}
int kngaytruoc(int d, int m, int y,int k) {
	for (int i = 1; i <= k; i++) {
		int ngaytrongthang = ngaythang(m, y);
		if (ngaytrongthang == -1 || d<1 || d>ngaytrongthang) return -1;
		else {
			if (1 < d)d--;
			else if (1 < m) {
				d = ngaythang(m - 1, y); m--;
			}
			else {
				d = 31; m = 12; y--;
			}
		}
	}
	printf("%d %d %d\n", d, m, y);
	return 1;
}
int main() {
	int a, b, c;
	int k;
	printf("nhap ngay: ");
	scanf_s("%d", &a);
	printf("nhap thang: ");
	scanf_s("%d", &b);
	printf("nhap nam: ");
	scanf_s("%d", &c);
	printf("nhap k: ");
	scanf_s("%d", &k);
	if (a > ngaythang(b, c)) {
		printf("ngay thang ko hop le\n");
	}
	printf("thang nay co so ngay la: %d\n", ngaythang(b, c));
	printf("ngay tiep theo la:");
	ngaytieptheo(a, b, c);
	printf("ngay hom truoc la:");
	ngaytruoc(a, b, c);
	printf("%d ngay tiep theo la:", k);
	kngaytieptheo(a, b, c, k);
	printf("%d ngay hom truoc la:",k);
	kngaytruoc(a, b, c,k);
	return 0;
}


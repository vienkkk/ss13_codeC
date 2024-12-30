#include<stdio.h>
#include<math.h>
#define max 100

int nhapmang(int m, int n,int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("Vi tri %d %d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	return a[max][max];
}
void xuatmang(int m, int n,int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int gocmatran(int m, int n, int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; ++j) {
			if((i == 0 && j == 0) || (i == 0 && j == n - 1) || (i == m - 1 && j == 0) || (i == m - 1 && j == n - 1)) {
				printf("%d ",a[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
int duongbien(int m, int n, int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(i == 0 || i == m - 1 || j == 0 || j == n - 1) {
				printf("%d",a[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
int duongcheo(int m, int n, int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if((i+j)/2==0) {
				printf("%d",a[i][j]);
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
}
int songuyento(int n) {
	if(n<=1) {
		return 0;
	}
	for(int i=2; i*i<=n; i++) {
		if(n%i==0) {
			return 0;
		}
	}
	return 1;
}
void kiemtra(int m, int n,int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(songuyento(a[i][j])) {
				printf("%d ",a[i][j]);
			}
		}
	}
	printf("\n");
}
int main() {
	int a[max][max];
	int m,n,b;
	while(1) {
		printf("MENU\n");
		printf("1. Nhap gia tri cac phan tu cua mang\n");
		printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
		printf("3. In ra cac phan tu o goc theo ma tran\n");
		printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7. Thoat\n");
		printf("Lua chon: ");
		scanf("%d", &b);
		switch(b) {
			case 1:
				printf("Nhap so hang ");
				scanf("%d",&m);
				printf("Nhap so cot ");
				scanf("%d",&n);
				nhapmang(m,n,a);
				break;
			case 2:
				xuatmang(m,n,a);
				break;
			case 3:
				gocmatran(m,n,a);
				break;
			case 4:
				duongbien(m,n,a);
				break;
			case 5:
				duongcheo(m,n,a);
				break;
			case 6:
				kiemtra(m,n,a);
				break;
			default:
				printf("Lua chon khong hop le");
				printf("\n"); 
		}
	}

	return 0;
}

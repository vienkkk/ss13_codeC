#include <stdio.h>
#define max 100


int nhapmang(int m, int n, 	int a[max][max]) {
	printf("Nhap vao vi tri mang\n");
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("Vi tri %d %d ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	return a[max][max];
}
void xuatmang(int m, int n, int a[max][max]) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d ",a[i][j]);
		}
	}

}
int main() {
	int m,n;
	int a[max][max]; 
	printf("Nhap so hang \n");
	scanf("%d",&m) ;
	printf("Nhap so cot \n");
	scanf("%d",&n) ;
	nhapmang(m,n,a);
	xuatmang(m,n,a);
	return 0;
}

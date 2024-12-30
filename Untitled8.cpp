#include <stdio.h>
#include <math.h>

int UCLN(int m, int n){
	int c; 
	while(n!=0){
		c=m%n;
		int temp=n;
		int temps=c;
		m=temp;
		n=temps; 
	} 
	return m;  
} 

int main(){
	int m,n;
	printf("Nhap so nguyen ");
	scanf("%d",&m);
	printf("Nhap so nguyen ");
	scanf("%d",&n);
	if(m<n){
		int temp=m;
		m=n;
		n=temp; 
	}  
	printf("%d",UCLN(m,n)); 
	return 0; 
} 

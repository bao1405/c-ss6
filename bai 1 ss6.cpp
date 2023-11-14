#include<stdio.h>
int main(){
	int i,j;
	int so;
	printf("nhap so nguyen : ");
	scanf("%d", &so);
	for (i=1;i<=so;i++){
		for (j=1;j<=10;j++){
			printf("\n%d", j*i);
		}
	}

}

#include<stdio.h>
#include<stdlib.h>

int main() {
	int a,b,c;
	int i=0;
	printf ("nhap 3 so nguyen:");
	scanf("%d %d %d",&a,&b,&c);
	do {
    printf("======= MENU CHUONG TRINH =========\n");
    printf(" 1. Tong 3 so nguyen. \n");
    printf(" 2. Trung binh cong 3 so nguyen. \n");
    printf(" 3. So lon nhat, nho nhat trong 3 so. \n");
    printf(" 4. Thoat.         \n");
    printf("===================================\n");
    printf("Moi ban chon: ");
    int lua_chon;
	scanf("%c", &lua_chon);
	switch(lua_chon) {
    case '1':
    	printf("Tong 3 so nguyen: %d\n",a+b+c);
    	break;
    case '2':
      printf("Trung binh cong 3 so nguyen: %d\n",(a+b+c)/3);
      break;
    case '3':
    if (a>b && b>c){
			printf("a la so lon nhat:%d",a);
			printf("c la so nho nhat:%d",c);
				i +=1;
		}else if( a > b && b < c){
			if ( a > c ){
				printf("a la so lon nhat:%d",a);
				printf("b la so nho nhat:%d",b);
					i +=1;
			}else{
				printf("c la so lon nhat:%d",c);
				printf("b la so nho nhat:%d",b);
					i +=1;
			}
		}else if ( b > a && a > c){
			printf("b la so lon nhat:%d",b);
			printf("c la so nho nhat:%d",c);
				i +=1;
		}else if ( b > a && a < c){
			if ( b > c ){
				printf("b la so lon nhat:%d",b);
				printf("a la so nho nhat:%d",a);
					i +=1;
			}else {
				printf("c la so lon nhat:%d",c);
				printf("a la so nho nhat:%d",a);
					i +=1;
			}
		}else if ( c > a && a > b ){
			printf("c la so lon nhat:%d",c);
			printf("b la so nho nhat:%d",b);
				i +=1;
		}else if ( c > a && a < b ){
			if (c>a){
				printf("c la so lon nhat:%d",c);
				printf("b la so nho nhat:%d",b);
					i +=1;
			}else{
				printf("a la so lon nhat:%d",a);
				printf("b la so nho nhat:%d",b);
					i +=1;
			}
		}
		break;
    case '4':
    exit(0);
    default:
      printf("Vui long chi lua chon tu 1-4\n");
  	}
  }while ("Vui long chi lua chon tu 1 - 4\n");
}

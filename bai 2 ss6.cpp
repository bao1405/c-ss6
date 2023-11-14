#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m,a,b;
	printf ("nhap 2 so nguyen so lon nhap truoc:");
	scanf("%d %d",&n,&m);
  do {
    printf("************** Caculator ********\n");
    printf("1. tong 2 so\n");
    printf("2. hieu 2 so\n");
    printf("3. tich 2 so\n");
    printf("4. thuong 2 so\n");
    printf("5. so du trong phep chia 2 so\n");
    printf("6. uoc chung lon nhat\n"); 
    printf("7. boi chung nho nhat\n");
    printf("8. thoat\n");
    printf("Lua chon cua ban:");
    int choice; scanf("%d",&choice);
    switch(choice) {
      case 1:
        printf("tong 2 so la :%d\n",n+m);
        break;
      case 2:
        printf("hieu 2 so la:%d\n",m-m);
        break;
      case 3:
        printf("tich 2 so la:%d\n",n*m); 
        break;
      case 4:
        printf("thuong 2 so la:%d\n",n/m); 
        break;
        case 5:
        printf("so du trong phep chia 2 so:%d\n",n%m); 
        break;
      case 6:
	  while (n != m) {
       if (n > m) {
        n -= m;
    }
	    else {
     m -= n;
    }
    }
               
        printf("ucln 2 so la:%d\n",n); 
        break;
     case 7:
      a=n;
      b=m;
     	while (n != m) {
       if (n > m) {
        n -= m;
    }
	    else {
     m -= n;
    }
    }
        printf("bcnn 2 so la:%d\n",(a*b)/n);
        break;
     case 8:
        exit(0);
      default:
        printf("Vui long chon tu 1-8\n");
    }
  } while ("Vui long cho tu 1 - 8\n");
}

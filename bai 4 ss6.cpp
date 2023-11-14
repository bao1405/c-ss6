#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice;
	int number;
	int n;
	int sum = 0;
	int ketQua;
	int count = 0;
	int max;
	do{
		printf("                         Menu");
		printf("\n1. In dãy so chia het cho 2 và giam dan (n >= so >= 2)");
		printf("\n2. In các so nho hon n và tính tong");
		printf("\n3. In ra các uoc so chan cua n");
		printf("\n4.In ra các uoc so le và so luong các uoc le cua n");
		printf("\n5. In ra uoc so le lon nhat cua n");
		printf("\n6. Thoat");
		printf("\nNhap 1 so nguyen: ");
		scanf("%d",&number);
		printf("nhap y muon thuc hien: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				for ( int i = number; i >= 0; i--){
	 	    		if ( i % 2 == 0 ){
	 					printf("%d\n",i);
					}
				}
				n == 1;
				break;
			case 2:
				for (int i= 0; i<=number;i++){
		    		printf("%d\n",i);
		    		sum = sum + i;
	        	}
	        	printf("tong la: %d",sum);
	        	n==1;
	        	break;
	        case 3: 
	        	for (int i = 1;i <= number; i++){
	        		if (number%i==0 && i%2==0){
	        			printf("%d",i);
					}	
				}
            	break;
			case 4:
				for (int i = 1;i <= number; i++){
	        		if (number%i==0 && i%2!=0){
	        			printf("%d\n",i);
	        			count = count+1;
					}	
				}
				printf("%d",count);
            	break;
            case 5: 
            	for (int i = 1;i <= number; i++){
	        		if (number%i==0 && i%2!=0){
	        			printf("%d\n",i);
	        			max = i;
					}	
				}
				printf("so lon nhat la: %d",max);
            	break;
            case 6:
            	exit(0);
    			default:
     			printf("Vui long chi lua chon tu 1-6\n");		
		}
	}while(choice != 6);	
}

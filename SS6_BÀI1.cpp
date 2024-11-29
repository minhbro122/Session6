#include<stdio.h>
int main(){
	int n;
	int sum = 0;
	
	printf("Nhap 5 so nguyen bat ki vao man hinh! ");
	for(int i = 1; i <5; i++){
		scanf("%d", n);
		if(n % 2 !=0){
			sum +=n;
		}
	}
	
	
	printf("Tong cac so le la: %d\n", sum);
	return 0;
}

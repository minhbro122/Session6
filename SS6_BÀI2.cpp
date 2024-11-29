#include<stdio.h>
int main(){
	int n, even = 0, odd = 0;
	printf("Nhap 5 so nguyen bat ki:\n");
	for(int i = 0; i < 5; i++){
		scanf("%d", &n);
		(n % 2 ==0) ? even++ : odd++;
	
	}
	printf("so chan la : %d", even);
		printf("so le la: %d", odd);
	return 0;
}

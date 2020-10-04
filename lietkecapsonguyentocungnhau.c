#include<stdio.h>

int main(){
	int i, j, a, b;
	int c;
	int count = 0;
	printf("Nhap a :");
	scanf("%d", &a);
	printf("Nhap b :");
	scanf("%d", &b);
	for(i=a;i<=b;i++){
		for(i=a+1;j<=b;j++){
			for(c=1;c<=i;c++){
				if(i%c==0 && j%c == 0){
					count++;
				}
				if(count==1){
					printf("%d", count);
				}
			}
		}
	}
	printf("%d%d", i,j);
	return 0;
}

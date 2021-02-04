#include<stdio.h>
#include<math.h>
int main(){
	int i,n,prime,power2,number;
	power2=4;
	printf("please enter your number = ");
	scanf("%d",&n);
	while (power2<n){
		prime=1;
		number=power2-1;
		power2=power2*2;
		for (i=3;i<number;i=i+2){
			if (number%i==0){
				prime=0;
			}
		}
		if (prime==1){
			printf("%d\n",number);
		}
	}
	return 0;
}

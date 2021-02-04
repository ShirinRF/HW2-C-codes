#include<stdio.h>
#include<math.h>
int main (){
	int i=0,n,m;
	printf("please enter your number = ");
	scanf("%d",&n);
		for (i=0;i<(sizeof (n));i++){
		m=n%10;
		printf("%d",m);
		n/=10;
}
	return 0;
}

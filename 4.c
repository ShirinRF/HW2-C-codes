#include<stdio.h>
int main(){
	//we want to know how many prime numbers we have until n;
	int n,i,j,p,q=0;
	printf("enter your number please = ");
	scanf("%d",&n);
	for (i=2;i<=n;i++){
		p=0;
		for (j=2;j<=n;j++){
			if (i%j==0 && i!=j){
			p=1;
			break;
		}
	}
	if (p==0)
	q++;
	}
	printf("tedad adad avval ta n = %d",q);
	return 0;	
	}

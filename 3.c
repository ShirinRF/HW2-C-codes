#include<stdio.h>
#include<math.h>
int main(){
	int i=0,p,d,q,answer;
	printf("p:");
	scanf("%d",&p);
	printf("d:");
	scanf("%d",&d);
	q=d;
	while ((d % p)>(p/2)){
		i++;
		d=q;
		d*=i;
	}
	if ((d % p)<=(p/2))
		printf("answer:%d",d);
	}


#include<stdio.h>
#include<math.h>
int main(){
	printf("please enter n= ");
	int x,y,z,n;
	scanf("%d",&n);	
	for (x=1;x<n/2;x++){
		for (y=x;y<n/2;y++){
			z=n-x-y;
		if ((x+y>z)&&(x+z>y)&&(y+z>x)&&(y<=z)){
		printf("%d,%d,%d\n",x,y,z);
	}
	}
}
}

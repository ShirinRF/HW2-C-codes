#include<stdio.h>
#include<math.h>
#define PI 3.141592653589793
#define E 2.7182818284590451
#define ln(x) log(x)
int main(){
	double a1=-5,b1=PI/6,c1=PI/5,equation1;
	double a2=3.5,b2=2,c2=9,equation2;
	double a3=5,b3=6,equation3;
	equation1 = pow (E,((log2(-a1))+sin(b1)+tan(c1)));
	equation2 = a2*(a2+b2)*b2*ln(c2);
	equation3 = pow ((1/pow (a3,0.3))+(2/pow (b3,2.3)),4.5);
	printf("%.2lf \n",equation1);
	printf("%.2lf \n",equation2);
	printf("%.2lf ",equation3);
}


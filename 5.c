#include<stdio.h>
#include<math.h>
int main (){
	int n,i=10,j,vindex;
	printf("number of candidates=");
	scanf("%d",&n);
	int votes[i],results[n];
	for (vindex=0;vindex<i;vindex++){
		printf("enter your number of candidate =");
		scanf("%d",&votes[vindex]);	
	}	
	for (j=1;j<=n;j++){
	results[j]=0;
	}
	for (j=1;j<=n;j++){
	for (vindex=0;vindex<i;vindex++){
		if (votes[vindex]==j){
		results[j]++;
}}}
	for (j=1;j<=n;j++){
	printf("number of votes for candidate %d is %d\n",j,results[j]);
}}

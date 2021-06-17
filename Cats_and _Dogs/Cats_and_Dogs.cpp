#include<stdio.h>

int main(){
	#intialize T,C,D,L,k for looping,m1 and m2 for calculation
	int T,C[109],D[109],L[109],k=0,m1,m2;
	
	#Read input from the user for test cases
	printf("Input:\n");
	scanf("%d",&T);
	
	#Read input from the user for Cats,Dogs, and legs using array
	for(int i=0;i<T;i++){
		scanf("%d %d %d",&C[i],&D[i],&L[i]);
	}
	
	printf("\nOuput:\n");
	#looping for process
	while(T--){
		#calculation for getting maximum legs(4 * (no.of cats + no.of dogs)) 
		m1 = 4 * (C[k] + D[k]);
		
		#calculation for getting minimum legs(4 * (no.of dogs))
		m2 = 4 * D[k];
		
		#if legs are lesser than or equal to m1 and more than or equal to m2 then print "yes" or printf "no"
		if(L[k]<=m1 && L[k]>=m2){
			printf("yes\n");
		} else{
			printf("no\n");
		}
		
		#increment k
		k++;
	}
	return 0;	
}

#include <stdio.h>
 
int main()
{
	#intialize Basic,HRA,DA,Gross_Salary as float type
	float Basic[100],HRA, DA, Gross_Salary;
	
	#intialize T for test cases and i for looping
	int T,i=0;
	
	#Read input from user of how may test cases
	printf("Input:\n");
	scanf("%d",&T);
	
	#Read Basic salary from the user using looping of array
	for(int i=0;i<T;i++){
		scanf("%f",&Basic[i]);
	}
	printf("\nOutput:\n");
	
	#Till i is equal to T,looping will take place
  	while(i!=T){
	  	
	  	#If Basic salary is less than 1500,calculation for HRA,DA,Gross_salary will be calculated and Gross_salary will be printed
	  	if (Basic[i] < 1500)
		{
	  		HRA = (Basic[i] * 10) / 100; 
			DA = (Basic[i] * 90) / 100; 
			Gross_Salary = Basic[i] + HRA + DA;
			printf("%.2f\n",Gross_Salary);   	
	  	} 
	  	
	  	#If Basic salary is more than or equal to 1500,calculation for HRA,DA,Gross_salary will be calculated and Gross_salary will be printed
	  	else if (Basic[i] >= 1500)
		{
	  		HRA = 500;
	  		DA = (Basic[i] * 98) / 100;
	  		Gross_Salary = Basic[i] + HRA + DA;
	  		printf("%.2f\n",Gross_Salary);
		}
		
		#i will be increment by 1 for every looping to change the index of basic salary array
		i++;	 	
	}
	
	return 0;
}

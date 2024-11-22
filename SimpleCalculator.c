//Simple Calculator
#include<stdio.h>
#include<math.h>
void getnum(float *,float *);
int main(){
	float x,y;
	int choose;
	bool p=true;
	printf("                  ------------------> SIMPLE CALCULATOR <-------------------------\n");
	while(p){
	
	printf("Choose a operation from below-\n");
	printf("-->1.Add two numbers-\n");
	printf("-->2.Substract Two Numbers-\n");
	printf("-->3.Multiply Two Numbers-\n");
	printf("-->4.Divide Two Numbers-\n");
	printf("-->5.Exit\n");
	printf("Enter your choice Here------>\n");
	scanf("%d",&choose);

	
	switch(choose){
		case 1:
			getnum(&x,&y);
			printf("The sum is %f\n",x+y);
			break;
		case 2:
			getnum(&x,&y);
			printf("The difference is %f\n",x-y);
			break;
		case 3:
			getnum(&x,&y);
			printf("The product is %f\n",x*y);
			break;
		case 4:
			getnum(&x,&y);
			printf("The division is %f\n",x/y);
			break;
		case 5: 
		printf("                                      byee see you later\n");
		    p=false;
		    break;
	}}
	
}
void getnum(float *x,float *y){
	printf("Enter the number 1-->\n");
	scanf("%f",&(*x));
	printf("Enter the number 2-->\n");
	scanf("%f",&(*y));
	
}

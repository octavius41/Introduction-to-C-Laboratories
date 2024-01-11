#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,d,ds,i,x1r,x2r,x1i,x2i;
	int ct;
	while(ct!=0){
	printf("please determine the variables on the equation a^2*x + b*x + c, in order to a , b , c.\n");
	printf("enter the value a, it can't be equal to 0:\n");
	scanf("%f",&a);
	while (a == 0){
		printf("please enter a valid number.\n");
		scanf("%f",&a);
	}
	printf("enter value b:\n");
	scanf("%f",&b);
	printf("enter value c;\n");
	scanf("%f",&c);
	d = (b*b) - (4*a*c);
	printf("discrimininat of the function : %.2f\n",d);
	if (d > 0){
		ds = sqrt(d);
		x1r = ((-b) + ds) / (2*a);
		x2r = ((-b) - ds) / (2*a);
		printf("two different real roots of the equation:\nx1 = %.3f, x2 =%.3f\n",x1r,x2r);
	}
	if (d == 0){
		ds = sqrt(d);
		x1r = ((-b + ds)) / (2*a);
		printf("two identical real roots of the equation:\n x1 = x2 = %.3f",x1r);
	}
	if (d < 0){
		d = -1*d;
		ds = sqrt(d);
		x1r = ((-b) / (2*a));
		x1i = ((-ds) / (2*a));
		x2i = ((ds) / (2*a));
		printf("no real roots of the equation\n x1r = x2r = %.3f, x1i = %.3f, x2i = %.3f",x1r,x1i,x2i);
	}
	printf("please enter ct\n");
	scanf("%d",&ct);
	}	
	return 0;
		
}


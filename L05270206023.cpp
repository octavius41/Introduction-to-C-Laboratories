#include <stdio.h>
#include <math.h>
double facto(int x){
	int i;
	double fact = 1;
	for(i=1;i<=x;i++){
		fact = fact*i;
	}
	return fact;
}
double calccos(int degree, float precision){
	float pi,fpre;
	double sumc,x,y,c_0;
	int n;
	pi = 3.14159;
	x = degree * (pi/180);
	sumc = 1;
	n = 2;
	fpre = 0;
	do{
		sumc = sumc + ((pow((-1),n-1) * pow(x,2*(n-1))) / (facto(2*(n-1))));
		y = sumc - c_0;
		fpre = fabs(y);
		c_0=sumc;
		++n;
	}while(precision < fpre);
	return sumc;
}

double calcsin(int degree, float precision){
	float pi,fpre;
	double sums,x,y,s_0;
	int n,a;
	pi = 3.14159;
	x = degree * (pi/180);
	sums = x;
	n = 2;
	do{
		sums = sums + ((pow((-1),n-1) * pow(x,(2*n) - 1)) / (facto((2*n) - 1)));	
		y = sums - s_0;
		fpre = fabs(y);
		s_0=sums;
		++n;
	}while(precision < fpre);
	return sums;
}
int main(){
	float pre,pi;
	pi = 3.14159;
	int deg;
	printf("enter precision\n");
	scanf("%f",&pre);
	float rad;
	deg = 0;
	while (deg<=360){
		rad = deg * (pi/180);
		printf("degree : %d   radian : %f   cos(x) : %lf   sin(x) : %lf  precision : %f \n",deg,rad,calccos(deg,pre),calcsin(deg,pre),pre);
		deg = deg + 30;	
	}
}

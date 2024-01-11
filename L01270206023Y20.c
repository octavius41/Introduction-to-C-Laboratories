#include <stdio.h>
#include <math.h>
int main(){
	float x, y, k, l, m, n;
	printf("please enter the numbers\n");
	printf("x value =\n");
	scanf("%f",&x);
	printf("y value =\n");
	scanf("%f",&y);
	if ((x+y) <= 0){
		k = (x*x) + y;
		l = x + (1.0/3);
	}
	if ((x+y)> 0){
		k = x - y;
	}
	if (((x+y) > 0) && ((x+y) < 10)){
		l = ((x+y) / ((x*y) +1));	
	}
	if ((x+y) > 10){
		l = y + ((1.0)/3);
	}
	if ( x == y){
		m = (7*x) + 5;
	}
	if (x != y){
		m = (3*y) + 6;
	}
	if (((k<m)&&(m<l)) || ((m<k) && (k<l))){
		n = l;
	} 
	if (((m<l)&&(l<k)) || ((l<m) && (m<k))){
		n = k;
	}
	if (((l<m)&&(k<m)) || ((l<k) && (k<m))){
		n = m;
	}
	printf("results of numbers entered by user\nk = %f\nl = %f\nm = %f\nn = %f\n",k,l,m,n);
	return 0;	
}

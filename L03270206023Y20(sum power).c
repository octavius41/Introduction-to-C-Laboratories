#include <stdio.h>
#include <math.h>
int sumpower(int a, int b){
	int sum;
	int i;
	sum = 0;
	for (i=0;i<=b;i++){
		sum = sum + pow(a,i);
	}
	return sum - 1;
}
int main(){
	int x,y,s;
	printf("please enter the base\n");
	scanf("%d",&x);
	printf("please enter the exponent\n");
	scanf("%d",&y);
	s = sumpower(x,y);
	printf("result of sum (%d,%d)  %d \n",x,y,s);
}

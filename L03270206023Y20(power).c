#include <stdio.h>
int p(int a, int b){
	int i;
	int c;
	c = 1;
	for (i=1;i<=b;i++){
		c = c * a;
	}
	return c;
	}
int main (){
	int x,y,z;
	printf("enter the base:\n");
	scanf("%d",&x);
	printf("enter the exponent:\n");
	scanf("%d",&y);
	z = p(x,y);
	printf("the result of the inputs power(%d,%d) equals %d",x,y,z);
	return 0; 
}

#include <stdio.h>
#include <math.h>
float findclosest(float series[], float size, float p){
	float d,da,d2,da2,wanted;
	int i;
	d = series[1] - p;
	da = abs(d);
	wanted = series[1];
	for(i=2;i<=size;i++){
		d2 = p - series[i];
		da2 = abs(d2);
		if (da2<da){
			wanted = series[i];
		}
	}
	return wanted;
}
int main(){
	float r,p,e,a,b,c,v;
	float mean,var,sum;
	int n_0,n;
	printf("please enter the array length:\n");
	scanf("%d",&n);
	float array[n];
	printf("please enter the beggining number:\n");
	scanf("%d",&n_0);
	printf("please enter the 'r' in the given equation:\n");
	scanf("%f",&r);
	printf("please enter the number 'p' in the given equation:\n");
	scanf("%f",&p);
	sum = 0;
	for(n_0=1;n_0<=n;n_0++){
		e = (n_0*n_0) * pow(r,n_0);
		array[n_0] = e;
		sum = sum + array[n_0];
		printf("a(%d) = %.3f \n",n_0,array[n_0]); 
	}
	a = 1.0 / n;
	mean = a * sum;
	v = 0;
	for(n_0=1;n_0<=n;n_0++){
		v = v + pow((array[n_0]-mean),2);
	}
	var = (a * v);
	printf("sum = %f \n",sum);
	printf("mean = %.6f \n",mean);
	printf("variance = %f \n",var);
	printf("closest element = %f \n",findclosest(array,n,p));
	
	return 0;
}

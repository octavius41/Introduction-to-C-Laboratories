#include <stdio.h>
#include <math.h>
int main(){
	int dvalue,bvalue,len,p,q,val,base,preval,t,preb,b1,b2,z;
	char b[20];
	char hexaD[4];
	p=1;
	t = 3;
	printf("please enter a hexadecimal number\n");
	scanf("%s",hexaD);
	printf("given number = %s \n",hexaD);
	for(len=0;(hexaD[len] != '\0');++len){
	}
	if (len == 2){
		for(q=0;(hexaD[q]!='\0');q++){
			if(hexaD[q] >= 64){
				preval = hexaD[q] = hexaD[q] - 55;
			}
			if((hexaD[q] >= 48) && (hexaD[q] <= 64)){
				preval = hexaD[q] = hexaD[q] - 48;
			}
			base = 10;
			dvalue = dvalue + (preval * (pow(base,p)));
			--p;
		}
	}
	if (len == 4){
		for(q=0;(hexaD[q]!='\0');q++){
			if(hexaD[q] > 64){
				preval = hexaD[q] - 55;
			}
			if((hexaD[q] > 48) && (hexaD[q] < 64)){
				preval = hexaD[q] - '0';
			}
			base = 16;
			dvalue = dvalue + (preval * (pow(base,t)));
			--t;
			}
		}
	
	printf("hexadecimal length %d\n",len);
	printf("decimal number %d \n",dvalue);
	printf("binary equivalent %s",b);
	return 0;
}










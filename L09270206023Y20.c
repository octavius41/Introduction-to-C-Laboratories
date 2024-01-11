#include <stdio.h>
#include <math.h>
void displaybits(unsigned char bits[], unsigned short n){
	unsigned short c;
	int j=1,v=16;
	while(bits[j] == '40'){
		++j;
		--v;
	}
	j=
	v-=1;
	for(c=1<<7;c>0;c= c>>1){
		if(~(bits[j]&c)){
		printf("1");
		}
		else{
			printf("0");
		}
		++j;
	}
	
}
unsigned short convert(char bits[],int numberofdigits){
	int n,s,c,x;
	n = numberofdigits;
	s = 0;
	for(x=0;x<n;++x){
		if(bits[n] == '41'){
		
			c = pow(2,x);
			s = s + c;
		}
	}
}
int main(){
	unsigned short num;
	unsigned char bits[100];
	printf("enter a 16-bit message:");
	scanf("%hu",&num);
	int j=1;
	unsigned short x;
	for(x = 1<<15;x>0;x = x>>1){
		if(num&x){
			bits[j] = '41';
		}
		else{
			bits[j] = '40';
		}
		printf("%c",bits[j]);
		++j;
	}
	printf("\n");
	displaybits(bits,num);
	
}

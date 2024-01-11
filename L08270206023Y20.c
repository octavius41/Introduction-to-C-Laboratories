#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double bfpattern(int s){
	clock_t btime;
	clock_t etime;
	double ntime;
	btime = clock();
	int i,j,k,w;
	w = s/2;
	for(i=0;i<s;++i){
		for(j=0;j<s;++j){
			if((i+j >= s) && (i < w) && (j >= w)){
				printf("1");
			}
			if((i+j < s ) && (i < w) && (j < w) && (j <= i)){
				printf("2");
			}
			if((i+j < s) && (i >= w) && (j < w)){
				printf("3");
			}
			if((i+j >= s) && (i >= w) && (j >= w) && (i <= j)){
				printf("4"); printf(" ");
			}
			
			else{
			printf(" ");
			}
		}
		printf("\n");
	}
	etime = clock();
	ntime = ((double) (etime - btime)) / CLOCKS_PER_SEC;
	return ntime;
}
int main(){
	printf("welcome to the butterfly pattern drawing programme\n'1' for randomized\n'2' for defined\n");
	srand(time(NULL));
	int c,s,n,i;
	scanf("%d",&c);
	if(c == 1){
		for(i=1;i<20;++i){
			s = 6+rand()%54;
				while(s%2 != 0){
					s = 6+rand()%55;
				}
		}
		printf("obtained random number = %d\n",s);	
	}
	if(c == 2){
		printf("please enter size between 5 and 55 an even number\n");
		scanf("%d",&s);
		while(s%2 != 0){
			printf("please enter even number\n");
			scanf("%d",&s);
			}
		}
	printf("programme took %lf ms time to complete\n",bfpattern(s));
}

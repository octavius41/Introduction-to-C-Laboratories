#include <stdio.h>
int len(char c[]){			//int len(char c[]){
	int x,y;				//	int x;
	y=0;					//	if(c[x] == '\0'){
	while(c[x] != '\0'){	//		return x;
		x = x+1;			//	}
	}						// return x+1;   (I wrote the recursive function but somehow it effected the code so I will leave it here, sorry)
	return x;
}

int paltest(char c[]){
	int x,y,z,m,n,t;
	t=1;
	char r[100];
	y = len(c) -1 ;
	for(x=0;c[x] != '\0';x++){
		r[x] = c[x];
	}
	for(m=0;m<y;++m){
		z = r[m];
		r[m] = c[y];
		r[y] = z;
		y = y-1;
	}
	y = len(c) -1;
	for(n=0;n<y;++n){
		if(r[n] != c[n]){
			t = 0;
			break;
		}
	}
	return t;
}

int main(){
	int x,y,z;
	char s1[100];
	printf("enter the string that you want to test\n");
	scanf("%s",s1);
	for(x=0;s1[x] != '\0';++x){
		printf("%2c",s1[x]);
	}
	z = paltest(s1);
	printf("\nlength of string: %d \n",len(s1));
	if(z == 0){
		printf("entered word is not a palindrome \n");
	}
	if(z == 1){
		printf("entered word is a palindrome \n");
	}
}

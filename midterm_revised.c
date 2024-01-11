#include <stdio.h>   
//CAPITAL LETTERS AND ASCII VALUES

//int main(){
//	int i;
//	char c;
//	printf("Letter        ASCII CODE\n");
//	printf("=========================\n");
//	for(i='A';i<='Z';i++){
//		c = putchar(i);
//		printf("%c    %c    %d\n",c,c,i);   // I DIDN'T WRITE '\n' ON EXAM SHEET
//	}
//	return 0;
//}

// MAXINDEXFINDER AND AVERAGE FUNCTIONS WITH CALCULATING CODE(MAIN)

int FindIndexofMaximumElementofArray(int Array[], int NumberofElementsoFArray){
	int i,max,x;
	i = 0;
	max = Array[i]; x = i;
	for (i=0;i<=NumberofElementsoFArray;i++){
		if(Array[i+1]>max){
			x = i +1; max = Array[i+1];
		}
		if(Array[i+1]<max){
			max = max;x = x;
		}
		if(Array[i+1]==max){
			max = max;x = x;
		}
	}return x;
} // I indicated that this is the end paranthesis of the written function because I ran out of lines on the sheet.		
	
float AverageofArray(int Array[], int NumberofElementsoFArray){
	float sum, avg;
	int i;
	sum = 0;
	for(i=0;i<=NumberofElementsoFArray;i++){
		sum = sum + Array[i];
	}
	avg = sum / (NumberofElementsoFArray +1);       // no +1 to give exact size of array because of for loop starts from index 0.
	return avg;
}

int main(){ // I assume that defined MAXARRAYSIZE is 11, also I found a need to indicate that I included my functions too.
	int grades[10];
	int ct=0;     // I forgot to define ct on exam sheet.	
	int i=0;
	while(ct<=10){
		printf("enter grade\n");
		scanf("%d",&grades[i]);   // I forgot to put '&' to save the entered value.
		++i;
		++ct;
	}
	printf("index %d\n",FindIndexofMaximumElementofArray(grades,10)); 
	printf("average %f\n",AverageofArray(grades,10));   // I wrote grades[] on exam paper (on both parameters index and average).
		
	return 0;	
}


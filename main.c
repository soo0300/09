#include<stdlib.h>
#include<stdio.h>

#define ROWS 3
#define COLS 3 


void add(int A[][COLS], int B[][COLS], int C[][COLS]){
	int i; int j;
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLS; j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	
	}
};


void show(int C[][COLS]){
	int i; int j;
	for(i=0; i<ROWS; i++){
		for(j=0; j<COLS; j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
};


int main(void){
	int i=0; int j=0;

	int A[ROWS][COLS]={	{2,3,0}, {8,9,1}, {7,0,5} };
	int B[ROWS][COLS]={ {1,0,0}, {0,1,0}, {0,0,1} };

	int C[ROWS][COLS];
	
		
	add(A,B,C);
	show(C);
	
	
	return 0;

	
}

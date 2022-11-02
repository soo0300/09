#include <stdio.h>
#include <stdlib.h>
#define SIZE 4


void square(int a[], int size);
void print(int a[], int size);

void square(int a[], int size){
	int i;
	for(i=0; i<size; i++){
		a[i]=a[i]*a[i];
	}
}

void print(int a[], int size){
	int i;
	for(i=0; i<size; i++){
		printf("%3d",a[i]);
	}
	printf("\n");
	
}
int main(void){
	
	int list[SIZE]={1,2,3,4};
	square(list,SIZE);
	print(list,SIZE);
	return 0;

}

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
	int i;
	int a[SIZE]={1,2,3,4,50};
	int b[SIZE]={1,2,300,4,5};
	
	int flag_same=1;
	if(a==b){
		printf("�迭�� ����\n");
	}else{
		printf("�迭�� �ٸ���\n");
	} 
	
	for(i=0; i<SIZE; i++){
		if(a[i]!=b[i]){
			flag_same=0;
		}
		if(flag_same==0){
			printf("%d index �迭 �������� �ٸ���\n",i);
		}
		flag_same=1;
	}

}

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void){
	int i, average;
	int sum=0;
	int grade[SIZE];
	for(i=0; i<SIZE; i++){		
		printf("점수를 입력하세요. \n");
		scanf("%d",&grade[i]);
		sum+=grade[i];
	}
	average = sum/SIZE;
	printf("성적 평균: %d\n",average);
	return 0;
	
}

#include <stdio.h>
int main() {
	int array[5];
	int i;
	int high, avg;
	int sum = 0;
	for(i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
		sum += array[i];
	}
	avg = sum / 5;
	high = 0;
	for(i = 0; i < 5; i++) {
		if(array[i] > high) {
			high = array[i];
		}
	}
	printf("평균 : %d\n", avg);
	printf("최고 : %d", high);
}


		

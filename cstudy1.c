#include <stdio.h>
int main() {
	int array[5];
	int x, i;
	int y = 0;
	for(i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	scanf("%d", &x);
	for(i = 0; i < 5; i++) {
		if(x == array[i]) {
			y++;
		}
	}
	printf("%d", y);

	return 0;
}

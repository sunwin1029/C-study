#include <stdio.h>
int Queue[1000000];
int i = 0;
int j;
int push() {
	scanf("%d", &Queue[i]);
	i++;
}
int pop() {
	printf("%d\n", Queue[0]);
	for(j = 0; j < i; j++) {
	Queue[j] = Queue[j+1];
	}
	Queue[i] = 0;
	i--;
	}
int size() {
	printf("%d\n", i);
}
int empty() {
	if(Queue[i-1] == 0) {
	   printf("True\n");
	}
	else if(Queue[i-1] != 0) {
		printf("False\n");
	}
}
int front() {
	if(Queue[i-1] == 0) {
		printf("-1\n");
	}
	else if(Queue[i-1] != 0) {
		printf("%d\n", Queue[i-1]);
	}
}
int back() {
	if(Queue[0] == 0) {
		printf("-1\n");
     }
      else if(Queue[0] != 0) {
          printf("%d\n", Queue[0]);
     }
  }
int main() {
int x;
while(1) {
	scanf("%d", &x);
	switch(x)
	{
		case 0 :
				return 0;
		case 1 :
				push();
				break;
		case 2 :	
				pop();
				break;
		case 3 :
				size();
				break;
		case 4 :
				empty();
				break;
		case 5 :
				front();
				break;
		case 6 :
				back();
				break;
	}
}
}



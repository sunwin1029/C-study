#include <stdio.h>
int x;
int num = 0;
int array[1000000];
int push()
{
	scanf("%d", &x);
	array[num] = x;
	num ++;
}
int pop()
{
	if(array[num-1] == 0) {
		printf("-1\n");
	}
	else {
	printf("%d\n", array[num-1]);
	array[num-1] = 0;
	num--;
	}
}
int size()
{
	printf("%d\n", num);
}
int empty()
{
	if(array[num-1] == 0) 
		printf("True\n");
	else 
		printf("False\n");

}
int top()
{
	if(array[num-1] == 0)
	printf("-1\n");
	else
	printf("%d\n", array[num-1]);
}

int main() {
	int q;
	while(1) {
		scanf("%d", &q);

		switch(q)
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
				top();
				break;
		}

	}
}


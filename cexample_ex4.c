/*
www.hi2programming.com
The program to find the sum of first 10 numbers 1-10
*/
#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	for (i = 1; i < 11; i++) {
		sum = sum + i;
	}
	printf("The sum is %d=",sum);
	return 0;
}
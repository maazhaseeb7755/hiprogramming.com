/*
www.hi2programming.com
The program to find the sum of first 10 numbers and their average
*/
#include <stdio.h>

int main() {
	int i;
	int sum = 0;
	float avg = 0.0;
	for (i = 1; i < 11; i++) {
		sum = sum + i;
	}
	printf("The sum is %d=", sum);
	avg = sum / 10;
	printf("\nThe Average is %2f=",avg);
	return 0;
}
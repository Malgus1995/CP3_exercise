#include<stdio.h>


#define PI 3.14

int main() {
	
	float r;

	scanf("%f", &r);
	double  res = r * r * PI;
	printf("%f\n", res);
	//fflush(stdin);
	scanf(" %f", &r);

	printf("%Le\n", r * r);
	printf("%Le\n", r * r * r);
	fflush(stdin);
	
	char a;
	//a = getchar();
	scanf(" %c", &a);
	printf("%c\n", a);
	printf("%4c\n", a);
	printf("%8c\n", a);


	return 0;
}
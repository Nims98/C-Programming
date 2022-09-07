#include <stdio.h>
#include<math.h>
int main(void){

	float a;
	float b;
	float area;
	printf("Enter the Radius of the Cylinder : ");
	scanf("%f",&a);
	printf("Enter the Length of the Cylinder : ");
	scanf("%f",&b);
	area = (M_PI*a*a*b);
	printf("Area = %f \n",area);
	return(0);
}

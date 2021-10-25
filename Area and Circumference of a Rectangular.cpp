//Area and Circumference of a Rectangle
#include<stdio.h>
int main()
{
	int length, width, area, circumference;
	printf("Enter the value of Length & Width: ");
	scanf_s("%d %d", &length, &width);
	area = length * width;
	circumference = 2 * (length + width);
	printf("Area of the Rectangle is : %d\n", area);
	printf("Circumference of the Rectangle is : %d\n", circumference);
	return 0;
}
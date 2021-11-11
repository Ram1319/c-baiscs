//find the area & perimeter of a square when side is given

#include<stdio.h>
void main()
{
	int side, area, perimeter;
	printf("side of the square:");
	scanf("%d", &side);
	area = side*side;
	perimeter = 4*side;
	printf("area of square is: %d\n", area);
	printf("perimeter of square is: %d", perimeter);
}

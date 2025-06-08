//union加上struct
#include <stdio.h>
#include <string.h>
#include <math.h>
#define M_PI 3.1415923535

union Shape{
	float radius;
	struct{
		float length;
		float width;
	} rectangle;
	struct{
		float base;
		float height;
	} triangle;
};

int main(){
	int shapeType;
	union Shape shape;
	float area;
	
	printf("Select shape type (1 for Circle, 2 for Rectangle, 3 for Triangle): ");
	scanf("%d", &shapeType);
	
	switch (shapeType) {
		case 1:
			printf("Enter radius: ");
			scanf("%f", &shape.radius);
			area = M_PI * shape.radius * shape.radius;
			printf("Area of the circle: %.2f\n", area);
			break;
		case 2:
			printf("Enter length: ");
			scanf("%f", &shape.rectangle.length);
			printf("Enter width: ");
			scanf("%f", &shape.rectangle.width);
			area = shape.rectangle.length * shape.rectangle.width;
			printf("Area of the Rectangle: %.2f\n", area);
			break;
		case 3:
			printf("Enter base: ");
			scanf("%f", &shape.triangle.base);
			printf("Enter height: ");
			scanf("%f", &shape.triangle.height);
			area = 0.5 * shape.triangle.base * shape.triangle.height;
			printf("Area of the Triangle: %.2f\n", area);
			break;
		default:
			printf("Invalid shape type selected.\n");
			break;
			
	}
	return 0;

}

//輸出結果
/*
Select shape type (1 for Circle, 2 for Rectangle, 3 for Triangle): 1
Enter radius: 3
Area of the circle: 28.27
*/
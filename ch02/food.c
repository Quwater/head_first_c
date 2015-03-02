#include <stdio.h>

int main()
{
	char food[4];
	printf("Enter favorite food: ");
	fgets(food, sizeof(food), stdin);
	printf("favorite food: %s\n", food);
}
#include <stdio.h>
#include "catalog_lable.h"

void catalog(struct fish f)
{
	printf("%s is a %s with %d teeth, He is %d\n", f.name, f.species, f.teeth, f.age);
}

void lable(struct fish f)
{
	printf("Name:%s\nSpecies:%s\n%d years old, %d teeth\n", f.name, f.species, f.teeth, f.age);
}
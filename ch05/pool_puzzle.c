#include <stdio.h>
#include "catalog_lable.h"

int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	lable(snappy);

	return 0;
}


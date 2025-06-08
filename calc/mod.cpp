#include "sub.h"

int mod(int x, int y) //³ª¸ÓÁö
{
	int d = 0;
	while (x >= y) {
		d = sub(x, y);
	}
	return d;
}
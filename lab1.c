#include <stdio.h> // my first lab
#include <math.h>

int main() {
	float x,y,res; 

	x = 0.042;
	y = 3.03;
	res = 13*pow(x,4) - log10 (y+x) + tan(sqrt(y));

	printf("%f \n", res);
	return 0;
}
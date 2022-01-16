#include <stdio.h>

int main()
{
	unsigned int  val1 = -22;
	unsigned  val2 = 33;
	int  val3 = 12;
	int  val4 = 3;
	int val6 = -11;
	unsigned int res;
	int res1;
	int res2;

	res = val1 * val2;
	res1 = val3 % val4;
	res2 = val6 %  val4;

	printf("%u\n", res);
	printf("%d\n", res1);
	printf("%d\n", res2);

	return 0;
}

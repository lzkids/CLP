#include <stdio.h>

int main ()
{
	int u = 32;
	int v = 26;
	while (v!=0) {
		int temp = u%v;
		u = v;
		v = temp;
	}
	printf("%d\n",u);
	return 0;
}

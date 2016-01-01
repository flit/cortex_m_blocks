
#include <stdio.h>

int main() {
	__block int i=0;
	void (^myBlock)(int x);

	myBlock = ^(int x){
	    i += x;
	};

	for (; i<1000; ++i) {
	    myBlock(i);
	}
	printf("i=%d\n", i);

	while (1) {}

	return 0;
}


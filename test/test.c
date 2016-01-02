
#include <stdio.h>
#include <stdlib.h>
#include "Block.h"

extern const char *_Block_dump(const void *block);

typedef void (^myblock_t)(int x);

int g = 0;

myblock_t genblock(int a, int b)
{
    myblock_t blk = ^(int x){
        g += a * b + x;
    };

    return Block_copy(blk);
}

typedef struct foo {
    myblock_t blk;
} foo_t;

foo_t * init_foo(myblock_t b)
{
    foo_t * f = (foo_t *)malloc(sizeof(foo_t));
    f->blk = Block_copy(b);
    return f;
}

void handle_foo(foo_t * f)
{
    f->blk(10);
}

void free_foo(foo_t * f)
{
    Block_release(f->blk);
    free(f);
}

int main() {
	__block int i=0;
	void (^myBlock)(int x);

	myBlock = ^(int x){
	    i += x;
	};

	printf("myBlock=%s\n", _Block_dump(myBlock));

	for (; i<1000; ++i) {
	    myBlock(i);
	}
	printf("i=%d\n", i);

	myblock_t t = genblock(1, 2);
	printf("\nt=%s\n", _Block_dump(t));
	myblock_t t2 = Block_copy(t);
	printf("\nt2=%s\n", _Block_dump(t2));
	t(3);
	printf("g=%d\n", g);
	Block_release(t2);
	Block_release(t);

	__block int z = 0;
	foo_t * f = init_foo(^(int x){
	    z += x;
	});
	printf("\nf->blk=%s\n", _Block_dump(f->blk));
	handle_foo(f);
	printf("z=%d\n", z);
	free_foo(f);

	while (1) {}

	return 0;
}


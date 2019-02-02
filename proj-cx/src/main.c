#include <stdio.h>
#include <stdlib.h>
#include <proj-cx.h>

int main(void) {
#if C1SRC == 2
	puts("!!!Hello World!!!" );
#endif
	puts(FOO_CX);
	return EXIT_SUCCESS;
}

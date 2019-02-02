#include <stdio.h>
#include <stdlib.h>
#include <proj-cn.h>

int main(void) {
#if C1SRC == 2
	puts("!!!Hello World!!!" );
#endif
	puts(FOO_CN);
	return EXIT_SUCCESS;
}

#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 2;
	int c = 3;
	int d  = 4;
    int count = 0;
    int *p = &count;
	printf("%p\n", p);
	printf("%d\n", *p);
    for (i = 0; i < 10; i++) {
        (*p)++; // Do you understand this line of code and all the other permutations of the operators? ;)
    }

	printf("count is %d \n", count);
    printf("Thanks for waddling through this program. Have a nice day.\n");
    return 0;
}

#include <stdio.h>

#define MAX_LEN 80

int main(int argc, char *argv[]) {
    char a_word[MAX_LEN];
	printf("the argument count is %d\n", argc);
    printf("What's your name?\n");
    printf("Hey, %s\nI just really wanted to say hello to you.\nI hope you have a wonderful day.\n", argv[1]);

    return 0;
}

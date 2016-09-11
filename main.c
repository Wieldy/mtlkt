#include <stdio.h>
#include <stdlib.h>

void usage() {

	printf("Options     Meaning           \n");
	printf("-h          displays this menu\n");
	printf("-c          uses calculator   \n");
}

int main(int argc, char *argv[]) {

	if(argc != 2) {
		usage();
	}

	while((argc > 1) && (argv[1][0] == '-')) {

		switch(argv[1][1]) {

			case 'h':
				usage();
				break;

			/* case 'c':
				calc();
				break; */

			default:
				printf("Argument does not exist: %s\n", argv[1]);
		}

		++argv;
		--argc;
	}

	return 0;
}

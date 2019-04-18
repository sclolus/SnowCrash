#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>

int	main(int argc, char **argv) {
	uint32_t i = 0;
	char buf[2048];

	FILE * file = fopen(argv[1], "r");
	char *str = fgets(buf, sizeof(buf), file);

	while (str[i]) {
		str[i] -= i;
		i++;
	}
	printf("%s\n", str);
	return (0);
}

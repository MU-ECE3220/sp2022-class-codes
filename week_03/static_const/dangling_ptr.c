#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char *str = NULL;
	str = calloc(1,sizeof(*str)*50);
	strncpy(str, "Ekincan", 50);
	printf("Address: %p\n", str);
	printf("String value: %s\n", str);
	free(str);
	str = NULL;
	printf("Address: %p\n", str);
	return 0;
}

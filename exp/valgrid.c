#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct example {
	int a;
	char *b;
};

int main(void)
{
	struct example *inst = NULL;
	inst = malloc (sizeof(struct example));
	inst->a = 10;
	inst->b = malloc(strlen ("hello")+1);
	strcpy(inst->b, "hello");
	printf("%d\n %s", inst->a, inst ->b);
	free(inst->b);
	free(inst);
}

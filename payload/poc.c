#include <stdio.h>

int samba_init_module(void)
{
	printf("hello from cve-2017-7494 poc! ;)\n");

	return 0;
}
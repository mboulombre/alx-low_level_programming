#include <stdio.h>
int main(void)
{
int n;
int l[5];
int *p;
l[2] = 1024;
p = &n;
/*
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", l[2]);
return (0);
}


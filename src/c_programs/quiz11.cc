#include <stdio.h>

void swap(int a, int b);

int main()
{
int n = 3, m = 4;
swap(n, m);
printf("n = %d, m = %d\n", n, m);
}

void swap(int n, int m)
{
int t = n;
n = m;
m = t;
}


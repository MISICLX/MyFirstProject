#include <stdio.h>
#include <assert.h>

int multiply(int a, int b)
{
    return a * b;
}

int test()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-3, 2) == 6);
}

int main()
{
    printf("Hello, World!");
    test();
    return 0;
}
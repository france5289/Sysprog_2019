/*
Pointer vs Pointer to Pointer
*/
#include <stdio.h>
int B = 2;
void func(int **p)
{
    printf("%x\n", *p);
    *p = &B;
}
int main()
{
    int A = 1, C = 3;
    int *ptrA = &A;
    printf("%x\n", &A);
    printf("%x\n", ptrA);
    func(&ptrA);
    printf("%d\n", *ptrA);
    return 0;
}
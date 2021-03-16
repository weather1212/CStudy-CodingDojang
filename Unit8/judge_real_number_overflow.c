/*	judge_real_number_overflow.c	*/
#include <stdio.h>
#include <float.h>

int main()
{
    float num1 = FLT_MAX * (-1);

    num1 = num1 * 1000.0f;

    printf("%f\n", num1);

    return 0;
}
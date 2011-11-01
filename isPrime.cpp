#include "isPrime.h"
#include <cmath>


bool isPrime::IsPrime(unsigned long num)
{
    unsigned long divisor=2;
    double umbral;
    umbral = sqrt(static_cast<double>(num));
    while (divisor<=umbral)
    {
        if (IsPrime(divisor))
        {
            if (num%divisor==0)
                return false;
        }
        divisor++;
    }
    return true;
}

unsigned long isPrime::BelowPrime (unsigned long num)
{
    if (num%2 == 0) // si num es par
    {
        num = num-1;
    }

    while (isPrime::IsPrime(num)==false)
    {
        num = num-2;
    }
    return num;
}

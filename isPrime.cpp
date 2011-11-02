#include "isPrime.h"
#include <cmath>

set<unsigned long> isPrime::calculados;

bool isPrime::IsPrime(unsigned long num)
{
    if (calculados.find(num)!=calculados.end()) return true;
    double umbral;
    umbral = sqrt(static_cast<double>(num));
    unsigned long divisor=2;
    while (divisor<=umbral)
    {
        if (IsPrime(divisor))
        {
            if (num%divisor==0)
                return false;
        }
        if (divisor!=2) divisor +=2;
        else divisor++;
    }
    calculados.insert(num);
    return true;
}

unsigned long isPrime::BelowPrime (unsigned long num)
{
    if (num%2==0 && num!=2) // si num es par
    {
        num--;
    }

    while (isPrime::IsPrime(num)==false)
    {
        num -= 2;
    }
    return num;
}

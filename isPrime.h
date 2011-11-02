#ifndef ISPRIME_H
#define ISPRIME_H
#include <set>
using namespace std;

class isPrime
{
    private:
        static set <unsigned long> calculados; //contendrá todos los primos ya calculados.
    public:
        static bool IsPrime (unsigned long num); //return true if num is prime, false if it is not.
        static unsigned long BelowPrime (unsigned long num); //return the next prime number under num.
};

#endif // ISPRIME_H

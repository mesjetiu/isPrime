#ifndef ISPRIME_H
#define ISPRIME_H


class isPrime
{
    public:
        static bool IsPrime (unsigned long num); //return true if num is prime, false if it is not.
        static unsigned long BelowPrime (unsigned long num); //return the next prime number under num.
};

#endif // ISPRIME_H

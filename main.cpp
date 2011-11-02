///Ejemplo de uso de la librería

#include <iostream>
#include "isPrime.h"

using namespace std;

int main()
{
    unsigned long num;

    cout << endl << "Introduzca un entero positivo: " << endl;
    while (cin >> num)
        cout << "El numero primo mas cercano por debajo de "<< num << " es " << isPrime::BelowPrime(num) << endl << endl;

    return 0;
}

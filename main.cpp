///Ejemplo de uso de la librería

#include <iostream>
#include "isPrime.h"

using namespace std;

int main()
{
    unsigned long num;

    cout << endl << "Introduzca un entero positivo: " << endl;
    cin >> num;
    cout << "El numero primo mas cercano a "<< num << " es " << isPrime::BelowPrime(num) << endl << endl;

    return 0;
}

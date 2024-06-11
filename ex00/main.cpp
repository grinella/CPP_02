#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;         // Testa il costruttore di default
    Fixed b(a);      // Testa il costruttore di copia
    Fixed c;         // Testa l'operatore di assegnazione di copia

    c = b;           // Assegna b a c

    std::cout << a.getRawBits() << std::endl; // Stampa il valore grezzo di a
    std::cout << b.getRawBits() << std::endl; // Stampa il valore grezzo di b
    std::cout << c.getRawBits() << std::endl; // Stampa il valore grezzo di c

    return 0;
}
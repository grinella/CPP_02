#include "Fixed.hpp"
#include <iostream>

// inizializzazione di _value a 0
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Costruttore copia
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

// Operatore di assegnazione di copia che assegna i valori di un'altra istanza a questa
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Verifica dell'auto-assegnazione
        this->_value = other.getRawBits();
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Funzione membro che restituisce il valore grezzo del numero a virgola fissa
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

// Funzione membro che imposta il valore grezzo del numero a virgola fissa
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}
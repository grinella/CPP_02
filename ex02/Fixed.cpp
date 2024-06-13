#include "Fixed.hpp"

// inizializzazione di _value a 0
Fixed::Fixed() : _value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i) {
    // std::cout << "Int constructor called" << std::endl;
    this->_value = i << this->_fractBits;
}

Fixed::Fixed(const float f) {
    // std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(f * (1 << this->_fractBits));
}

// Costruttore copia
Fixed::Fixed(const Fixed& other) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = other; // Utilizza l'operatore di assegnazione per copiare il valore
}

// Operatore di assegnazione di copia che assegna i valori di un'altra istanza a questa
Fixed& Fixed::operator=(const Fixed& other) {
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) { // Verifica dell'auto-assegnazione
        this->_value = other.getRawBits();
    }
    return *this;
}

// COMPARAZIONI
bool Fixed::operator<(const Fixed& other) const {
    if (this->toFloat() < other.toFloat()) {
        return (true);
    }
    return (false);
}

bool Fixed::operator>(const Fixed& other) const {
    if (this->toFloat() > other.toFloat()) {
        return (true);
    }
    return (false);
}

bool Fixed::operator<=(const Fixed& other) const {
    if (this->toFloat() <= other.toFloat()) {
        return (true);
    }
    return (false);
}

bool Fixed::operator>=(const Fixed& other) const {
    if (this->toFloat() >= other.toFloat()) {
        return (true);
    }
    return (false);
}

bool Fixed::operator==(const Fixed& other) const {
    if (this->toFloat() == other.toFloat()) {
        return (true);
    }
    return (false);
}

bool Fixed::operator!=(const Fixed& other) const {
    if (this->toFloat() != other.toFloat()) {
        return (true);
    }
    return (false);
}

// OPERAZIONI
float Fixed::operator+(const Fixed& other) {
    return (this->toFloat() + other.toFloat()); 
}

float Fixed::operator-(const Fixed& other) {
    return (this->toFloat() - other.toFloat()); 
}

float Fixed::operator*(const Fixed& other) {
    return (this->toFloat() * other.toFloat()); 
}

float Fixed::operator/(const Fixed& other) {
    return (this->toFloat() / other.toFloat()); 
}

// INCREMENTI E DECREMENTI
Fixed Fixed::operator++(int) { //a++
    Fixed num;
    num = *this;
    ++(*this);
    return (num);
}

Fixed& Fixed::operator++() { //++a
    int num;
    num = this->getRawBits();
    this->setRawBits(++num);
    return (*this);
}

Fixed Fixed::operator--(int) { //a--
    Fixed num;
    num = *this;
    --(*this);
    return (num);
}

Fixed& Fixed::operator--() { //--a
    int num;
    num = this->getRawBits();
    this->setRawBits(--num);
    return (*this);
}


const Fixed& Fixed::max(const Fixed &a, const Fixed &b) {
    if (a < b) {
        return (b);
    }
    else
        return (a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b) {
    if (a > b) {
        return (b);
    }
    else
        return (a);
}


Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

// Funzione membro che restituisce il valore grezzo del numero a virgola fissa
int Fixed::getRawBits(void) const {
    return this->_value;
}

// Funzione membro che imposta il valore grezzo del numero a virgola fissa
void Fixed::setRawBits(int const raw) {
    this->_value = raw;
}

float   Fixed::toFloat(void) const {
    return ((float)(this->getRawBits()) / (1 << _fractBits));
}

int     Fixed::toInt(void) const {
    return (this->getRawBits() >> this->_fractBits);
}

std::ostream &operator << (std::ostream &stream, const Fixed &i) {
    stream << i.toFloat();
    return (stream);
}
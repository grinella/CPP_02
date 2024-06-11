#pragma once

class Fixed {
private:
    int _value;                             // Memorizza il valore del numero a virgola fissa
    static const int _fractBits = 8;         // Numero di bit frazionari, sempre 8

public:
    Fixed();
    Fixed(const Fixed& other);              // Costruttore di copia
    Fixed& operator = (const Fixed& other);   // Operatore di assegnazione di copia
    ~Fixed();                               // Distruttore

    int getRawBits(void) const;             // Restituisce il valore grezzo
    void setRawBits(int const raw);         // Imposta il valore grezzo
};
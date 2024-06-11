#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _value;                             // Memorizza il valore del numero a virgola fissa
	static const int _fractBits = 8;         // Numero di bit frazionari, sempre 8

public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &other);
	Fixed& operator = (const Fixed& other);   // Operatore di assegnazione di copia
	~Fixed();                               // Distruttore

	int		getRawBits(void) const;             // Restituisce il valore grezzo
	void	setRawBits(int const raw);         // Imposta il valore grezzo

	float   toFloat( void ) const;
	int     toInt( void ) const;
};

std::ostream &operator << (std::ostream &stream, const Fixed &i);

#endif
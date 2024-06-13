#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _value;                              // Memorizza il valore del numero a virgola fissa
	static const int _fractBits = 8;         // Numero di bit frazionari, sempre 8

public:
	Fixed();
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &other);
	Fixed& operator = (const Fixed& other);   // Operatore di assegnazione di copia

	// comparazioni
	bool operator < (const Fixed& other) const;
	bool operator > (const Fixed& other) const;
	bool operator <= (const Fixed& other) const;
	bool operator >= (const Fixed& other) const;
	bool operator == (const Fixed& other) const;
	bool operator != (const Fixed& other) const;

	// operazioni
	float operator + (const Fixed& other); 
	float operator - (const Fixed& other);
	float operator * (const Fixed& other);
	float operator / (const Fixed& other); 

	// incrementi e decrementi
	Fixed operator ++ (int);
	Fixed& operator ++ (void);
	Fixed operator -- (int);
	Fixed& operator -- (void);

	// massimi e minimi
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);


	~Fixed();

	int		getRawBits(void) const;             // Restituisce il valore grezzo
	void	setRawBits(int const raw);         // Imposta il valore grezzo

	float   toFloat( void ) const;
	int     toInt( void ) const;
};

std::ostream &operator << (std::ostream &stream, const Fixed &i);

#endif
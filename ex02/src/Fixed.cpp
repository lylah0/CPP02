/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:41:47 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/19 14:57:01 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

const int	Fixed::_fract = 8;

//~constructors / destructor~

Fixed::Fixed() : _fixed(0) {
	std::cout << "Default constructor called." << std::endl;

}

Fixed::Fixed(const float nb){
	std::cout << "Float constructor called" << std::endl;
	_fixed = (int)roundf(nb * (1 << _fract));
}

Fixed::Fixed(const Fixed &src) {
	_fixed = src._fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	std::cout << "Int constructor called" << std::endl;
	this->_fixed = value << _fract;
}

Fixed::~Fixed(){
	std::cout << "Destructor called." << std::endl;
}

//~operator functions~

bool	Fixed::operator>(const Fixed& rhs) const {
	return (this->_fixed > rhs._fixed);
}

bool	Fixed::operator<(const Fixed& rhs) const {
	return (this->_fixed < rhs._fixed);
}

bool	Fixed::operator>=(const Fixed& rhs) const {
	return (this->_fixed >= rhs._fixed);
}

bool	Fixed::operator<=(const Fixed& rhs) const {
	return (this->_fixed <= rhs._fixed);
}

bool	Fixed::operator==(const Fixed& rhs) const {
	return (this->_fixed == rhs._fixed);
}

bool	Fixed::operator!=(const Fixed& rhs) const {
	return (this->_fixed != rhs._fixed);
}

Fixed&	Fixed::operator=(const Fixed &rhs){
	std::cout << "Copy assignment operator called" << std::endl;
		if (this != &rhs)
			_fixed = rhs._fixed;
		return (*this);
}

Fixed&	Fixed::operator+(const Fixed &rhs){
	this->_fixed += rhs._fixed;
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed &rhs){
	this->_fixed -= rhs._fixed;
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed &rhs){
	this->_fixed *= rhs._fixed;
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed &rhs){
	this->_fixed /= rhs._fixed;
	return (*this);
}

//~other class functions~

int	Fixed::getRawBits() const{
	return (_fixed);
}

void	Fixed::setRawBits(int const raw){
	_fixed = raw;
}

float	Fixed::toFloat() const{
	return ((float)this->_fixed / (1 << _fract));
}

int		Fixed::toInt() const{
	return (this->_fixed >> _fract);
}

//~min/max~

Fixed&	Fixed::min(Fixed& a, Fixed& b){
	if (a < b)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b){
	if (a < b)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b){
	if (a > b)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b){
	if (a > b)
		return (a);
	return (b);
}

//~outside functions~

std::ostream&	operator<<(std::ostream& obj, const Fixed& rhs){
	obj << rhs.toFloat();
	return (obj);
}

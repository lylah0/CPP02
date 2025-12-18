/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:41:47 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/18 17:06:58 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed() : _fixed(0) {
	std::cout << "Default constructor called." << std::endl;

}

// Fixed::Fixed(const float nb){
// 	this->_fixed = nb >> _fract;
// 	std::cout << "Float constructor called" << std::endl;
// }

Fixed::Fixed(const Fixed &src) {
	_fixed = src._fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value){
	this->_fixed = value << _fract;
}

Fixed&	Fixed::operator=(const Fixed &rhs){
	std::cout << "Operator= function called" << std::endl;
		if (this != &rhs)
			_fixed = rhs._fixed;
		return *this;
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor called." << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits function called" << std::endl;
	return (_fixed);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called" << std::endl;
	_fixed = raw;
}

float	Fixed::toFloat() const{
	return ((float)this->_fixed / (1 << _fract));
}

int		Fixed::toInt() const{
	return (this->_fixed >> _fract);
}

std::ostream&	operator<<(std::ostream& obj, const Fixed& rhs){
	rhs.toFloat();
	return (obj);
}

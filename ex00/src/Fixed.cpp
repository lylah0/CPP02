/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:41:47 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/17 18:21:50 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed() : _num(0) {
	std::cout << "Default constructor called." << std::endl;

}

Fixed::Fixed(const Fixed &src) {
	_num = src._num;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed &rhs){
	std::cout << "Operator= function called" << std::endl;
		if (this != &rhs)
			_num = rhs._num;
		return *this;
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor called." << std::endl;
}

int	Fixed::getRawBits() const{
	std::cout << "getRawBits function called" << std::endl;
	return (_num);
}

void	Fixed::setRawBits(int const raw){
	std::cout << "setRawBits function called" << std::endl;
	_num = raw;
}

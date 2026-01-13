/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:02:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/13 15:44:51 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	Fixed	c(3);
	Fixed	d(2);
	Fixed	e(1000);
	Fixed	f(1);

	std::cout << "\n===test 1 : ++/--" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << "\n===test 2 : +-*/" << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << (c - d) << std::endl;
	std::cout << (d + d) << std::endl;
	std::cout << (c * c) << std::endl;
	std::cout << (c / d) << "\n" << std::endl;

	std::cout << "\n===test 3 : max/min" << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	std::cout << Fixed::min((const Fixed&)c, (const Fixed&)d) << std::endl;
	std::cout << Fixed::max((const Fixed&)c, (const Fixed&)d) << std::endl;

	std::cout << "\n===test 4 : >=/<=/>/<" << std::endl;
	std::cout << (c > d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c <= d) << "\n" << std::endl;

	return (0);
}

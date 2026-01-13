/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:02:25 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/13 15:08:07 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

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

	Fixed	c(3);
	Fixed	d(2);

	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << (c - d) << std::endl;
	std::cout << (d + d) << std::endl;
	std::cout << (c * c) << std::endl;
	std::cout << (c / d) << "\n" << std::endl;

	std::cout << "\n===test 3 : max/min" << std::endl;
	std::cout << Fixed::max(c, d) << std::endl;
	std::cout << Fixed::min(c, d) << std::endl;
	std::cout << Fixed::max(1000, 1) << std::endl;
	std::cout << Fixed::min(821739, -11291) << std::endl;

	std::cout << "\n===test 4 : >=/<=/>/<" << std::endl;
	std::cout << (c > d) << std::endl;
	std::cout << (c >= d) << std::endl;
	std::cout << (c < d) << std::endl;
	std::cout << (c <= d) << std::endl;

	return (0);
}

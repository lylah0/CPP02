/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:34:37 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/19 14:53:01 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <iosfwd>

class Fixed{
	private:
		int							_fixed;
		static const int			_fract;
	public:
		Fixed();
		Fixed(const float nb);
		Fixed(const Fixed &src);
		Fixed(const int value);
		~Fixed();

		bool						operator>(const Fixed& rhs) const;
		bool						operator<(const Fixed& rhs) const;
		bool						operator>=(const Fixed& rhs) const;
		bool						operator<=(const Fixed& rhs) const;
		bool						operator==(const Fixed& rhs) const;
		bool						operator!=(const Fixed& rhs) const;
		Fixed&						operator=(const Fixed &rhs);
		Fixed&						operator+(const Fixed &rhs);
		Fixed&						operator-(const Fixed &rhs);
		Fixed&						operator*(const Fixed &rhs);
		Fixed&						operator/(const Fixed &rhs);

		int							getRawBits() const;
		void						setRawBits(int const raw);
		float						toFloat() const;
		int							toInt() const;

		static						Fixed& min(Fixed& a, Fixed& b);
		static const 				Fixed& min(const Fixed& a, const Fixed& b);
		static						Fixed& max(Fixed& a, Fixed& b);
		static const				Fixed& max(const Fixed& a, const Fixed& b);

};

std::ostream&	operator<<(std::ostream& obj, const Fixed& rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:34:37 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/18 19:30:01 by lylrandr         ###   ########.fr       */
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

		Fixed&						operator>(const Fixed &rhs);
		Fixed&						operator<(const Fixed &rhs);
		Fixed&						operator>=(const Fixed &rhs);
		Fixed&						operator<=(const Fixed &rhs);
		Fixed&						operator==(const Fixed &rhs);
		Fixed&						operator!=(const Fixed &rhs);
		Fixed&						operator=(const Fixed &rhs);
		Fixed&						operator+(const Fixed &rhs);
		Fixed&						operator-(const Fixed &rhs);
		Fixed&						operator*(const Fixed &rhs);
		Fixed&						operator/(const Fixed &rhs);

		int							getRawBits() const;
		void						setRawBits(int const raw);
		float						toFloat() const;
		int							toInt() const;

		static std::string&			min(std::string& nb1, std::string& nb2);
		static const std::string&	minconst(const std::string& nb1, const std::string& nb2);
		static std::string&			max(std::string& nb1, std::string& nb2);
		static const std::string&	maxconst(const std::string& nb1, const std::string& nb2);
};

std::ostream&	operator<<(std::ostream& obj, const Fixed& rhs);

#endif

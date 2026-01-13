/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 13:34:37 by lylrandr          #+#    #+#             */
/*   Updated: 2026/01/08 16:09:40 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>
# include <iosfwd>

class Fixed{
	private:
		int					_fixed;
		static const int	_fract;
	public:
		Fixed();
		Fixed(const float nb);
		Fixed(const Fixed &src);
		Fixed(const int value);
		~Fixed();

		Fixed&	operator=(const Fixed &rhs);
		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;
};

std::ostream&	operator<<(std::ostream& obj, const Fixed& rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lylrandr <lylrandr@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:41:09 by lylrandr          #+#    #+#             */
/*   Updated: 2025/12/17 18:15:13 by lylrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <string>
# include <iostream>

class Fixed{
	private:
		int					_num;
		static const int	_fract;
	public:
		Fixed();
		Fixed(const Fixed &src);
		Fixed&	operator=(const Fixed &rhs);
		~Fixed();

		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif

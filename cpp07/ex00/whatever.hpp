/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:20:05 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 20:55:28 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
void swap(T &x, T &y)
{
	T swap = x;

	x = y;
	y = swap;
}

template<typename T>
T const &min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y)
{
	return ((x > y) ? x : y);
}
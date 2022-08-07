/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 19:53:14 by apommier          #+#    #+#             */
/*   Updated: 2022/08/07 20:22:02 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>

template<typename T>
typename T::iterator easyfind(T &tab, int toFind)
{
	typename T::iterator result = find(tab.begin(), tab.end(), toFind);
	return (result);
}
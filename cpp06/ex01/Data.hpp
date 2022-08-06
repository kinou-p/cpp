/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apommier <apommier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:23:39 by apommier          #+#    #+#             */
/*   Updated: 2022/08/06 18:33:43 by apommier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <stdint.h>

struct	Data{
	std::string proofOfMyExistence;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
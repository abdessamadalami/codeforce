/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zomie.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:46:36 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/20 15:46:56 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie:: ~Zombie()
{
    std:: cout << " this zombie destroyed " <<name<< std::endl;
}
 Zombie:: Zombie(std:: string name)
{
    set_name(name);
    announs();
}

Zombie:: Zombie()
{
}

std::string Zombie:: get_name()
{
    return name;
}

void Zombie:: announs()
{
    std:: cout << name << ": BraiiiiiiinnnzzzZ\n" ;
}

void Zombie:: set_name(std :: string str)
{
    name = str;
}
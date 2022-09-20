/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:08:31 by ael-oual          #+#    #+#             */
/*   Updated: 2022/09/20 16:34:01 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *alami;
   
    alami = new Zombie;
    alami->set_name(name);
    alami->announs();
    return alami;
}

int main()
{
    Zombie *abdessamd;
    abdessamd = newZombie("abdessanad");
    delete abdessamd;
    randomChump("alami");
    //delete (*abdessamd);
}
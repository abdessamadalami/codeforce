/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sumof.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:45:35 by ael-oual          #+#    #+#             */
/*   Updated: 2022/10/18 18:15:16 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include<cmath>

using namespace std;
void pint(string s)
{
    int i;
    int n = 0;
    while (i < s.length())
    {
        if (s[i] != '0')
            n++;
        i++;
    }
    cout << n << endl;
}
int main()
{
    int a;
    int nbr,t,base,size  , j;
    string nb;
    cin >> a;
    int array[a];
    for (size_t i = 0; i < a; i++)
    {
        cin >> array[i];
    }
    for (size_t i = 0; i < a; i++)
    {
        nb =  to_string(array[i]);
        pint(nb);
        size = nb.length();
        j = 0;
        while (size)
        {
            int c = (nb[j] - '0') * pow(10, size)/10;
            if (c > 0)
            {           
                cout << c << " ";
            }
            
            size--;
            j++;    
        }
        cout << endl;
    }   
}
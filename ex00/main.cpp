/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:35:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/29 20:36:32 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


std :: ostream & operator << ( std :: ostream &out, const Bureaucrat& B)
{
    out << B.getName() << " , bureaucrat grade " << B.getGrade() << std :: endl;
    return out;
}

int main()
{
    try
    {
        Bureaucrat B;
        std :: cout << B;
        B.decrement();
    }
    catch(std::exception &e)
    {
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    system("leaks Bureaucrat");
    return(0);
}

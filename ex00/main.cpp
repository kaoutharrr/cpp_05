/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:35:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/19 01:52:17 by kkouaz           ###   ########.fr       */
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

    Bureaucrat B("lkkj", 150);
    try
    {
        
        B.decrement();
       //// B.increment();
    }
    catch(Bureaucrat :: GradeTooHighException &e)
    {
        std :: cout << B;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
    catch(Bureaucrat :: GradeTooLowException &e)
    {
        std :: cout << B;
        std :: cerr << "Exception : " << e.what() << std :: endl;
    }
   // catch(...)
    //return 0;
}

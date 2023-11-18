/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkouaz <kkouaz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 00:35:00 by kkouaz            #+#    #+#             */
/*   Updated: 2023/11/18 00:43:53 by kkouaz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


std :: ostream & operator << ( std :: ostream &out, const Bureaucrat& B)
{
    out << B.getName() << " , bureaucrat grade " << B.getGrade() << std :: endl;
}


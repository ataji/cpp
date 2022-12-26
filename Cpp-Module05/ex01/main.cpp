/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <ataji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 16:52:49 by ataji             #+#    #+#             */
/*   Updated: 2022/12/25 21:36:54 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// int main(){
//     try{
//         Bureaucrat Bur("Ghost", 220);
//         Bureaucrat B(Bur);
//         std::cout << Bur << std::endl;
//         // Bureaucrat.decrement();
//     }catch(std::exception &e){
//         std::cout << "Error : ";
//         std::cout << e.what();
//     }
//     // Bureaucrat.getGrade();
//     // Bureaucrat.getName();
// }

// int main()
// {
//     try
//     {
//         Bureaucrat b("Soap", 3);
//         std::cout << b << std::endl;

//         b.increment();
//         std::cout << b << std::endl;

//         b.decrement();
//         b.decrement();
//         std::cout << b << std::endl;
//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << std::endl;
//     }

//     return 0;
// }

int main(){
    try{
        Bureaucrat Bur("ayoub", 24);
        Form form("taji", 23, 26);
        form.beSigned(Bur);
        Bur.signForm(form);
        std::cout << form << std::endl;
    } catch (std::exception& e){
        std::cout << "Error : " << e.what() << std::endl;
    }
}
